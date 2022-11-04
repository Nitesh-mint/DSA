#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    int sum_natural(int);
    printf("Enter the value of n > ");
    scanf("%d", &n);
    printf("The sum of %d natural numbers is %d", n, sum_natural(n));
}

int sum_natural(int k){
    if(k==1){
        return 1;
    }
    else{
        return k + sum_natural(k-1);
    }
}