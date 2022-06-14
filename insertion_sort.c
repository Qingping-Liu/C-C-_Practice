#include <stdio.h>
# define N 6


void insert_sort(int a[], int n);

void insert_sort(int a[], int n)
{
    int i,j,value;
    printf("\nSTART SORTINT");
    for (j=2; j<n; j++)
    {
        printf("\nhhhhhhh");
        i = j-1;
        while (i>0){
            if (a[i]>a[j])
                value = a[i];
                a[i] = a[j];
                a[j] = value;
                --i;
        } 
    }
}
int main()
{
    int num[N] = {5, 3, 9, 7, 4, 2};
    printf("processing");
    insert_sort(num, N);
    for (int i=0; i<N; i++)
        printf("%d", num[i]);
        printf("\n");
}