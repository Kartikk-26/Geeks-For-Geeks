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
struct node * delete(struct node * head, int element){
    struct node * ptr=head;
    struct node * ref;
    if (head->data==element){
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=head->next;
        free(head);
        head=ptr->next;
        return head;
    }
    while (ptr->data!=element ){
        if (ptr->next==head){
            printf("Element Not Found\n");
            return head; 
        }
        ref=ptr;
        ptr=ptr->next;
        
    }
    ref->next=ptr->next;
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
    third->next=head;
    display(head);
    printf("After Deletion\n");
    int element;
    printf("Enter Element : ");
    scanf("%d",&element);
    head=delete(head,element);
    display(head);
    
    return 0;
}
