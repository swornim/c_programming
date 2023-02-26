#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;

void insertBegin(){
    int data;
    printf("enter data to insert: ");
    scanf("%d",&data);
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> info = data;
    newnode -> next = NULL;
    newnode -> prev = NULL;
    if(head == NULL){
        head = newnode;
        return;
    }
    else{
        newnode -> next = head;
        head -> prev = newnode;
        head = newnode;
    }
    printf("%d is inserted \n",newnode->info);
    printf("%d is next and %d in prev \n",newnode->next,newnode->prev);
}
void insertEnd(){
    int data;
    struct node *ptr;
    printf("enter data to insert: ");
    scanf("%d",&data);
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = data;
    newnode -> prev = NULL;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
        return;
    }
    else{
        ptr = head;
        while(ptr -> next != NULL){
            ptr = ptr -> next;
        }
        ptr->next = newnode;
        newnode->prev = ptr;
    }
    printf("%d is inserted \n",newnode->info);
    printf("%d is next and %d in prev \n",newnode->next,newnode->prev);
}

void insertSpec(){
    int data,pos;
    struct node *ptr;
    printf("enter data to insert: ");
    scanf("%d",&data);
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = data;
    newnode -> prev = NULL;
    newnode->next = NULL;
    printf("enter position you want to insert: ");
    scanf("%d",&pos);
    ptr = head;
    for(int i = 0; i < pos -1 ; i++){
        ptr = ptr -> next;
        if(ptr = NULL){
            printf("position not found");
        }
    }
    newnode->next = ptr -> next;
    newnode -> prev = ptr;
    ptr -> next -> prev = newnode;
    ptr ->next = newnode;
    printf("%d is inserted \n",newnode->info);
    printf("%d is next and %d is prev \n",newnode->next,newnode->prev);
}
void deleteBegin(){
    struct node *ptr;
    if(head == NULL){
        printf("list is empty");
        return;
    }
    else{
        ptr = head;
        head = head -> next;
        head->prev = NULL;
        free(ptr);
    }
}
void deleteEnd(){
    struct node *ptr;
    ptr = head;
    if(ptr == NULL){
        printf("list is empty");
    }
    else if(head -> next == NULL){
            ptr = head;
            head = NULL;
            printf("the deleted element is %d",ptr ->info);
            free(ptr);
        }
        else{
            ptr = head;
            while(ptr ->next != NULL){
                ptr = ptr->next;
            }
            ptr -> prev -> next = NULL;
            printf("deleted element is %d\n",ptr ->info);
            free(ptr);
        }
}
void deleteSpec(){
    // int pos;
    // printf("enter position you want to delete");
    // scanf("%d",&pos);
     struct node *ptr;
    // ptr = head;
    // if(head = NULL){
    //     printf("the list is empty");
    //     return;
    // }
    // else{
    //     ptr = head;
    //     for(int i = 0 ; i < pos ; i++){
    //         ptr = ptr ->next;
    //         if(ptr == NULL){
    //             printf("position not found");
    //         }
    //     }
    //     ptr-> prev->next = ptr->next;
    //     ptr -> next -> prev = ptr -> prev;
    //     free(ptr);
    // }
    int pos,i;
	if(head==NULL)
	{
		printf("\nList is empty!!");
		exit(0);
	}
	printf("\nEnter the position to be deleted :");
	scanf("%d",&pos);
	if(pos==0)
	{
		ptr=head;
		head=head->next;
		head->prev=NULL;
		printf("Deleted element is %d\n",ptr->info);
		free(ptr);
		exit(0);
	}
	ptr=head;
	for(i=0;i<pos;i++)
	{
		ptr=ptr->next;
		if(ptr==NULL)
		{
			printf("\nPosition not found!!");
		}
	}
	printf("Deleted element is %d\n",ptr->info);
	ptr->prev->next=ptr->next;
	ptr->next->prev=ptr->prev;
	free(ptr);
	return;
}

void display(){
    struct node *ptr;
    ptr = head;
    printf("\nthe elements are\t");
    while(ptr != NULL){
        printf("%d\t",ptr->info);
        ptr = ptr ->next;
    }
    printf("\n");
}

int main()
{
	int n;
	while(1)
	{
	printf("\n0.Exit\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Delete at beginning\n5.Delete at end\n6.Delete at specified position\n7.Display all elements in list");
	printf("\nEnter your choice :");
	scanf("%d",&n);
	switch(n)
	{
		case 0:
			exit(0);
			break;
		case 1:
			insertBegin();
			break;
		case 2:
			insertEnd();
			break;
		case 3:
			insertSpec();
			break;
		case 4:
			deleteBegin();
			break;
		case 5:
			deleteEnd();
			break;
		case 6:
			deleteSpec();
			break;
		case 7:
			display();
			break;
		default:
			break;
	}
}
	return 0;
}

