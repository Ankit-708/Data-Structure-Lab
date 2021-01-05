#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void insert();
void delete_ok();
void search(int);
void display();
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
        printf("\n**** Main menu ****\n");
        printf("\n----------------------------------\n");
        printf("\n1.Insert");
        printf("\n2.Delete_ok");
        printf("\n3.Display");
        printf("\n4.search");
        printf("\n5.Exit");
        printf("\n--------------------------------\n");
        printf("\nEnter your choice :-");
        scanf("%d", &choice);
        switch (choice)
        {
            int x;
        case 1:
            insert();
            break;
        case 2:
            delete_ok();
        case 3:
            display();
            break;
        case 4:
            printf("\n.enter the element\n");
            scanf("%d",&x);
            search(x);
            break;       
        default:
            printf("You have enter wrong choice");
        }
    }
    return 0;
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
    printf("\n------------------------------\n");
    }
}
void display()
{
    struct node *currptr;
    if (start == NULL)
    {
        printf("\n Element not present in list");
        printf("\n--------------------------------\n");
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
void search(int val)
{
    struct node*temp = start;
    int position = 1, flag;
    if (start == NULL)
    {
        printf("list is empty\n");
        return;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp -> data == val)
            {
                printf("element %d is present\n",val);
                printf("\n--------------------------------\n");
                flag = 0;
                return ;
            }
            else
            {
                flag = 1;
            }
            temp = temp -> next;
            position++;
        }
 if (flag == 1)
 {
     printf("the element %d is not found\n", val);
     printf("\n--------------------------------\n");
 }
 }
    return ;    
    
}