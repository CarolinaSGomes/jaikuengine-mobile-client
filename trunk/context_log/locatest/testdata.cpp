// Copyright (c) 2007-2009 Google Inc.
// Copyright (c) 2006-2007 Jaiku Ltd.
// Copyright (c) 2002-2006 Mika Raento and Renaud Petit
//
// This software is licensed at your choice under either 1 or 2 below.
//
// 1. MIT License
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// 2. Gnu General Public license 2.0
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
//
// This file is part of the JaikuEngine mobile client.

struct TBTTestItem { const TUint16* const node; TInt minute; const TUint8* const bt; TInt aMsgSuccess; };
static const TBTTestItem KBTTest[] = {
	{ L"n1", 1, (const TUint8*)"\x00\x00\x00\x00\x00\x01", -1 }, 
	{ L"n1", 2, (const TUint8*)"\x00\x00\x00\x00\x00\x01", -1 }, 
	{ L"n1", 10, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 1 }, 
	{ L"n1", 12, (const TUint8*)"\x00\x00\x00\x00\x00\x01", -1 }, 
	{ L"n1", 14, (const TUint8*)"\x00\x00\x00\x00\x00\x01", -1 }, 
	{ L"n1", 20, (const TUint8*)"\x00\x00\x00\x00\x00\x01", -1 }, 
	{ L"n1", 30, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 1 }, 
	{ L"n1", 32, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 1 }, 
	{ L"n1", 35, (const TUint8*)"\x00\x00\x00\x00\x00\x01", -1 }, 
	{ L"n1", 130, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n1", 133, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n1", 136, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 1, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 3, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 10, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 12, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 14, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 20, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 30, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 32, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 35, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 130, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 133, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n2", 136, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 1, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 1, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 2, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 2, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 10, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 10, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 12, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 12, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 14, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 14, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 20, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 20, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 30, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 30, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 32, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 32, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 35, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 35, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 130, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 130, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 133, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 133, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n11", 136, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n11", 136, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n12", 1, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 1, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n12", 3, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 3, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n12", 10, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 12, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 14, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 20, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 20, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n12", 30, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 30, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n12", 32, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 32, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n12", 35, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 35, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n12", 130, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 130, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n12", 133, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 133, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n12", 136, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n12", 136, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n1", 230, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n1", 230, (const TUint8*)"\x00\x00\x00\x00\x00\x02", -2 }, 
	{ L"n1", 232, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n1", 232, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 2 }, 
	{ L"n1", 235, (const TUint8*)"\x00\x00\x00\x00\x00\x01", 0 }, 
	{ L"n1", 235, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n2", 230, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n2", 230, (const TUint8*)"\x00\x00\x00\x00\x00\x03", -3 }, 
	{ L"n2", 233, (const TUint8*)"\x00\x00\x00\x00\x00\x02", 0 }, 
	{ L"n2", 233, (const TUint8*)"\x00\x00\x00\x00\x00\x03", 3 }, 
	{ 0, 0, 0 }
};

struct TBTTestStats { 
	const TUint16* const node; 
	TInt minute; 
	const TUint8* const bt; 
	TInt count;
	TInt sum;
	TInt ssum;
	TInt last_seen;
	TInt last_seen_begin;
	TInt prev_seen;
	TInt prev_seen_begin;
	TInt first_seen;
	TInt max_span;
	TInt success_count;
	TInt failure_count;
	TInt local_success_count;
	TInt local_failure_count;
	TInt previous_local_success;
	TInt previous_local_failure;
	TInt previous_remote_success;
	TInt previous_remote_failure;
	};
static const TBTTestStats KBTTestStats[] = {
	{	L"n1", 1,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0	},
	{	L"n1", 2,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		1, 2, 4, 2, 1, 0, 0, 1, 2, 0, 2, 0, 2, 0, 2, 0, 0	},
	{	L"n1", 10,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 3, 5, 10, 10, 2, 1, 1, 2, 1, 2, 1, 2, 10, 2, 0, 0	},
	{	L"n1", 12,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 5, 13, 12, 10, 2, 1, 1, 3, 1, 3, 1, 3, 10, 12, 0, 0	},
	{	L"n1", 14,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 7, 29, 14, 10, 2, 1, 1, 5, 1, 4, 1, 4, 10, 14, 0, 0	},
	{	L"n1", 20,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		3, 8, 30, 20, 20, 14, 10, 1, 5, 1, 5, 1, 5, 10, 20, 0, 0	},
	{	L"n1", 30,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 9, 31, 30, 30, 20, 20, 1, 5, 2, 5, 2, 5, 30, 20, 0, 0	},
	{	L"n1", 32,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 11, 39, 32, 30, 20, 20, 1, 5, 3, 5, 3, 5, 32, 20, 0, 0	},
	{	L"n1", 35,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 14, 66, 35, 30, 20, 20, 1, 6, 3, 6, 3, 6, 32, 35, 0, 0	},
	{	L"n1", 130,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 15, 67, 130, 130, 35, 30, 1, 6, 3, 6, 3, 6, 32, 35, 0, 0	},
	{	L"n1", 133,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 18, 82, 133, 130, 35, 30, 1, 6, 3, 6, 3, 6, 32, 35, 0, 0	},
	{	L"n1", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 21, 115, 136, 130, 35, 30, 1, 7, 3, 6, 3, 6, 32, 35, 0, 0	},
	{	L"n2", 1,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		1, 1, 1, 1, 1, 0, 0, 1, 1, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 3,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		1, 3, 9, 3, 1, 0, 0, 1, 3, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 10,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 4, 10, 10, 10, 3, 1, 1, 3, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 12,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 6, 18, 12, 10, 3, 1, 1, 3, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 14,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 8, 34, 14, 10, 3, 1, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 20,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		3, 9, 35, 20, 20, 14, 10, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 30,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 10, 36, 30, 30, 20, 20, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 32,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 12, 44, 32, 30, 20, 20, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 35,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 15, 71, 35, 30, 20, 20, 1, 6, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 130,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 16, 72, 130, 130, 35, 30, 1, 6, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 133,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 19, 87, 133, 130, 35, 30, 1, 6, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 22, 120, 136, 130, 35, 30, 1, 7, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 1,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		1, 1, 1, 1, 1, 0, 0, 1, 1, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 1,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 2,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		1, 2, 4, 2, 1, 0, 0, 1, 2, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 2,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 2, 4, 2, 1, 0, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 10,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 3, 5, 10, 10, 2, 1, 1, 2, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 10,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		2, 3, 5, 10, 10, 2, 1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 12,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 5, 13, 12, 10, 2, 1, 1, 3, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 12,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		2, 5, 13, 12, 10, 2, 1, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 14,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 7, 29, 14, 10, 2, 1, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 14,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		2, 7, 29, 14, 10, 2, 1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 20,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		3, 8, 30, 20, 20, 14, 10, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 20,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		3, 8, 30, 20, 20, 14, 10, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 30,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 9, 31, 30, 30, 20, 20, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 30,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		4, 9, 31, 30, 30, 20, 20, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 32,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 11, 39, 32, 30, 20, 20, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 32,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		4, 11, 39, 32, 30, 20, 20, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 35,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 14, 66, 35, 30, 20, 20, 1, 6, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 35,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		4, 14, 66, 35, 30, 20, 20, 1, 6, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 130,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 15, 67, 130, 130, 35, 30, 1, 6, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 130,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		5, 15, 67, 130, 130, 35, 30, 1, 6, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 133,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 18, 82, 133, 130, 35, 30, 1, 6, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 133,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		5, 18, 82, 133, 130, 35, 30, 1, 6, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 21, 115, 136, 130, 35, 30, 1, 7, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		5, 21, 115, 136, 130, 35, 30, 1, 7, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n12", 1,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		1, 1, 1, 1, 1, 0, 0, 1, 1, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 1,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n12", 3,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		1, 3, 9, 3, 1, 0, 0, 1, 3, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 3,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 3, 9, 3, 1, 0, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n12", 10,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 4, 10, 10, 10, 3, 1, 1, 3, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 12,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 6, 18, 12, 10, 3, 1, 1, 3, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 14,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		2, 8, 34, 14, 10, 3, 1, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 20,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		3, 9, 35, 20, 20, 14, 10, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 20,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		2, 4, 10, 20, 20, 3, 1, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n12", 30,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 10, 36, 30, 30, 20, 20, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 30,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		3, 5, 11, 30, 30, 20, 20, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n12", 32,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 12, 44, 32, 30, 20, 20, 1, 5, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 32,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		3, 7, 19, 32, 30, 20, 20, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n12", 35,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		4, 15, 71, 35, 30, 20, 20, 1, 6, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 35,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		3, 10, 46, 35, 30, 20, 20, 1, 6, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n12", 130,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 16, 72, 130, 130, 35, 30, 1, 6, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 130,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		4, 11, 47, 130, 130, 35, 30, 1, 6, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n12", 133,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 19, 87, 133, 130, 35, 30, 1, 6, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 133,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		4, 14, 62, 133, 130, 35, 30, 1, 6, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n12", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 22, 120, 136, 130, 35, 30, 1, 7, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		4, 17, 95, 136, 130, 35, 30, 1, 7, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n1", 230,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		6, 22, 116, 230, 230, 136, 130, 1, 7, 3, 6, 3, 6, 32, 35, 0, 0	},
	{	L"n1", 230,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 1, 1, 230, 230, 0, 0, 230, 1, 0, 1, 0, 1, 0, 230, 0, 0	},
	{	L"n1", 232,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		6, 24, 124, 232, 230, 136, 130, 1, 7, 3, 6, 3, 6, 32, 35, 0, 0	},
	{	L"n1", 232,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 3, 9, 232, 230, 0, 0, 230, 3, 1, 1, 1, 1, 232, 230, 0, 0	},
	{	L"n1", 235,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		6, 27, 151, 235, 230, 136, 130, 1, 7, 3, 6, 3, 6, 32, 35, 0, 0	},
	{	L"n1", 235,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 6, 36, 235, 230, 0, 0, 230, 6, 1, 1, 1, 1, 232, 230, 0, 0	},
	{	L"n2", 230,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 1, 1, 230, 230, 0, 0, 230, 1, 1, 1, 0, 0, 0, 0, 232, 230	},
	{	L"n2", 230,
		(const TUint8*)"\x00\x00\x00\x00\x00\x03",
		1, 1, 1, 230, 230, 0, 0, 230, 1, 0, 1, 0, 1, 0, 230, 0, 0	},
	{	L"n2", 233,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 4, 16, 233, 230, 0, 0, 230, 4, 1, 1, 0, 0, 0, 0, 232, 230	},
	{	L"n2", 233,
		(const TUint8*)"\x00\x00\x00\x00\x00\x03",
		1, 4, 16, 233, 230, 0, 0, 230, 4, 1, 1, 1, 1, 233, 230, 0, 0	},
	{ 0, 0, 0 }
};

static const TBTTestStats KBTFinalStats[] = {
	{	L"n2", 233,
		(const TUint8*)"\x00\x00\x00\x00\x00\x03",
		1, 4, 16, 233, 230, 0, 0, 230, 4, 1, 1, 1, 1, 233, 230, 0, 0	},
	{	L"n2", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 22, 120, 136, 130, 35, 30, 1, 7, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n2", 233,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 4, 16, 233, 230, 0, 0, 230, 4, 1, 1, 0, 0, 0, 0, 232, 230	},
	{	L"n12", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 22, 120, 136, 130, 35, 30, 1, 7, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n12", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		4, 17, 95, 136, 130, 35, 30, 1, 7, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n11", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		5, 21, 115, 136, 130, 35, 30, 1, 7, 3, 6, 0, 0, 0, 0, 32, 35	},
	{	L"n11", 136,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		5, 21, 115, 136, 130, 35, 30, 1, 7, 0, 0, 0, 0, 0, 0, 0, 0	},
	{	L"n1", 235,
		(const TUint8*)"\x00\x00\x00\x00\x00\x01",
		6, 27, 151, 235, 230, 136, 130, 1, 7, 3, 6, 3, 6, 32, 35, 0, 0	},
	{	L"n1", 235,
		(const TUint8*)"\x00\x00\x00\x00\x00\x02",
		1, 6, 36, 235, 230, 0, 0, 230, 6, 1, 1, 1, 1, 232, 230, 0, 0	},
	{ 0, 0, 0 }
};

