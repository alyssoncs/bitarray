#include <stdio.h>
#include "bitarray.h"

int main(void)
{
	bitnode *bitarr = create_bit_array(8);

	clear_bit(bitarr, 0);
	set_bit(bitarr, 1);
	clear_bit(bitarr, 2);
	clear_bit(bitarr, 3);
	set_bit(bitarr, 4);
	set_bit(bitarr, 5);
	set_bit(bitarr, 6);
	clear_bit(bitarr, 7);

	for (int i = 0; i < 8; i++) 
		printf("%d", bit_value(bitarr, i));
	printf("\n");

	destroy_bit_array(bitarr);
	
	return 0;
}
