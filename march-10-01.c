#include<stdio.h>
int main()
{
    int amount, total;

    printf("Input the amount :  ");
    scanf("%d",&amount);

    total = (int)amount/100;
    printf("There are : ");
    printf("%d notes of 100.00 \n",total);
    amount = amount -(total*100);

    total = (int)amount/50;
    printf("%d notes of 50.00 \n",total);
    amount = amount-(total*50);

    total =(int)amount/20;
    printf("%d notes of 20.00 \n",total);
    amount = amount-(total*20);

    total =(int)amount/10;
    printf("%d notes of 10.00 \n",total);
    amount = amount-(total*10);

    total =(int)amount/5;
    printf("%d notes of 5.00 \n",total);
    amount = amount-(total*5);

    total=(int)amount/2;
    printf("%d notes of 2.00 \n",total);
    amount = amount -(total*2);

    return 0;
}
