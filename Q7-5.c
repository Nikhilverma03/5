//Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=n+1;i>1;i--)
    {
        printf("%d\n",(2*i)-2);
    }
    return 0;
}

