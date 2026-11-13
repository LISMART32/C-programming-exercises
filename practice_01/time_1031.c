#include <stdio.h>
#include <stdbool.h>

//int a = 5;
int main()
{
    int a = 10;
    printf("%d",a);//局部变量优先被使用
    return 0;
}



int main3()
{
    _Bool flg = true;
    if(flg)
    {
        printf("this is true!\n");
    }
    return 0;

}



int main2()
{
    float f = 12.5f;
    printf("%f\n",f);
    return 0;
}


int main1()
{
    printf("The size of short is %zu bytes.\n",sizeof(short));
    printf("The size of int is %zu bytes.\n",sizeof(int));
    printf("The size of long is %zu bytes.\n",sizeof(long));
    printf("The size of long long is %zu bytes.\n",sizeof(long long));
    return 0;
}