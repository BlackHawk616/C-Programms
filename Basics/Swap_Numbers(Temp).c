// Swaping Numbers Using Temp Variable

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int temp; 
    int a,b;

    printf("Enter Value Of A\n");
    scanf("%d",&a);
    printf("Enter Value Of B\n");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("Swaped Numbers A is %d and B is %d", a,b);

    return 0;
}
