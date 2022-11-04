#include<stdio.h>
#include<conio.h>

void main(){
    int n,i;
    int fibo(int);
    printf("Enter n:");
    scanf("%d", &n);
    printf("Fibonacci numbers up to %d terms:\n",n);
    for(i=1;i<=n;i++){
        printf("%d\n", fibo(i));
    }
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