#include<stdio.h>
void Q2(int no1,int no2)
{
   printf("\nsum:%d\n\nDifference:%d\n\n",(no1+no2),(no1-no2));

}
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    Q2(n1,n2);
}
