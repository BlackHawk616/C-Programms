// Writing A C Program To Find The Sum Of N Numbers

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter The Number : ");
    int num, i;
    scanf("%d",&num);
    int new_num = 0;
    for (i = 0 ; i <= num; i++)
    {
        new_num+= i;
    }    
    printf("%d", new_num);
    return 0;
}
