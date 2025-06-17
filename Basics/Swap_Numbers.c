// Swaping Two Numbers without using Temp
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter The Value Of A\n");
    scanf("%d",&a);

    printf("Enter The Value of B\n");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Swaped Number A is %d and B is %d ", a,b);

    return 0;
}
