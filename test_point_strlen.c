#include<stdio.h>
#include<ctype.h>

int strlen_bai(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
        n++;
    return n;
}

int main(int argc, char **argv)
{
    char *s = "wangyifeng is best.";

    printf("the string length is %d\n", strlen_bai(s));
}
