#include <stdio.h>
#define SIZE = 4
int a[4] = {1,2,3,4};
void main(){
   
}

void insert(){
    int number,position;
    printf("Enter the number to be inserted: ");
    scanf("%d",&number);

    printf("Enter the position to be inserted: ");
    scanf("%d",&position);

    for(int i=0;i<=3;i++){
        if(a[i]>=position){
            a[i] = number;
            a[i] = a[i+1];
        }
    }
}