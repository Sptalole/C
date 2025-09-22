#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *link;    
};

struct node * top = NULL;

void display(){
    struct node *q;
    if(top==NULL)
    {
        printf("\nStack is now Empty\n");
        return;
    }
    q= top;
        printf("\n");
    while(q!=NULL)
    {
        printf("[ %d | %lu ]---->",q->data,q->link);
        q= q->link;
    }
    printf("\n");
    
}



void push (int x){
    printf("\nAdding %d in the stack ", x);
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node*));
    tmp ->data = x;
    tmp->link = top;
    top = tmp;
    display();

}



void pop(){

    struct node *q;
    if(top==NULL)
    {
        printf("\nNo element, empty stack\n");
        return;
    }else{
        printf("\nRemoving %d in the stack", top->data);
        q = top;
        top = top->link;
        free(q);
        display();
    }
}


int main(){

    push(20);
    push(30);
    push(40);
    push(100);
    pop();
    pop();
    pop();
    pop();
    pop();



    return 0;
}