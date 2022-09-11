#include<stdio.h>
#include <conio.h>
#define SIZE 4

struct lQueue{
    int rear;
    int front;
    int item[SIZE];
};
typedef struct lQueue qu;
void insert(qu*);
void delete(qu*);
void display(qu*);

void main(){
    int ch;
    qu* q;
}
