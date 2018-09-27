#include<stdio.h>
#include<stdlib.h>

void printd(int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10)
        printd(n / 10);
    putchar(n % 10 + '0');
}

int main(int argc, char *argv[])
{
    printd(123);
    return 0;
}
