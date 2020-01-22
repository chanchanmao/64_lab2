#include "stdio.h"
#include "stdlib.h"

int multiplyBy8(int v)
{
	// TODO: multiply the number by 8
	return v <<= 3;
}

int setBit6to1(int v)
{
	// TODO: set bit 6 to 1
	return v |= 0x40;
}

int setBit3to0(int v)
{
	// TODO: set bit 3 to 0
	return v &= ~0x08;
}
	
int flipBit5(int v)
{
	// TODO: flip bit 5 (if it is 0, make it 1.  If 0, make 1)
	return v ^ 0x20;
}
	
int ifBit7is0(int v)
{
	// TODO: check to see if bit 7 is a 0 - return 1 if true, 0 if false
	if (!(v & (1 << 7))) {
		return 1;
	} else {
		return 0;
	}
}

int ifBit3is1(int v)
{
	// check to see if bit 3 is a 1 - return 1 if true, 0 if false
	if (v & (1 << 3)) {
		return 1;
	} else {
		return 0;
	}
}

int unsignedBits0through5(int v)
{
	// return the unsigned value in bits 0 through 5
	return v &= ((1 << 6) - 1);
}

int unsignedBits6through9(int v)
{
	// return the unsigned value in bits 6 through 9
	v = (((1 << 4) - 1) & (v >> 6));
	return v;
}

int signedBits0through5(int v)
{
	// return the signed value in bits 0 through 5
	if (v & 0x020) {
		return v | 0x0FFFFFFE0;
	} else {
		return v & 0x01F;
	}
}

int signedBits6through9(int v)
{
	// return the signed value in bits 6 through 9
	if (v & (1 << 9)) {
		v = ((v >> 6 | 0x0FFFFFFF0));
	} else {
		v = (((1 << 4) - 1) & (v >> 6));
	}
	return v;
}

int setBits4through9(int v, int setValue)
{
	// set bits 4 through 9 in v to become setValue
	setValue &= ((1 << 6) - 1);
	setValue = setValue << 4;
	v &= (0x0FFFFFC0F);
	return v | setValue;
}




