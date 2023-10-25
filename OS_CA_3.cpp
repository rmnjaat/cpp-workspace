#include<stdio.h>
#include<string.h>

struct student
{
    
    char name[20];
    int no_gift;

};


int main(){

    struct student arr[10];
    
    for(int i=0;i<10;i++){
        char c[20];
        int g;
        
        printf("Enter %d \n",i);
        // fflush(stdin);
        scanf("%s",c);
        scanf("%d",&g);
        fflush(stdin);


        strcpy(arr[i].name,c);

        arr[i].no_gift=g;


    }


    for(int i=0;i<10;i++){
        printf("%s : %d \n",arr[i].name,arr[i].no_gift);
    }

}


