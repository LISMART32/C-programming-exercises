#include <stdio.h>

int main()
{
    int n;
    printf("请输入一个正整数 n: ");
    scanf("%d", &n);

    //1.正方形
    printf(" \n [正方形] \n");
    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            printf("* ");
            j ++;
        }
        printf("\n");
        i ++;
    }

    //2.直角三角形
    printf("\n [直角三角形] \n");
    i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            printf("* ");
            j ++;
        }
        printf("\n");
        i ++;
    }

    //3.倒三角
    printf("\n [倒三角] \n");
    i = n;
    while(i >= 1)
    {
        int j = 1;
        while(j <= i)
        {
            printf("* ");
            j ++;
        }
        printf("\n");
        i --;
    }
    return 0;
}