#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void insert();
void delete_ok();

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
        printf("\n1.create");
        printf("\n2.Display");
        printf("\n3.insert");
        printf("\n4.Delete");
        printf("\n5.Exit");
        printf("\n----------------------------------\n");
        printf("Enter your choice :- ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            delete_ok();
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
void create()
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
void insert()
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
void delete_ok()
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
