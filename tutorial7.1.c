#include<stdio.h>
void Q1()
{
    int no1,no2;
    printf("Enter two numbers: ");
    scanf("%d %d",&no1,&no2);

    printf("\n%d + %d = %d\n",no1,no2,(no1+no2));
    printf("%d - %d = %d\n",no1,no2,(no1-no2));
}
int main()
{
    Q1();
}
