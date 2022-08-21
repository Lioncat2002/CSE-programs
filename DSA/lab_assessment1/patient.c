#include "stdio.h"

typedef struct{
    char name[200];
    int age;
    int token_number;
    int height;
    int weight;
    char reason[200];
} Patient;

int quicksort(Patient *patient,int f,int l){
    int i=0,j=0,pivot=0;
    Patient temp;
    if (f<l)
    {
        pivot=f;
        i=f;
        j=l;
    
    while (i<j)
    {
        while ((patient+i)->token_number<=(patient+pivot)->token_number && i<l)
        {
            i++;
        }
        while ((patient+j)->token_number>=(patient+pivot)->token_number && j>f)
        {
            j--;
        }
        if(i<j){
            temp=*(patient+i);
            *(patient+i)=*(patient+j);
            *(patient+j)=temp;
        }
    }
    temp=*(patient+j);
    *(patient+j)=*(patient+pivot);
    *(patient+pivot)=temp;
    
    quicksort(patient,f,j-1);
    quicksort(patient,j+1,l);
    }
}
void disp(Patient *patient,int n){
    for (size_t i = 0; i < n; i++)
    {
        printf("\n-----------------\n",i+1);
        printf("Name : %s \n",(patient+i)->name);
        printf("Age : %d \n",(patient+i)->age);
        printf("Token Number : %d \n",(patient+i)->token_number);
        printf("Height : %d \n",(patient+i)->height);
        printf("Weight : %d \n",(patient+i)->weight);
        printf("Reason : %s \n",(patient+i)->reason);
    }
    printf("\n");
}
int main(){
    int n;
    Patient patient[200];
    printf("Enter the number of patients: ");
    scanf("%d",&n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("\n-------Patient: %d--------\n",i+1);
        printf("Enter name: ");
        fgets(patient[i].name,200,stdin);
        printf("Enter age: ");
        scanf("%d",&patient[i].age);
        getchar();
        printf("Enter token number: ");
        scanf("%d",&patient[i].token_number);
        getchar();
        printf("Enter height: ");
        scanf("%d",&patient[i].height);
        getchar();
        printf("Enter weight: ");
        scanf("%d",&patient[i].weight);
        getchar();
        printf("Enter reason: ");
        fgets(patient[i].reason,200,stdin);
        
    }
    
    quicksort(patient,0,n-1);
    disp(patient,n);
}