#include <stdio.h>
#include <conio.h>

void main(){
    int n;
    long int facto;
    long int factorial(int n);
    printf("Enter the value of n:");
    scanf("%d", &n);
    facto = factorial(n);
    printf("%d! = %ld", n, facto);
    getch();
}

long int factorial(int n){
    long int facto = 1;
    int i;
    if(n==0){
        return 1;
    }
    else{
        for(i=1;i<=n;i++){
            facto = facto * i;
        }
        return facto;
    }
}