#include <stdio.h>


//输入一个正数逆序输出
int main()
{
    int n;
    scanf("%d",&n);
    while(n > 0)
    {
        printf("%d",n % 10);
        n = n / 10;
    }
    return 0;
}




//猜数字
int main4()
{
    int a, cnt = 0;
    while(1)
    {
        scanf("%d",&a);
        cnt ++;
        if(a < 42)
        {
            printf("太小了\n");
        }
        else if(a > 42)
        {
            printf("太大了\n");
        }
        else
        {
            printf("猜对了！用了 %d 次\n", cnt);
            break;
        }
    }
    return 0;
}



//累加求和
int main3()
{
    int n, i = 1 ,sum = 0;
    scanf("%d",&n);
    while (i <= n)
    {
        sum += i;
        i ++;
    }
    printf("%d\n", sum);
    return 0;
}




//输入三个整数找出最大的那个
int main2()
{
    int a, b, c, max;
    scanf("%d%d%d",&a, &b, &c);
    max = a;
    if(b > max ) max = b;
    if(c > max ) max = c;
    printf("%d\n", max);
    return 0;
}



int main1()
{
    int a = 0;
    scanf("%d",&a);
    if(a % 2 == 1)
    {
        printf("奇数\n");
    }
    else
    {
        printf("偶数\n");
    }
    return 0;
}