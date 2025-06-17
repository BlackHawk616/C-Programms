// Writing a Program to check whether the year is leap year or not

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;
    printf("Enter The Year : ");
    scanf("%d", &year);
    
    if (year % 4 == 0){
        if (year % 100 == 0){

            if (year % 400 == 0){
                printf("Yes This is a leap year");
            }
            else{
                printf("this is not a leap year");
            }
        }
        else{
            printf("Yes This is a leap year");
        }
        }
    else{
        printf("No Its, Not a Leap Year");
    }
    

    return 0;

}
