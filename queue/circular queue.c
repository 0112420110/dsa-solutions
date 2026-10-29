#include<stdio.h>
int n=50;
int queue[50];
int front=-1,rear=-1;

void enqueue(int value){
    if(front==-1 && rear==-1){
       front=rear=0;//empty check
        queue[rear]=value;
    }
    else if((rear+1)%n==front){ //full kina check
        printf("Queue is overflow");
    }
    else
    {
        rear=(rear+1)%n;
        queue[rear]=value;
    }
}

void dequeue(){

if(front==-1 && rear==-1)
    printf("Queue is underflow");
else if(front==rear){
    //only one element kina check
    front=rear=-1;
}
else{

    front=(front+1)%n;

}

}
int main(){

    enqueue(1);
    enqueue(2);
    dequeue();
    enqueue(3);
    for(int i=front;i!=rear;i=(i+1)%n){
        printf("%d ",queue[i]);
    }
if(front!=-1)
    printf("%d ",queue[rear]);
return 0;
}
