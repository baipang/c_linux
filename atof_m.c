#include<stdio.h>
#include<ctype.h>

#define MAXLINE 100

int atoi_m(char s[])
{
    double atof(char s[]);

    return (int) atof(s);
}

int getline_m(char s[], int lim)
{
    int i, c;
    while (--lim > 0 && (c=getchar()) != EOF && c!='\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

double atof_m(char s[])
{
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    return sign * val /power;
}

int main(int argc, char *argv)
{
    double sum, atof_m(char []);
    char line[MAXLINE];
    int getline_m(char line[], int max);

    sum = 0;
    while (getline_m(line, MAXLINE) > 0)
        printf("\t%g\n", sum + atoi_m(line));
    return 0;
}
