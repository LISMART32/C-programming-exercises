#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int balance = 1000;   //初始余额
    int choice = 0;
    int amount = 0;

    while(choice != 4)
    {
        printf("\n========== 迷你ATM ==========\n");
        printf("1. 查询余额\n");
        printf("2. 存款\n");
        printf("3. 取款\n");
        printf("4. 退出\n");
        printf("请选择 (1-4):");
        scanf("%d", &choice);
    
    if(choice == 1)
    {
        printf("当前余额: %d 元\n",balance);
    }
    else if(choice == 2)
    {
        printf("请输入存款金额: ");
        scanf("%d", &amount);
        if(amount > 0)
        {
            balance += amount;
            printf("存入 %d 元,当前余额: %d 元\n",amount,balance);
        }
        else
        {
            printf("errror 金额必须大于 0! \n");
        }
    }
    else if(choice == 3)
    {
        printf("请输入取款金额: ");
        scanf("%d", &amount);
        if(amount <= 0)
        {
            printf("error 金额必须大于 0! \n");
        }
        else if(amount > balance)
        {
            printf("error余额不足! 当前只有 %d 元. \n",balance);
        }
        else
        {
            balance -= amount;
            printf("取出 %d 元, 当前余额: %d 元\n",amount,balance);
        }
    }
    else if(choice == 4)
    {
        printf("感谢使用,再见! \n");
    }
    else
    {
        printf("error 无效选项,请重新输入 1-4. \n");
    }
    }
    return 0;
}






//猜数字
int main1()
{
    //用当前时间做随机种子，不然每次猜的数都一样
    srand ((unsigned int) time(NULL));
    int answer = rand() % 100 + 1;   //1~100的随机数
    int guess = 0;
    int count = 0;

    printf("=== 猜数字游戏 ===\n");
    printf("我心里想了一个1~100 的数,你来猜~\n");

    while(guess != answer)
    {
        printf("请输入你的猜想：");
        scanf("%d", &guess);
        count ++;

        if(guess > answer)
        {
            printf("太大了!\n");
        }
        else if(guess < answer)
        {
            printf("太小了\n");
        }
        else
        {
            printf("猜对了!答案就是 %d\n",answer);
            printf("你一共猜了 %d 次.\n",count);
        }
    }
    return 0;
}