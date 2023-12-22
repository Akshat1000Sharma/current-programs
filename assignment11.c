#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
int i,j,n;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=2*n-1;j++){
            if (j>n-i && j<n+i)
            {
            printf("*");
            }
            else 
            printf("|");
    }
    printf("\n");
}

return 0;
}