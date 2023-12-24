#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void display(struct node * head){
    struct node * ptr=head;
    do{
        printf("Element = %d\n", ptr->data);
        ptr=ptr->next;
    }while(ptr->next!=head);
}
struct node * delete (struct node * head, int index){
    struct node * ptr = head;
    struct node * ref= head->next;
    if (head == NULL) {
        printf("List is empty, cannot delete.\n");
        return NULL; 
    }
    for (int i=0; i<index-1;i++){
        ptr=ptr->next;
        ref=ref->next;
    }
    ptr->next=ref->next;
    free(ref);
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
    int index;
    printf("Enter Index: ");
    scanf("%d", &index);
    head = delete(head, index);
    printf("After Deletion\n");
    display(head);
    return 0;
}
