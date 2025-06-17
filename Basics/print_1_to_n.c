// Writing a C Program to Print Numbers from 1 to n

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter The Number You Want To Print Till\n");

    int a;

    scanf("%d", &a);

    for (int i = 0; i <=a; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
