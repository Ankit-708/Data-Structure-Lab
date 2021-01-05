#include <stdio.h>
#include <stdlib.h>


void insertatbegin();
void insertatlast();
void deletefrombegin();
void deletefromlast();
void reverse();
void display();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
    
};
struct node *start = NULL;
int main()
{
    int choice;
    while (1)
    {
        printf("\n**** Main menu ****\n");
        printf("\n1.Insert at Begin");
        printf("\n2.Insert at Last");
        printf("\n3.Deletefrombegin");
        printf("\n4.Deletefromlast");
        printf("\n5.reverse");
        printf("\n6.Display");
        printf("\n7.Exit");
        printf("\nEnter your choice :-");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertatbegin();
            break;
        case 2:
            insertatlast();
            break;
        case 3:
            deletefrombegin();
            break;
        case 4:
            deletefromlast();
        case 5:
            reverse();
            break;
        case 6:
            display();
            break;
        default:
            printf("You have enter wrong choice");
        }
    }
    // getch();
    return 0;
}
void insertatbegin()
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
void insertatlast()
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
void deletefrombegin()
{
    struct node *currptr;
    if (start == NULL)
    {
        printf("\n List is empty...");
        return;
    }
    else
    {
        currptr = start;
        start = currptr->next;
        printf("\nDelete element is : %d", currptr->data);
        free(currptr);
    }
}
void deletefromlast()
{
    struct node *previous = start, *currptr = start;
    if (currptr == NULL)
    {
        printf("list is empty");
   }
    else
    {
        currptr = currptr -> next;
    while (currptr -> next = NULL)
    {
        currptr = currptr -> next;
        previous = previous -> next;
    }
    
    previous -> next = NULL;
    free(currptr);
    printf("element is deleted\n");
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