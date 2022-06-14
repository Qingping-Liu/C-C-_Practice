# include <stdio.h>
# include <string.h>

int add(int a, int b)
{
    int z = 0;
    z = a + b;
    return z;
} 


int main()
{
    int a = 10;
    int b = 20;
    int sum = add(a, b);
    printf("************\n");
    printf("%d\n", sum);
    // strlen
    return 0;
}

/* int mian()
{
    // strlen -- string length -- 字符串长度
    // strcp  -- string copy    -- 复制字符串
    char arr1[] = "bit";
    char arr2[20] = "########";
    printf("char arr1:%s\n", arr1);
     printf("char arr2:", arr2);
    strcpy(arr2, arr1);
    printf("char arr2:", arr2); 
    return 0;
} 
*/