#include<stdio.h>
#include<stdlib.h>
#define NULL 0
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void create();
// void bi();
// void li();
// void si();
// void search();
 void display();

void main()
{
    int choice=0;
    
    while(choice!=7)
    {

printf("enter choice,1.Create2.insert at begin 3.insert at end 4. insert at specific 5.display 6.search 7.exit");
scanf("%d",&choice);

switch(choice)
{
    case 1:
    create();
    break;
     case 2:
     bi();
     break;
    // case 3:
    // li();
    // break;
     case 4:
     si();
     break;
     case 5:
    display();
     break;
    // case 6:
    // search();
    // break;
     case 7:
    exit(0);


}

    }
}

void create()
{
    struct Node *temp,*newnode;
    int choice;
    while(choice)
        {
            newnode=(struct Node*)malloc(sizeof( struct Node));
            printf("Enter data");
            scanf("%d",&newnode->data);
            newnode->next=0;
            
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to inser more?1/0");
        scanf("%d",&choice);



        }
            
}
void display()
{
    struct Node *temp;
    temp=head;
    while(temp!=NULL)
        {
            printf("%d-",temp->data);
            temp=temp->next;
        }
}
void bi()
{

}
void si()
{
    int i=1,*item,loc;
    struct Node *newnode,*temp;
    newnode=(struct  Node*)malloc(sizeof(struct  Node));
    if(head==NULL)
    {
        printf("not possible");
    }
    else
    {
        printf("Enter the data");
        scanf("%d",&item);
        newnode->data=item;
        printf("Enter the loc");
        scanf("%d",&loc);
        temp=head;
        while(i<loc-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
