/*
 * Copyright © 2003-2007 The Kepler Project.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef LXPLIB_H
#define	LXPLIB_H

#define ParserType	"Expat"

#define StartCdataKey			"StartCdataSection"
#define EndCdataKey			"EndCdataSection"
#define CharDataKey			"CharacterData"
#define CommentKey			"Comment"
#define DefaultKey			"Default"
#define DefaultExpandKey		"DefaultExpand"
#define StartElementKey			"StartElement"
#define EndElementKey			"EndElement"
#define ExternalEntityKey		"ExternalEntityRef"
#define StartNamespaceDeclKey		"StartNamespaceDecl"
#define EndNamespaceDeclKey		"EndNamespaceDecl"
#define NotationDeclKey			"NotationDecl"
#define NotStandaloneKey		"NotStandalone"
#define ProcessingInstructionKey	"ProcessingInstruction"
#define UnparsedEntityDeclKey		"UnparsedEntityDecl"

int luaopen_lxp (lua_State * L)
	/*@modifies L @*/;

#endif	/* LXPLIB_H */
