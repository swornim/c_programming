//WAP to read name,number of pages and author of 2 books and store it in a file.Also,Display the stored information
#include<stdio.h>
void main(){
    struct book{
        char name[30];
        int page;
        char aut[30];
    };
    struct book b[2];
    FILE *f;
    f = fopen("book.txt","w+");
    for(int i = 0 ; i < 2;i++){
        printf("\nenter name of book ");
        scanf("%s",&b[i].name);
        printf("\nenter number of pages ");
        scanf("%d",&b[i].page);
        printf("\nenter author: ");
        scanf("%s",&b[i].aut);
        fprintf(f,"\n%s\t%d\t%s\n",b[i].name,b[i].page,b[i].aut);
    }
    rewind(f);
    printf("\nname \tnumber of pages \tauthor");
    int j = 0;
    for(int j = 0 ; j < 2;j++){
        fscanf(f,"%s\t%d\t%s",&b[j].name,&b[j].page,&b[j].aut);
        printf("\n%s\t%d\t%s",b[j].name,b[j].page,b[j].aut);
    }
    fclose(f);
}
