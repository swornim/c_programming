#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node* next;
};
struct node* head = NULL;

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
    }
    else{
        newnode->next = head;
        head = newnode;
    }
    printf("\n%d\n",newnode->info);

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
void deleteEnd(struct node *head) {
  struct node *ptr = head;

  // Traverse the list until the second to last element
  while (ptr->next->next != NULL) {
    ptr = ptr->next;
  }

  // Set the next pointer of the second to last element to NULL
  ptr->next = NULL;

  // Free the memory allocated for the last element
  free(ptr->next);
}

int main(){
    insertBegin();
    insert();
    insertEnd();
    display();
    deleteBegin();
    display();
    return 0;
}