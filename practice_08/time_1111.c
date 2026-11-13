#include <stdio.h>

//求一个数一共有多少位
int main()
{
    int n, c = 0;
    scanf("%d",&n);
    while(n > 0)
    {
        n /= 10;
        c ++;
    }
    printf("%d\n",c);
    return 0;
}

//判断奇偶性
int main2()
{
    int a = 0;
    scanf("%d",&a);
    if(a % 2 != 0)
    {
        printf("奇数");
    }
    else
    {
        printf("偶数");
    }
    return 0;
}


//求1~n的和
int main1()
{
    int n = 0, i = 1, s = 0;
    scanf("%d",&n);
    while(i <= n)
    {
        s += i;
        i ++;
    }
    printf("%d\n",s);
    return 0;
}