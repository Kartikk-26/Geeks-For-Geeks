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
struct node * insert(struct node * ptr, int element, int index){
    struct node * new;
    new =(struct node *) malloc(sizeof(struct node));
    // We need to create a reference of head
    struct node * ref = ptr;
    int i=0;
    while(i!=index-1){
        ref=ref->next;
        i++;
    }
    new->data=element;
    new->next=ref->next;
    ref->next=new;
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
    int element,index;
    printf("Enter Element : ");
    scanf("%d",&element);
    printf("Enter Index: ");
    scanf("%d",&index);
    insert(head,element,index);
    display(head);
    return 0;
}
