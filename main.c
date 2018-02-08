#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void zeropad(char *src, char *dst, int dstlen)
{
    char *ptr;

    /* Prefill the entire destination string with zeros. */
    memset(dst, '0', dstlen);

    ptr = dst + dstlen - strlen(src) - 1;
    sprintf(ptr, "%s", src);
}

int main(int argc, char *argv[])
{
    char temp[20];
    char *foo;
    double x = 3.12345678901234551111;

    printf("X: %.10f\n", x);

    /* Left zero padding a string. */
#ifdef FOO
    sprintf(temp, "%0*s", 19, "12345");
    printf("TEMP: %s\n", temp);

    /* Left zero padding a string. */
    memset(temp, '0', sizeof temp - 1);
    printf("TEMP: %s\n", temp);

    foo = temp + sizeof temp - strlen("12345") - 1;
    sprintf(foo, "%s", "12345");
#endif
    zeropad("12345", temp, sizeof temp);
    printf("               1         2\n");
    printf("      12345678901234567890\n");
    printf("TEMP: %s\n", temp);

    exit(0);
}
