//
// Windows1252Encoding.cpp
//
// Library: Foundation
// Package: Text
// Module:  Windows1252Encoding
//
// Copyright (c) 2005-2007, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#include "Poco/Windows1252Encoding.h"
#include "Poco/String.h"
#include <map>


namespace Poco {


const char* Windows1252Encoding::_names[] =
{
	"windows-1252",
	"Windows-1252",
	"cp1252",
	"CP1252",
	NULL
};


const TextEncoding::CharacterMap Windows1252Encoding::_charMap = 
{
	/*          00      01      02      03      04      05      06      07      08      09      0a      0b      0c      0d      0e      0f   */
	/* 00 */	0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 
	/* 10 */	0x0010, 0x0011, 0x0012, 0x0013, 0x0014, 0x0015, 0x0016, 0x0017, 0x0018, 0x0019, 0x001a, 0x001b, 0x001c, 0x001d, 0x001e, 0x001f, 
	/* 20 */	0x0020, 0x0021, 0x0022, 0x0023, 0x0024, 0x0025, 0x0026, 0x0027, 0x0028, 0x0029, 0x002a, 0x002b, 0x002c, 0x002d, 0x002e, 0x002f, 
	/* 30 */	0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037, 0x0038, 0x0039, 0x003a, 0x003b, 0x003c, 0x003d, 0x003e, 0x003f, 
	/* 40 */	0x0040, 0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 0x0049, 0x004a, 0x004b, 0x004c, 0x004d, 0x004e, 0x004f, 
	/* 50 */	0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 0x0058, 0x0059, 0x005a, 0x005b, 0x005c, 0x005d, 0x005e, 0x005f, 
	/* 60 */	0x0060, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e, 0x006f, 
	/* 70 */	0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077, 0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x007f, 
	/* 80 */	0x20ac, 0x0081, 0x201a, 0x0192, 0x201e, 0x2026, 0x2020, 0x2021, 0x02c6, 0x2030, 0x0160, 0x2039, 0x0152, 0x008d, 0x017d, 0x008f, 
	/* 90 */	0x0090, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014, 0x02dc, 0x2122, 0x0161, 0x203a, 0x0153, 0x009d, 0x017e, 0x0178, 
	/* a0 */	0x00a0, 0x00a1, 0x00a2, 0x00a3, 0x00a4, 0x00a5, 0x00a6, 0x00a7, 0x00a8, 0x00a9, 0x00aa, 0x00ab, 0x00ac, 0x00ad, 0x00ae, 0x00af, 
	/* b0 */	0x00b0, 0x00b1, 0x00b2, 0x00b3, 0x00b4, 0x00b5, 0x00b6, 0x00b7, 0x00b8, 0x00b9, 0x00ba, 0x00bb, 0x00bc, 0x00bd, 0x00be, 0x00bf, 
	/* c0 */	0x00c0, 0x00c1, 0x00c2, 0x00c3, 0x00c4, 0x00c5, 0x00c6, 0x00c7, 0x00c8, 0x00c9, 0x00ca, 0x00cb, 0x00cc, 0x00cd, 0x00ce, 0x00cf, 
	/* d0 */	0x00d0, 0x00d1, 0x00d2, 0x00d3, 0x00d4, 0x00d5, 0x00d6, 0x00d7, 0x00d8, 0x00d9, 0x00da, 0x00db, 0x00dc, 0x00dd, 0x00de, 0x00df, 
	/* e0 */	0x00e0, 0x00e1, 0x00e2, 0x00e3, 0x00e4, 0x00e5, 0x00e6, 0x00e7, 0x00e8, 0x00e9, 0x00ea, 0x00eb, 0x00ec, 0x00ed, 0x00ee, 0x00ef, 
	/* f0 */	0x00f0, 0x00f1, 0x00f2, 0x00f3, 0x00f4, 0x00f5, 0x00f6, 0x00f7, 0x00f8, 0x00f9, 0x00fa, 0x00fb, 0x00fc, 0x00fd, 0x00fe, 0x00ff, 
};


Windows1252Encoding::Windows1252Encoding()
{
}


Windows1252Encoding::~Windows1252Encoding()
{
}


const char* Windows1252Encoding::canonicalName() const
{
	return _names[0];
}


bool Windows1252Encoding::isA(const std::string& encodingName) const
{
	for (const char** name = _names; *name; ++name)
	{
		if (Poco::icompare(encodingName, *name) == 0)
			return true;
	}
	return false;
}


const TextEncoding::CharacterMap& Windows1252Encoding::characterMap() const
{
	return _charMap;
}


int Windows1252Encoding::convert(const unsigned char* bytes) const
{
	return _charMap[*bytes];
}


int Windows1252Encoding::convert(int ch, unsigned char* bytes, int length) const
{
	if (ch >= 0 && ch <= 255 && _charMap[ch] == ch)
	{
		if (bytes && length >= 1)
			*bytes = ch;
		return 1;
	}
	else {
        switch (ch)
        {
        case 0x20ac: if (bytes && length >= 1) *bytes = 0x80; return 1;
        case 0x201a: if (bytes && length >= 1) *bytes = 0x82; return 1;
        case 0x0192: if (bytes && length >= 1) *bytes = 0x83; return 1;
        case 0x201e: if (bytes && length >= 1) *bytes = 0x84; return 1;
        case 0x2026: if (bytes && length >= 1) *bytes = 0x85; return 1;
        case 0x2020: if (bytes && length >= 1) *bytes = 0x86; return 1;
        case 0x2021: if (bytes && length >= 1) *bytes = 0x87; return 1;
        case 0x02c6: if (bytes && length >= 1) *bytes = 0x88; return 1;
        case 0x2030: if (bytes && length >= 1) *bytes = 0x89; return 1;
        case 0x0160: if (bytes && length >= 1) *bytes = 0x8a; return 1;
        case 0x2039: if (bytes && length >= 1) *bytes = 0x8b; return 1;
        case 0x0152: if (bytes && length >= 1) *bytes = 0x8c; return 1;
        case 0x017d: if (bytes && length >= 1) *bytes = 0x8e; return 1;
        case 0x2018: if (bytes && length >= 1) *bytes = 0x91; return 1;
        case 0x2019: if (bytes && length >= 1) *bytes = 0x92; return 1;
        case 0x201c: if (bytes && length >= 1) *bytes = 0x93; return 1;
        case 0x201d: if (bytes && length >= 1) *bytes = 0x94; return 1;
        case 0x2022: if (bytes && length >= 1) *bytes = 0x95; return 1;
        case 0x2013: if (bytes && length >= 1) *bytes = 0x96; return 1;
        case 0x2014: if (bytes && length >= 1) *bytes = 0x97; return 1;
        case 0x02dc: if (bytes && length >= 1) *bytes = 0x98; return 1;
        case 0x2122: if (bytes && length >= 1) *bytes = 0x99; return 1;
        case 0x0161: if (bytes && length >= 1) *bytes = 0x9a; return 1;
        case 0x203a: if (bytes && length >= 1) *bytes = 0x9b; return 1;
        case 0x0153: if (bytes && length >= 1) *bytes = 0x9c; return 1;
        case 0x017e: if (bytes && length >= 1) *bytes = 0x9e; return 1;
        case 0x0178: if (bytes && length >= 1) *bytes = 0x9f; return 1;
        default: return 0;
        }
    }
}


int Windows1252Encoding::queryConvert(const unsigned char* bytes, int length) const
{
	if (1 <= length)
		return _charMap[*bytes];
	else
		return -1;
}


int Windows1252Encoding::sequenceLength(const unsigned char* bytes, int length) const
{
	return 1;
}


} // namespace Poco
