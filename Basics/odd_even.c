// Writing a Odd Even Function 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter The Number to check wheter its Odd or Even\n");

    printf("Enter The number : \n");

    int a;
    
    scanf("%d", &a);

    if (a%2 == 0){
        printf("Its an Even Number");
    }
    else{
        printf("Its an Odd Number");
    }

    return 0;
}
