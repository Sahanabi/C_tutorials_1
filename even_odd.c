//WAP to check the number is odd or even

#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a%2==0)
        printf("Even number");
    else
        printf("Odd number");
}