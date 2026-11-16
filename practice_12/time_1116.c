#include <stdio.h>

int main()
{
    int n = 0;
    printf("请输入正整数N: ");
    scanf("%d",&n);

    //输入校验：<=0，就一直问
    while(n <= 0)
    {
        printf("请输入正整数N: ");
        scanf("%d", &n);
    }

    int i = 1;
    int sum = 0;
    while(i <= n)
    {
        sum += i;
        i ++;
    }
    printf("1+2+3+4+...+%d = %d\n", n, sum);
    return 0;
}




//温度计转换器
int main1()
{
    double c;  //摄氏温度
    int count = 0;  //计数器：转换了几次

    while(1)
    {
        printf("输入摄氏温度（-999退出): ");
        scanf("%lf",&c);

        if(c == -999)
        {
            printf("共转换了 %d 次, 再见！\n",count);
            break;
        }
        printf("%.1fC = %.1fF\n",c, c * 9.0 / 5 + 32);
        count ++;
    }
    return 0;
}