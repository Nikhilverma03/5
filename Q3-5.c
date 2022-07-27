//Write a program to print the first N natural numbers in reverse order

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=n;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}

