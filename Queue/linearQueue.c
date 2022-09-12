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
    int insert_item;
    if(Rear==SIZE-1){
        printf("The Queue is full.");
    }
    else{
        if(Front ==-1){
            Front = 0;
        }
        Rear = Rear + 1;
        printf("Enter the item: ");
        scanf("%d", &insert_item);
        arr[Rear] = insert_item;
        printf("\n");
        printf("Inserted: %d\n",insert_item);
    }

}

void deQueue(){
    if(Front == -1){
        printf("The Queue is empty.\n");
    }
    else{
        printf("The item is deleted from the queue: %d\n",arr[Front]);
        Front = Front + 1;
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
    if(Front == -1){
        printf("The queue is empty.\n");
    }
    else{
        printf("Queue:");
        for(int i=0;i<=Rear;i++){
            printf("%d \n",arr[i]);
        }
        printf("\n");
    }
}
