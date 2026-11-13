#include <stdio.h>

int main()
{
   int i;
   int sum = 0;
   for(i = 1;i <= 100;i++)
   {
        sum += i;
   }
   printf("sum = %d\n",sum);
    return 0;
}



//输入一个整数，判断他是奇数还是偶数
int main2()
{
    int a = 0;
    scanf("%d",&a);
    if(a % 2 != 0)
    {
        printf("奇数\n");
    }
    else
    {
        printf("偶数\n");
    }
    return 0;
}



//从键盘中输入两个数字，交换他们的值，然后输出交换出的结果
int main1()
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    printf("%d %d\n",b,a);
    return 0;
}