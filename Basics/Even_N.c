// Printing Even Numbers From 2 to N Numbers 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter The Number : ");
    scanf("%d",&num);
    for (int i = 0; i <= num; i++)
    {
        /* code */
        if (i == 0)
        {
            printf("Zero Is Neither Odd Nor Even\n");
        }
        
        else if (i % 2 == 0)
        {
            printf("%d\n",i);
        }
        else{
            continue;
        }
        
    }
    
    return 0;
}
