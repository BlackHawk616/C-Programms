// To Check Whether The Number Is Positive, Negative Or Zero

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter The Number To Check : ");
    scanf("%d",&a);
    if (a<0){
        printf("The Value Is Negative\n");
        }
    else if (a>0)
    {
        /* code */
        printf("The Number Is Positive");

    }
    else{
        printf("The Value Is O");
    }
    
    return 0;
}
