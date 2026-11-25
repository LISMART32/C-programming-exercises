#include <stdio.h>


//写一个代码打印1-100之间所有3的倍数的数字
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

//求10 个整数中最大值
int main4()
{
    int i;
    int num;
    int max;
    printf("请输入10个整数\n");

    //取第一个数，假设它为最大值
    scanf("%d", &num);
    max = num;

    for(i = 1; i < 10; i ++)
    {
        scanf("%d", &num);  //更新最大值
    
        if(num > max)
        {
            max = num;
        }
    }
    printf("最大值为 %d\n", max);
    return 0;
}

//2的简洁  计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main3()
{
    int i = 1;
    double sum = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 2 != 0)
        {
            sum += 1.0/i;
        }
        if(i % 2 == 0)
        {
            sum -= 1.0/i;
        }
    }
    printf("结果为 %f \n", sum);
    return 0;
}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main2()
{
    int a = 1;
    int b = 1;
    double sum1 = 0;
    double sum2 = 0;
    for(a = 1; a <= 100; a += 2)
    {
        sum1 += 1.0/a;
    }
    for(b = 2; b <= 100; b += 2)
    {
        sum2 += 1.0/b;
    }
    printf("%f\n", sum1 - sum2);
    return 0;
}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
int main1()
{
    int i = 1;
    int count = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 10 == 9)
        {
            count ++;
        }
        if(i / 10 == 9)
        {
            count ++;
        }
    }
    printf("出现 %d 个9", count);
    return 0;
}