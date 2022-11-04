#include<stdio.h>
void Triangle(int n){
    if(n<=0){
        return;
    }
    else{
        Triangle(n-1);
    }
    for(int i=1;i<=n;i++){
        printf("*\t");
    }
    printf("\n");
}

int main(){
    Triangle(9);
    return 0;
}
