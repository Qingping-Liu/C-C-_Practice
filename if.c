#include <stdio.h>

int main()
{
    int i;
    printf("how old you are?");
    scanf("%d", &i);

    if (i >= 18)
    {
        printf("left");
    }
    else
    {
        printf("right");
    }
}