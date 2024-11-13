#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;*tail=NULL;
void created(){
    struct node *newnode=(struct node*)
    malloc(sizeof(struct node));
    int value;
    printf("enter the data");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void insert_at_begin(){
    struct node *newnode=(struct node*)
     malloc(sizeof(struct node));
    int value;
    printf("enter the data :");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
}
void insert_at_end(){
   struct node *newnode=(struct node*)
     malloc(sizeof(struct node));
    int value;
    printf("enter the data :");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    tail->next=newnode;
    tail=newnode; 
}
void delete_at_begin(){
   struct node*temp=head;
   head=head->next;
   free(temp);
}
void delete_at_end(){
    struct node*ptr=head;
    while(ptr->next->!=NULL){
        ptr=ptr->next;
    }
    tail=ptr;
    ptr=ptr->next;
    free(ptr);
    tail->next=NULL;
}void display(){
    struct node*ptr3=head;
    while(ptr)
}



