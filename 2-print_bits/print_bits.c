// Success
// Explaination for this on my blog:
// http://elevatecode.blogspot.com/2019/03/printbits_4.html

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}

/* Testing Only
#include <stdio.h>
int		main(void){
	print_bits(2);
		printf("\n");
	print_bits(4);
		printf("\n");
	print_bits(128);
		printf("\n");
	print_bits(27);
	print_bits('a');
	printf("\n");
	return(0);
}

*/