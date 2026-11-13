#include <stdio.h>

int main()
{
    int month = 0;
    scanf("%d", &month);
    if(month >= 3 && month <= 5)
    {
        printf("春季\n");
    }
    return 0;
}


int main5()
{
    int a = 0;
    scanf("%d",&a);
    if(a / 2 ==1)
    {
        printf("%d是奇数\n",a);
    }
    else
    {
        printf("%d是偶数\n",a);
    }
    return 0;
}



int main4()
{
    int num = 10;
    int count = 0;
    while(num != 0)
    {
        if((num & 1) == 1)
        {
            count ++;
        }
        num = num >> 1;
    }
    printf("二进制中1的个数 = %d\n",count);
    return 0;
}


int main3()
{
    int num = 10;
    int n = num >> 1;//右移每次除以 2的n次方
    printf("%d\n",num);
    printf("%d\n",n);
    return 0;
}



int main2()
{
    int num = 10;
    int n = num << 1;//左移每次乘以 2的n次方
    printf("n = %d\n",n);
    printf("num = %d\n",num);
    return 0;
}


int main1()
{
    /*整数除法是整除，只会返回整数部分，丢弃小数部分，并且浮点数保留小数点后六位
    两个运算数必须有一个为小数*/
    float x = 6 / 4;
    int y = 6 / 4;
    printf("%f\n",x);
    printf("%d\n",y);
    return 0;
}