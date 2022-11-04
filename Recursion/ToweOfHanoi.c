#include<stdio.h>
void toh(int, char, char, char);

void main(){
    int n;
    printf("Enter the number of disks > ");
    scanf("%d",&n);
    toh(n,'o','d','i');
}
void toh(int n, char a, char b, char c){
    if(n>0){
        toh(n-1, a, c, b);
        printf("Move disk %d from %c to %c \n", n,a,b);
        toh(n-1,c,b,a);
    }
}