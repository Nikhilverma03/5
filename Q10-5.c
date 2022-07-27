//Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        a=n*i;
        printf("%d * %d = %d\n",n,i,a);
    }
    return 0;
}
