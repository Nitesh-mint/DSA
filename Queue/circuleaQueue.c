#include <stdio.h>
//linear queue in c.
//limitation is we cannot enter new element until we delete all the item.

#include<stdio.h>
#define SIZE 4

//functions
void enQueue();
void deQueue();
void peek();
void show();

//constants
int arr[SIZE];
int Rear = -1;
int Front = -1;

int main(){

    while(1){   
        int choice;
        printf("\n");
        printf("\n");
        printf("1.Enqueue:\n");
        printf("2.Dequeue:\n");
        printf("3.Pek:\n");
        printf("4.Show:\n");
        printf("\n");
        scanf("%d",&choice);

        switch(choice){
            case(1):
            enQueue();
            break;

            case(2):
            deQueue();
            break;

            case(3):
            peek();
            break;
            
            case(4):
            show();
            break;  
        
        }
    }

}

void enQueue(){
    int inserted_item;

    if((Rear+1)%SIZE==Front) // check if full
    {
        printf("The Queue is full.\n");
    }

    else if(Front==-1 && Rear == -1) //if empyt do this
    {
        Front = 0;
        Rear = 0;

        printf("Enter the item to insert: ");
        scanf("%d", &inserted_item);
        arr[Rear] = inserted_item;
        printf("Inserted: %d\n",inserted_item);
    }
    else{
        Rear = (Rear + 1)%SIZE;
        printf("Enter the item to insert: ");
        scanf("%d", &inserted_item);
        arr[Rear] = inserted_item;
        printf("Inserted: %d\n",inserted_item);
    }
}

void deQueue(){
    if(Front == -1 && Rear == -1){
        printf("The Queue is empty\n");
    }
    else if(Front == Rear){
       printf("The item %d is deleted fom the Queue.\n",arr[Front]); 
       Front = -1;
       Rear = -1;
    }

    else{
        printf("The item %d is deleted fom the Queue.\n",arr[Front]);
        Front = (Front + 1)%SIZE;
    }
}

void peek(){
    if(Front == -1){
        printf("The Queue is empty.\n");
    }
    else{
        printf("%d \n",arr[Rear]);
    }
}

void show(){
    int i=0;
    if(Front == -1 && Rear == -1){
        printf("The queue is empty.\n");
    }
    else{
        printf("Queue:");
        for(i=0;i<=Rear;){
            printf("%d ",arr[i]);
            i = (i+1)%SIZE;
            
        }
    }   
}

