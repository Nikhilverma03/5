//Write a program to print cubes of the first N natural numbers

#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=i*i*i;
        printf("Cube of %d is= %d\n",i,a);
    }
    return 0;
}

