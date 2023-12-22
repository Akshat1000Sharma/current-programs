#include<stdio.h>
int fubu(int n){
    if (n==1)
    {
        return 2;
    }
    if (n==2)
    {
        return 3;
    }
    return (fubu(n-1)+fubu(n-2));
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of terms of fubunachi series: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",fubu(i));
    }
    
    return 0;
}

