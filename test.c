#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void shift(int*x, int*y, int*z)
{
    int var;
    var = *z;
    *z = *y;
    *y = *x;
    *x = var;
    return;
}

int main()
{
    int a=3,b=4,c=2;
    shift(&a,&b,&c);
    printf("%d , %d , %d\n",a,b,c);

return 0;
}