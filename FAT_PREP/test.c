#include <stdio.h>

struct Customers{
    int acc_no;
    char name[200];
    float bal;
};

void bal(const struct Customers *customer){
    if (customer->bal<100) {
        printf("Number: %d \n Name: %s\n",customer->acc_no,customer->name);
    }
}

void work(struct Customers *customer,int code){
    float bal=0.0f;
    switch (code) {
        case 1:
            printf("\n---Deposit---\n");
            scanf("%f",&bal);
            customer->bal+=bal;
        break;

        case 0:
            printf("\n---Withdrawl---\n");
            scanf("%f",&bal);
            if((customer->bal-bal)<100){
                customer->bal-=bal;
                printf("Amount withdrawn");
            }else {
                printf("Insufficient Balance\n");
            }
    }
}

int main(){
    struct Customers customers[200];
    int code;
    for (int i=0;i<200 ;i++ ) {
        printf("\nAccount number: ");
        scanf("%d",&customers[i].acc_no);
        printf("\nName: ");
        scanf("%s",customers[i].name);
        printf("\nBalance: ");
        scanf("%f",&customers[i].bal);
        bal(&customers[i]);
    }
    printf("1. for Deposit \n 2. for Withdrawl");
    scanf("%d",&code);
    for (int i=0;i<200 ;i++ ) {
        work(&customers[i],code);
    }
}
