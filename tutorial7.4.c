#include <stdio.h>
int Q4(int n1,int n2)
{
    return (n1 / n2);
}
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    printf("Quotient: %d\n",Q4(n1,n2));
}
