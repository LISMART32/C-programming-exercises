#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    float f = 0.0f;
    int r = scanf("%d %d %f",&a,&b,&f);
    printf("a = %d b = %d f = %f\n",a,b,f);
    printf("r = %d\n",r);
    return 0;
}


int main5()
{
    int score = 0;
    printf("请输入成绩:");
    scanf("%d",&score);
    printf("成绩是：%d\n",score);
    return 0;
}



int main4()
{
    printf("%6.2f\n",0.556789);//限定输出字符串最小宽度为6，小数位数为2
    return 0;
}


int main3()
{
    printf("Number is %.2f\n",0.556789);//会四舍五入
    return 0;
}



int main2()
{
    printf("%-5d\n",123);
    return 0;
}


int main1()
{
    printf("%5d\n",123);
    return 0;
}