#include <stdio.h>
int main()
{
    char num;
    printf("Enter your num : ");
    scanf("%c", &num );
    int a, b;
    printf("The value of a is: ");
    scanf("%d",&a );
    printf("The value of b is :");
    scanf("%d",&b );
    char sum,sub,mul,div,mod;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    switch (num)
    {
    case '+':

        

        printf("Sum :%d", sum);
        break;

    case '-':

        
        
        printf(" sub :%d", sub);
        break;

    case '*':

        
        
        printf(" Mul :%d", mul);
        break;

    case '/':

        
        
        printf("Div :%d", div);
        break;

    default:

        
        
        printf("Mod : %d", mod);
    }
    return 0;
}