// Largest Number 
#include <stdio.h>

int main(int argc, char const *argv[]){
    printf("Enter The Value Of A : \n");
    int a;
    scanf("%d", &a);

    printf("Enter The Value Of B : \n");
    int b;
    scanf("%d",&b);

    if (a>b){
        printf("A Is Greater Than B");
    }
    else if (a<b){
        
        printf("B is greater Than A");

    }
    else{
        printf("Both are equal");
    }

    return 0;
}
