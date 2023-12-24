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
struct node * delete (struct node * head, int element){
    struct node * ptr = head;
    struct node * ref= head->next;

    if (head == NULL) {
        printf("List is empty, cannot delete.\n");
        return NULL; 
    }
    while(ref->data!=element && ref->next!=NULL){
        ptr=ptr->next;
        ref=ref->next;

    }
    if (ref->data==element){
        ptr->next=ref->next;
        free(ref);
    }
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
    int element;
    printf("Enter Element: ");
    scanf("%d", &element);
    head = delete(head, element);
    printf("After Deletion\n");
    display(head);
    return 0;
}
