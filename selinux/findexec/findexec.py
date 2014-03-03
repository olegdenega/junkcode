#!/usr/bin/python
import commands
import sys

def is_execstack(path):
    if path[0] != "/":
        return False

    x = commands.getoutput("execstack -q %s" %   path).split()
    return ( x[0]  == "X" )

def find_execstack(exe, pid):
    execstacklist = []
    for path in commands.getoutput("ldd %s" %   sys.argv[1]).split():
        if is_execstack(path) and path not in execstacklist:
                execstacklist.append(path)
    try:
        fd = open("/proc/%s/maps" % pid , "r")
        for rec in fd.readlines():
            for path in rec.split():
                if is_execstack(path) and path not in execstacklist:
                    execstacklist.append(path)
    except IOError:
        pass

    return execstacklist

pid=-1
try:
    pid	= sys.argv[2]
except:
    pass

try:
	path=sys.argv[1]
	for i in find_execstack(path, pid):
	    print "execstack -c   %s" %  i
except:
	print "Usage:  %s  executable [ pid ]" % sys.argv[0]