#include<stdio.h>
#include<conio.h>

void main(){
    int n,i;
    int fibo(int);
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("%dth Fibonacci term is:\n",n);
    printf("%d", fibo(n));
    getch();
}

int fibo(int k){
    if(k==1 || k==2){
        return 1;
    }
    else{
        return fibo(k-1) + fibo(k-2);
    }
}