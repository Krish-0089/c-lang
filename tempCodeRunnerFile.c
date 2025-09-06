#include<stdio.h>
int main(){
    int n,original,reverse=0,remainder;
    printf("Enter the value of number : ");
    scanf("%d",&n);
    original=n;
    

    do{
    remainder=n%10;
    reverse=reverse*10+remainder;
    n =n/10;
    
    }while(n!=0);
    
    if(original==reverse){
        printf("%d:The number is palindrome",original);
    }
    else{
        printf("%d:The number is not palinndrome",original);
    }
    
    return 0;
}





