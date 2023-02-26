//Create a file named "hotel.txt".WAP to keep records of N hotels in Nepal to the file.
//These record should conatain name,location and phone number of the respective hotel.
//Display the names of hotels in 'Pokhara' *location
#include<stdio.h>
#include<string.h>
void main(){
    struct hotel{
        char name[30];
        char location[30];
        long int ph;
    };
    struct hotel h[100];
    FILE *f;
    f = fopen("hotel.txt","w+");
    int n;
    printf("enter no. of hotels: ");
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++){
        printf("enter name of hotel ");
        scanf("%s",h[i].name);
        printf("enter location of hotel ");
        scanf("%s",h[i].location);
        printf("enter phone number: ");
        scanf("%ld",&h[i].ph);
        fwrite(&h,sizeof(h),1,f);
    }
    rewind(f);
    printf("\nname\tlocation\tphone number");
    int j = 0;
    while(fread(&h,sizeof(h),1,f)==1){
        for(int j = 0 ; j < n;j++){
            if(strcmp(h[j].location,"pokhara")==0){
                printf("\n%s\t%s\t%ld",h[j].name,h[j].location,h[j].ph);
            }
        }
    }
    fclose(f);
}
