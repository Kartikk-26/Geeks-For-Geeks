#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void display(struct node * ptr){
    while(ptr!=NULL){
        printf("Element = %d\n", ptr->data);
        ptr=ptr->next;
    }
}
struct node * insert(struct node * ptr, struct node * prev, int element){
    struct node * new=(struct node *) malloc(sizeof(struct node));
    new->data=element;
    new->next=prev->next;
    prev->next=new;
    return ptr;
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;

    // They are dyanmic, so their data is in the heap.
    head=(struct node *) malloc(sizeof(struct node));
    second=(struct node *) malloc(sizeof(struct node));
    third=(struct node *) malloc(sizeof(struct node));

    head-> data=2;
    head->next=second;
    second->data=3;
    second->next=third;
    third-> data=4;
    third->next=NULL;
    display(head);
    int element;
    printf("Enter Element : ");
    scanf("%d",&element);
    insert(head,second,element);
    display(head);
    return 0;
}
