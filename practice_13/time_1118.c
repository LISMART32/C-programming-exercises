#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    if(num % 2 == 1)
    {
        printf("%d 是奇数\n", num);
    }
    else
    {
        printf("%d 是偶数\n", num);
    }
    return 0;
}

int main6()
{
    int n = 0;
    scanf("%d", &n);
    if(n >= 10)
    {
        printf("n >= 10\n");
    }
    else if(n >= 5)
    {
        printf("n >= 5 && n < 10\n");
    }
    else
    {
        printf("n < 5\n");
    }
    return 0;
}



int main5()
{
    int age = 0;
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("成年\n");
    }
    else
    {
        printf("未成年\n");
    }
    return 0;
}


//求二进制中1的个数
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
    printf("二进制中1的个数 = %d\n", count);
    return 0;
}



int main3()
{
    int num1 = -3;
    int num2 = 5;
    printf("%d\n", num1 & num2);  //按位与
    printf("%d\n", num1 | num2);  //按位或
    printf("%d\n", num1 ^ num2);  //按位异或
    printf("%d\n",~2);            //按位取反
    return 0;
}


//右移一位每次除以2(正数，负数的小数都是向下取整)
int main2()
{
    int num = 10;
    int n = num >>1;
    printf("n = %d\n", n);
    printf("num = %d\n",num);
    return 0;
}


//左移一位每次乘2
int main1()
{
    int num = 10;
    int n = num << 1;
    printf("n = %d\n", n);
    printf("num = %d\n",num);
    return 0;
}