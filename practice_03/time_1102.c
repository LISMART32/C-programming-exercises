/*求：s=a+aa+aaa+aaaa+aa....a的值
其中a是一个数字。例如2+22+222+2222+22222（此时共有5个数相加）
几个数相加由键盘控制。*/
#include <stdio.h>

int main()
{
    int a,n;
    int t;
    int sum = 0;
    printf("请用户输入a和n");
    scanf("%d%d",&a,&n);
    t = a;
    while(n > 0)
    {
        sum = sum + t;
        t = t * 10 + a;
        n = n - 1;
    }
    printf("%d\n",sum);
    return 0;
}