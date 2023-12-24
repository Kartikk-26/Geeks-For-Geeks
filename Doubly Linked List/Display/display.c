#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * next;
    struct node * prev;
};
void display(struct node * head){
    struct node * ptr=head;
    while(ptr!=NULL ){
        printf("Elements are : %d\n", ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct node * head= (struct node *) malloc(sizeof(struct node ));
    struct node * second= (struct node *) malloc(sizeof(struct node ));
    struct node * third= (struct node *) malloc(sizeof(struct node ));
    head->data=2;
    second->data=3;
    third->data=4;
    head->next=second;
    second->next=third;
    third->next=NULL;
    head->prev=NULL;
    second->prev=head;
    third->prev=second;
    display(head);
}