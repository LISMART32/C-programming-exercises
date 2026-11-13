#include <stdio.h>


//判断是否为三角形
int main()
{
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if(a + b > c && a + c > b && b + c > a)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}



//判断是否为闰年
int main7()
{
    int year;
    scanf("%d",&year);
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("闰年");
    }
    else
    {
        printf("不是闰年");
    }
    return 0;
}


//输入一个三位数然后逆序输出
int main6()
{
    int n;
    scanf("%d",&n);
    while(n > 0)
    {
        printf("%d",n % 10);
        n /= 10;
    }
    return 0;
}


//输入大写字母输出小写字母
int main5()
{
    char ch;
    scanf("%c",&ch);
    printf("%c\n",ch + 32);
    return 0;
}


//判断大小
int main4()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x > y)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
    return 0;
}


//判断奇偶
int main3()
{
    int n;
    scanf("%d",&n);
    if(n % 2 == 1)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
    return 0;
}



//华氏温度转摄氏温度
int main2()
{
    float f;
    scanf("%f",&f);
    printf("%.2f\n",5 * (f - 32) / 9);
    return 0;
}

//输入三个整数，输出它们的平均值（保留小数）
int main1()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.2f\n",(a+b+c) / 3.0);
    return 0;
}