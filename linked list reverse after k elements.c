#include<stdio.h>
struct node{
    int data;
    struct node*next;
};
struct node* head=NULL;
void push(int data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
        head=newnode;
    else
        newnode->next=head;
        head=newnode;
}
void printlist(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
struct node* reverse(struct node*head,int n)
{
    int count=0;
        struct node*current=head;
        struct node*prev=NULL;
        struct node*next;
        while(count<n && current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count++;
        }
        if(next!=NULL)
            head->next=reverse(next,n);
        return prev;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    printf("\n Old list \n");
    printlist(head);
    printf("\n New list \n");
    struct node * newhead=reverse(head,4);
    printlist(newhead);
}
