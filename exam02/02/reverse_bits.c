/* #include <unistd.h>
#include <stdio.h>

void    print_bits(unsigned char octet)
{
    int i = 7;
    unsigned char bit = 0;
    while (i >= 0)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
        i--;
    }
} */

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 0;
	unsigned char a;
	a = 0;
	
	while (i < 8)
	{
		if ((octet>>i) & 1)
			a += 1 << (7-i);
		i++;
	}
	return a;
}

/* int     main()
{
    unsigned char bit;
    print_bits(5);
    write(1,"\n",1);
    bit = reverse_bits(5);
    print_bits(bit);
    write(1,"\n",1);
} */