#include<stdio.h>
#define n 5
int top=-1;
int stack[n] ;
void push(){
    int data;
    printf("enter the data: ");
    scanf("%d",&data);
    if(top==n-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=data;
    }
}
void pop(){
    if(top==-1){
        printf("underflow");
    }
    else{
        top--;
    }
}
void peek(){
    if(top==-1){
    printf("underflow");
    }
    else{
        printf("%d",stack[top]);
    }
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
int main(){
    int choice;
    do{
        printf("enter the chioce");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();  
            break;
            case 4:
            display();
            break;
            default:
            printf("Invalid");
        }
    }while(choice!=0);
}
