#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void display(struct node * head){
    struct node * ptr=head;
    // We use do while here so that it goes ahead once and then continues
    do{
        printf("Element = %d\n", ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct node * insert(struct node * head, int element){
    struct node * ptr= (struct node *) malloc(sizeof(struct node));
    ptr->data=element;
    struct node * ref= head->next;
    while (ref->next!=head){
        ref=ref->next;
    }
    ref->next=ptr;
    ptr->next=head;
    return head;
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
    third->next=head;

    display(head);
    int element;
    printf("Enter Element : ");
    scanf("%d", &element);
    head = insert(head, element);
    printf("After Insertion\n");
    display(head);
    printf("Enter Element : ");
    scanf("%d", &element);
    head = insert(head, element);
    printf("After Insertion\n");
    display(head);
    return 0;
}
