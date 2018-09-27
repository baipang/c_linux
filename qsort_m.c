#include<stdio.h>

#define length(sort_number) ( (sizeof sort_number) / (sizeof *sort_number) )

void qsort(int v[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);

    if (left >= right)
        return;
    swap(v, left, (left+right)/2);
    last = left;

    for (i = left + 1; i <= right; i++) 
        if (v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last);

    qsort(v, left, last-1);
    qsort(v, last+1, right);
}

void swap(int v[], int i, int j)
{
    int tmp;

    tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

int main(int argc, char *argv[])
{
    int sort_number[] = {1, 2, 3, 6, 5, 4};
    int size = length(sort_number); 

    printf("the array length is %d\n", size);
    qsort(sort_number, 0, 5);

    int i = 0;
    while(sort_number[i] != '\0')
        printf("%d\t", sort_number[i++]);
    printf("\n");
    return 0;
}
