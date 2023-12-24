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
struct node * delete (struct node * head){
    struct node * ptr = head;
    if (head == NULL) {
        printf("List is empty, cannot delete.\n");
        return NULL; 
    }
    head = head->next;
    free(ptr);
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
    third->next=NULL;

    display(head);
    head = delete(head);
    printf("After Deletion\n");
    display(head);
    return 0;
}
