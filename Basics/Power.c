// Writing A C Program To Find A Power

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    printf("Enter The Number : ");
    int num;
    scanf("%d",&num);

    printf("Enter The Power Number : ");
    int P_Num;
    scanf("%d", &P_Num);

    int a = pow(num,P_Num);

    printf("The Power Is %d", a);

    return 0;
}
