#include <stdio.h>


//输出两个整数，分别表示 a除以 b 的商和余数，中间用空格隔开。
int main() 
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int c = a / b;
    int d = a % b;
    printf("%d %d",c,d);
    return 0;
}

//多组输入，每行输入包括一个整数表示的智商。,大于等于140，则表明他是一个天才，输出“Genius”。
int main33() 
{
   int a=0;
   while(scanf("%d",&a)!=EOF)
   {
        if(a >= 140)
        {
            printf("Genius");
        } 
   }
   return 0;
   
}

//有多组输入数据，每一行输入两个整数.针对每行输入，输出两个整数及其大小关系
int main2() 
{
    int a = 0;
    int b = 0;
    while(scanf("%d%d",&a,&b))
    {
      if(a == b)
      {
          printf("%d=%d\n",a,b);
      }
      else if(a > b)
      {
          printf("%d>%d\n",a,b);
      }
      else
      {
          printf("%d<%d\n",a,b);
      }
    }
    return 0;
}



//输入包括一个整数M,如果M可以被5整除就输出YES，否则输出NO
int main1() 
{
    int M=0;
    scanf("%d",&M);
     if(M % 5 == 0)
    {
        printf("YES");
    }
     else if (M % 5 != 0)
    {
        printf("NO");
    }
    return 0;
}