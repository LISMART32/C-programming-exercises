#include <stdio.h>


//自已写的没有很完善
int main()
{
    int balance = 1000;
    int choice = 0;
    int amount = 0;
    while(choice != 4)
    {
        printf("\n==========ATM==========\n");
        printf("1. 查询余额\n");
        printf("2. 存款\n");
        printf("3. 取款\n");
        printf("4. 退出\n");
        printf("请选择1~4\n");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("您的余额为 %d 元", balance);
        }
        else if(choice == 2)
        {
            printf("请输入存款金额: ");
            scanf("%d", &amount);
            if(amount > 0)
            {
                balance += amount;
                printf("存入 %d 元, 现在您的金额为 %d ", amount, balance);
            }
            else
            {
                printf("金额必须大于 0!");
            }
        }
        else if(choice == 3)
        {
            printf("请输入取款金额: ");
            scanf("%d", &amount);
            if(amount > balance)
            {
                printf(" error 请输入正确的钱");
            }
            else if(amount <= balance)
            {
                balance -= amount;
                printf("取出 %d 元, 现在您的金额为 %d ", amount, balance);
            }
        }
        else if(choice == 4)
        {
            printf("感谢使用,再见");
        }
        else
        {
            printf("error 请输入1~4");
        }

    }
    return 0;
}