#include<stdio.h>
int main()
{
int n,a,product=1;
printf("Enter the number of numbers you would like to enter: ");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    printf("Enter number %d\n",i+1);
    scanf("%d",&a);
    product=product*a;
}
printf("The geometrical average is: %f\n",pow(product,1/(double)n));


return 0;
}