// implementation of singly linked list
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *next;
} newnode;
 
struct node *head = NULL;
 
void insert_begin()
{
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &data);
    newnode->info = data;
    if (head == NULL)
    {
        head = newnode;
        return
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
 
    printf("inserted %d\n", newnode->info);
    printf("this node points to %p\n", newnode->next);
}
 
void insert_end()
{
    struct node *newnode;
    struct node *ptr;
    int data;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &data);
    newnode->info = data;
    newnode->next = NULL;
 
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        printf("inserted %d\n", newnode->info);
        printf("this node points to %p\n", newnode->next);
    }
}
 
void insert_pos()
{
    int i = 0, data, pos;
    struct node *newnode;
    struct node *ptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    ptr = head;
 
    printf("Enter data: ");
    scanf("%d", &data);
    newnode->info = data;
 
    printf("enter position: ");
    scanf("%d", &pos);
 
    for (i = 0; i < pos - 1; i++)
    {
        ptr = ptr->next;
        if (ptr == NULL)
        {
            printf("Position not found!");
        }
    }
    newnode->next = ptr->next;
    ptr->next = newnode;
}
 
void delete_first()
{
    struct node *ptr;
 
    if (head == NULL)
    {
        printf("void deletion.No list found!");
        return;
    }
    else
    {
        ptr = head;
        head = ptr->next;
        printf("deleted value is %d ", ptr->info);
        free(ptr);
    }
}
 
void delete_end()
{
    struct node *ptr, *temp;
    if (head == NULL)
    {
        printf("list is empty! ");
        return;
    }
    if (head->next == NULL)
    {
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("the deleted element is %d ", ptr->info);
        free(ptr);
    }
}
 
void delete_pos()
{ // not working
    int pos, i = 0;
    struct node *ptr, *temp;
 
    printf("enter the position: ");
    scanf("%d", &pos);
 
    if (head == NULL)
    {
        printf("list is empty!");
        return;
    }
    else
    {
        if (pos == 0)
        {
            delete_first(); // pos = 0 means the first element to be deleted
        }
        else
        {
            ptr = head;
            for (i = 0; i < pos; i++)
            {
                ptr = ptr->next;
                if (ptr==NULL){
                    printf("Position not found! ");
                    return;
                }
            }
            temp->next=ptr->next;
            printf("deleted element is %d ", ptr->info);
            free(ptr);
        }
    }
}
 
void display()
{
    struct node *ptr;
    if (head->next==NULL){
        printf("list is empty!");
        return;
    }
    else{
        ptr = head;
        while(ptr->next!=NULL){
            printf("displayed %d \n", ptr->info);
            ptr=ptr->next;
        }
        printf("displaued %d ", ptr->info);
    }
 
 
}
 
int main()
{
    int n;
    printf("\n1.insert at beginning \n2.insert at end \n3.insert at any position\n 4.delete at beginning\n5.delete at end\n6.delete at specified position\n7.display\n0.exit");
 
    while (1)
    {
        printf("\nenter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 0:
            return 0;
        case 1:
            insert_begin();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_pos();
            break;
        case 4:
            delete_first();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_pos();
            break;
        case 7:
            display();
            break;
        default:
            printf("Invalid input!/n");
            break;
        }
    }
}