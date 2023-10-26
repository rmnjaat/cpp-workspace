

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define the structure
struct student {
    char name[50];
    int gift_number;
};

// Comparison function for sorting
int compareByGiftNumber(const void *a, const void *b) {
    return ((struct student*)a)->gift_number - ((struct student*)b)->gift_number;
}

// Function to sort an array of stu_arr by gift number
void sortstu_arrByGiftNumber(struct student *stu_arr, int num_student) {
    qsort(stu_arr, num_student, sizeof(struct student), compareByGiftNumber);
}

int main() {
    // Define an array of stu_arr
    int num_student=3;
    struct student stu_arr[num_student];

      for(int i=0;i<num_student;i++){
        char c[4];
        int g;
        
        printf("Enter name of %dst student :\n",i);
        // fflush(stdin);
        scanf("%s",c);

        printf("Enter Number of gift \n");
        scanf("%d",&g);
        // fflush(stdin);

        strcpy(stu_arr[i].name,c);

        stu_arr[i].gift_number=g;

    }


    // Sort the array based on "gift_number"
    sortstu_arrByGiftNumber(stu_arr, num_student);

    // Print the sorted list of stu_arr
    for (int i = num_student-1; i >=0; i--) {
        
        printf("Name: %s, Gift Number: %d\n", stu_arr[i].name, stu_arr[i].gift_number);
    }

    return 0;
}
