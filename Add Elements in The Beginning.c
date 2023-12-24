#include <stdio.h>
#include <stdlib.h>

struct node *add_beg(struct node *head,int d);
struct node {
    int d;
    struct node *next;

};
int main(){
    struct node *head = malloc(sizeof(struct node));
    struct node *ptr=malloc(sizeof(struct node));
    ptr->d=10;
    ptr->next=NULL;
    head->next=ptr;
    head=add_beg(head,20);
    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->d);

        ptr=ptr->next;
    }
    
}
struct node *add_beg(struct node *head,int d){
    struct node *ptr=malloc(sizeof(struct node));
    ptr->d=d;
    ptr->next=NULL;
    ptr->next=head;
    head=ptr;
    return head;
}