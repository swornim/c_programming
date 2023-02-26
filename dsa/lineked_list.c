#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insert();
void insertEnd();
void insertBegin();
void delete();
void deleteEnd();
void deleteBegin();

struct node{
    int info;
    struct node *next;
};
struct node *head = NULL;

int main(){
    int n;
    printf("\n1.insert at beginning \n2.insert at end \n3.insert at any position\n 4.delete at beginning\n5.delete at end\n6.delete at specified position\n7.display\n0.exit");
   
    while(1){
        printf("\nenter your choice: ");
        scanf("%d",&n);
        switch(n){
            case 0:
                return 0;
            case 1:
                insertBegin();
                break;
            case 2:
                insertEnd();
                break;
            case 3:
                insert();
                break;
            case 4:
                deleteBegin();
                break;
            case 5:
                deleteEnd();
                break;
            case 6:
                delete();
                break;
            case 7:
                display();
                break;
            default:
                break;
        }
    }
}

void create(){
    struct node *newnode;
    int data;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("\n out of memory space");
        exit(0);
    }
    printf("enter data");
    scanf("%d",&data);
    newnode->info = data;  
}

void insertBegin(){
    struct node* newnode;
    int data;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("\n out of memory space");
        exit(0);
    }
    printf("enter data: ");
    scanf("%d",&data);
    newnode->info = data;
    if(head == NULL){
        head = newnode;
        return;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
    printf("\n%d\n",newnode->info);
}
void insertEnd(){
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    int data;
    if(newnode == NULL){
        printf("\n out of memory space");
        exit(0);
    }
    printf("enter data to insert at end ");
    scanf("%d",&data);
    newnode->info = data;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    struct node* ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    printf("%d inserted at end",newnode->info);

}
void insert(){
    struct node *ptr,*newnode;
    int data;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("\n out of memory space");
        exit(0);
    }
    printf("enter data");
    scanf("%d",&data);
    newnode->info = data;
    int pos,i;
    
    printf("enter the postion you want to insert: ");
    scanf("%d",&pos);
    ptr = head;
    for(i = 0; i < pos-1; i++){
        ptr = ptr->next;  
        if(ptr == NULL)
            printf("\n position not found \n");
    }
  
    newnode ->next = ptr->next;
    ptr->next = newnode;
    printf("\n %d inserted \n",newnode->info);
}
void deleteBegin() {
    if (head == NULL) {
        printf("list is empty");
        return;
    }

    struct node* ptr = head;
    head = head->next;
    printf("%d is deleted",ptr->info);
    free(ptr);
}
void deleteEnd(){
    struct node *ptr,*temp;
    if(head == NULL){
        printf("list is empty");
    }
    else if(head -> next == NULL){
        ptr = head;
        head = NULL;
        printf("deleted element = %d",ptr->info);
        free(ptr);
    }
    else{
        ptr = head;
        while(ptr -> next != NULL){
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("deleted %d",ptr->info);
        free(ptr);
    }
}

void delete(){
    struct node *ptr,*temp;
    int pos,i;
    printf("enter position you want to delete");
    scanf("%d",&pos);
    printf("enter position you want to delete");
    scanf("%d",&pos);
    if(head == NULL){
        printf("\n the list is empty\n");
        exit(0);
    }
        else if(pos ==0){
            ptr = head;
            head = head->next;
            printf("%d is deleted",ptr->info);
            free(ptr);
        }
        else{
            ptr = head;
            for(i = 0;i < pos;i++){
                temp = ptr;
                ptr = ptr->next;
            }
            if(ptr == NULL){
                printf("position not found");
                return;
            }
            temp->next = ptr->next;
            free(ptr);
            printf("%d is deleted",temp->info);
            
        }
}
void display(){
    struct node* ptr = head;
    if(head == NULL){
        printf("\n list is empty");
        return;
    }
    else{
        printf("\n the list element are: \n");
        while (ptr != NULL) {
            printf("%d ", ptr->info);
            ptr = ptr->next;
        }
    }
    printf("\n");
}