#include <stdio.h>
#include <stdlib.h>
void insert_in_last();
void reverse();
void display();
void insert_at_begin();
// void delete_ok();

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
int main()
{
    int choice;
    while (1)
    {
        printf("\n\n********** Main menu **********\n");
        printf("\n1.insert_in_last");
        printf("\n2.Reverse");
        printf("\n3.Display");
        printf("\n5.insert_at_begin");
        // printf("\n6.Delete");
        printf("\n.Exit");
        printf("\n----------------------------------\n");
        printf("Enter your choice :- ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_in_last();
            break;
        case 2:
            reverse();
            break;
        case 3:
            display();
            break;
        case 4:
            insert_at_begin();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("You have enter wrong choice");
        }
    }
    // getch();
    return 0;
}
void insert_in_last()
{
    int info;
    struct node *newnode, *currptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("\nMemory out of bound");
        exit(0);
    }
    printf("\nEnter the data :");
    scanf("%d", &info);
    newnode->data = info;
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        currptr = start;
        while (currptr->next != NULL)
        {
            currptr = currptr->next;
        }
        currptr->next = newnode;
    }
}
void reverse()
{
    struct node *currptr, *previous, *frward;
    currptr = start;
    previous = NULL;
    frward = NULL;
    if
     (start == NULL)
    printf("list is empty\n");
    else
    {
        while (currptr != NULL)
         {
        frward = currptr -> next;
        currptr -> next = previous;
        previous = currptr;
        currptr = frward;
        }
            start = previous;
    }
}
            
void display()
{
    struct node *currptr;
    if (start == NULL)
    {
        printf("\n Element not present in list");
        return;
    }
    else
    {
        currptr = start;
        while (currptr != NULL)
        {
            printf("%d", currptr->data);
            printf("-->");
            currptr = currptr->next;
        }
    }
}
void insert_at_begin()
{
    int info;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("\nMemmoey out of bound : ");
        return;
    }
    printf("\n Enter the data : ");
    scanf("%d", &info);
    newnode->data = info;
    if (start == NULL)
    {
        start = newnode;
        newnode->next = NULL;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }
}