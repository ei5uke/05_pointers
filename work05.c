#include <stdio.h>

int main()
{
    //1
    char a = 0;
    int b = 0;
    long c = 0;

    //2
    printf("Decimal\n");
    printf("&a: %c\n", &a); //this address sometimes is blank??
    printf("&b: %d\n", &b);
    printf("&c: %ld\n", &c);
    printf("Hex\n");
    printf("&a: %p\n", &a);
    printf("&b: %p\n", &b);
    printf("&c: %p\n", &c);

    //3
    char *ap = &a;
    int *bp = &b;
    long *cp = &c;

    //4
    printf("ap: %d\n", ap);
    printf("bp: %d\n", bp);
    printf("cp: %d\n", cp);

    //5
    *ap = 1;
    *bp = 1;
    *cp = 1;
    //printf("*ap: %d\n", *ap);
    //printf("*bp: %d\n", *bp);
    //printf("*cp: %d\n", *cp);

    //6
    unsigned int d;
    int *dpi = &d;
    char *dpc = &d;

    //7
    printf("dpi: %p dpi points to: %d\n", dpi, *dpi);
    printf("dpc: %p dpc points to: %d\n", dpc, *dpc);

    //8
    printf("d (decimal int): %u\n", d);
    printf("d (hexadec int): %x\n", d); //this matches the decimal

    //9
    printf("1st byte: %hhu\n", *(dpc)); //pointer arithmetic
    printf("2nd byte: %hhu\n", *(dpc+1)); //because the pointer is of type char, it only 
    printf("3rd byte: %hhu\n", *(dpc+2)); //adds by 1 bytes rather than 4 bytes.
    printf("4th byte: %hhu\n", *(dpc+3));

    //10
    int i = 0;
    for (i; i < 4; i++)
    {
        printf("1st byte (dec): %hhu\n", *(dpc + i));
        printf("1st byte (hex): %hhx\n", *(dpc + i));
    }

    //11
    for (i = 0; i < 4; i++)
    {
        printf("1st byte (dec): %hhu\n", *(dpc + 16 * i));
        printf("1st byte (hex): %hhx\n", *(dpc + 16 * i));
    }

    return 0;
}