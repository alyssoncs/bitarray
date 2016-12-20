#include <stdio.h>
#include "bitarray.h"

int main(void)
{
	bitnode* bitarr = createBitArray(8);

	clearBit(bitarr, 0);
	setBit(bitarr, 1);
	clearBit(bitarr, 2);
	clearBit(bitarr, 3);
	setBit(bitarr, 4);
	setBit(bitarr, 5);
	setBit(bitarr, 6);
	clearBit(bitarr, 7);

	printf("%c\n", bitarr[0]);
	
	destroyBitArray(bitarr);
	return 0;
}