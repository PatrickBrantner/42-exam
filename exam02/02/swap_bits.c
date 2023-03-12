/* #include <unistd.h>

void	print_bits(unsigned char octet)
{
    unsigned char bit;
    int i = 7;
    while (i >= 0)
    {   
        bit = (octet >> i & 1) + '0';
        write(1,&bit,1);
        i--;
    }
} */

unsigned char	swap_bits(unsigned char octet)
{
    unsigned char bit;

    bit = octet << 4;
    octet = octet >> 4;
    bit = bit + octet;
    return (bit);
}

/* int     main()
{
    unsigned char bit;
    print_bits(5);
    write (1,"\n",1);
    bit = swap_bits(5);
    print_bits(bit);
} */