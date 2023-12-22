#include<stdio.h>
int main()
{
int i,j,n,k=1;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    k=i;
    for(j=1;j<=2*n-1;j++){
            if (j>n-i && j<n+i)
            {
            printf("%d",k);
                if (j>=n)
                {
                    k--;
                }
                else
                {
                    k++;
                }
            }
            else 
            printf(" ");
    }
    printf("\n");
}

return 0;
}