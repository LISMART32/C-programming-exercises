#include <stdio.h>


//找到1~100之间所有能被3整除的数字，用continue
int main()
{
    int i = 1;
    for(i = 1; i <= 100; i++)
    {
        if(i % 3 != 0)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}


//找到1~100之间第一个能被3整除的数字，用break
int main7()
{
    int i = 1;
    for(i = 1; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}

//打印九九乘法表
int main6()
{
    int i = 1;
    int j = 1;
    for(i = 1 ; i <= 9; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d * %d = %-3d ", i, j, j * i);
        }
        printf("\n");
    }
    return 0;
}

//求1~100之间2的倍数的数字之和
int main5()
{
    int i = 2;
    int sum = 0;
    for(i = 2; i <= 100; i += 2)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}


//求1~100之间2的倍数的数字之和
int main4()
{
    int i = 1;
    int sum = 0;
    for(i = 1; i <= 100; i ++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}


//求5的阶乘
int main3()
{
    int n = 5;
    int i = 1;
    int ret = 1;
    while(i <= n)
    {
        ret *= i;
        i ++;
    }
    printf("%d\n", ret);
    return 0;
}


//输入一个正的整数，逆序打印出
int main2()
{
    int n = 0;
    scanf("%d", &n);
    while(n != 0)
    {
        printf("%d\n", n % 10);
        n /= 10;
    }
    return 0;
}


//在屏幕上打印1~10
int main1()
{
    int i = 1;
    while(i <= 10)
    {
        printf("%d\n", i);
        i ++;
    }
    return 0;  
}