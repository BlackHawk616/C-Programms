// Sum Of Two Number - Basics
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;

    printf("Enter The Value Of A :\n");
    scanf("%d", &a);
    printf("Enter The Value of B :\n");
    scanf("%d", &b);

    int c = a + b;

    printf("The Sum is : %d",c);
    return 0;
}
