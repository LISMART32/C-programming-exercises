#include <stdio.h>


//输入一个1~7的数字，打印对应信息
//1.输入1~5，输出的是“工作日” 2.输入6~7,输出“休息日”
int main()
{

    int day = 0;
    printf("请输入1~7的一个数字");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("工作日\n");
            break;
        case 6:
        case 7:
            printf("休息日\n");
            break;
    }
    return 0;
}


//输入一个年份year，判断year是否是闰年
int main3()
{
    int year = 0;
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("year是闰年");
    }
    return 0;
}


//输入一个月份，如果在12月或者1月或者2月则输出：冬季
int main2()
{
    int month = 0;
    scanf("%d",&month);
    if(month == 12 || month == 1 || month == 2)
    {
        printf("冬季\n");
    }
    return 0;
}


//输入一个月份，如果在3月到5月之间，输出春季
int main1()
{
    int month = 0;
    scanf("%d", &month);
    if(month >= 3 && month <= 5)
    {
        printf("春季\n");
    }
    return 0;
}