#include<stdio.h>
int n=20;
int top1=-1;
int top2=-1;

 int stack1[20];
int stack2[20];

void enqueue(int value){
top1++;
stack1[top1]=value;
}
void dequeue(){
    if(top2==-1){
        while(top1!=-1){
         top2++;
stack2[top2]=stack1[top1];
top1--;
        }
    }
if(top2==-1)
    return;


top2--;

}
void display(  ){
    if(top1==-1 && top2==-1)
        return;
for(int i=top2;i>-1;i--){
    printf("%d ",stack2[i]);
}
for(int i=0;i<=top1;i++){
    printf("%d ",stack1[i]);
}
printf("\n");

}
void isempty(){
if(top2==-1&& top1==-1)
    printf("True");
    else
        printf("False");
}


int main(){

    enqueue(1);
    enqueue(2);
    dequeue();
    display();
    isempty();
return 0;}
