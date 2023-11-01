#include<stdio.h>
#include <string.h>
#include <stdlib.h>


int total_waiting;
int tat;
int completion;
int prev=0;

struct proc{
    char name;
    int arrival_time;
    int burst_time;
    int completion_time;
    int tat;
    int waiting_time;
};




int compareByGiftNumber(const void *a, const void *b)
{
    struct proc *aa = (struct proc *)a;
    struct proc *bb = (struct proc *)b;

    return aa->arrival_time - bb->arrival_time;
}


void sortstu_arrByGiftNumber(struct proc *stu_arr, int num_student)
{
    qsort(stu_arr, num_student, sizeof(struct proc), compareByGiftNumber);
}

int main(){

    int n;
    printf("ENter no oof processes : ");
    scanf("%d",&n);

    struct proc arr[n];

    for(int i=0;i<n;i++){
        arr[i].name='a'+i;
        printf("Enter arrival time for  %c :",arr[i].name);
        int gg;
        scanf("%d",&gg);
        arr[i].arrival_time=gg;
        arr[i].burst_time=arr[i].arrival_time * 2;

    }

     sortstu_arrByGiftNumber(arr,n);



for(int i=0;i<n;i++){


    if(i>0){
        int temp;

        temp= arr[i-1].completion_time-arr[i].arrival_time;
        if(temp>=0){
            prev=temp;
        }
    }

    
    arr[i].completion_time=arr[i].arrival_time+arr[i].burst_time+prev;
    // prev=arr[i].completion_time;

    arr[i].tat=arr[i].completion_time-arr[i].arrival_time;
    arr[i].waiting_time=arr[i].tat-arr[i].burst_time;

}


     for(int i=0;i<n;i++){
        printf("%c\t\t%d\t\t%d\t\t%d\t\t%d\n ",arr[i].name,arr[i].arrival_time,arr[i].completion_time,arr[i].tat,arr[i].waiting_time);
     }

}