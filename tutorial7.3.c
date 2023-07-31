#include<stdio.h>
/*int Q3(int no1,int no2)
{
    return (no1*no2);

}
int main()
{
    int no1,no2;
    printf("Enter two numbers");
    scanf("%d %d",&no1,&no2);

    printf("\nProduct of the two numbers: %d\n",Q3(no1,no2));
}*/


int calculate(int no1,int no2)
{
    int product;
    product=no1*no2;
    return product;

}
int main()
{
    int n1,n2;
    printf("Enter two numbers");
    scanf("%d %d",&n1,&n2);
    printf("\nThe product is %d \n",calculate(n1,n2));
}










