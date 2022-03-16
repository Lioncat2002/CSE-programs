#include "stdio.h"

#define PAPAYA_COST 100
#define MANGO_COST 150
#define GRAPES_COST 50

int inputs(int arr[4]){
    int i;
    for(i=0;i<4;i++){    
        scanf("%d",&arr[i]);
    }
}

int total_costs_fruit(int cost,int arr[4],int sales[4][3],int fruit){

    int earning=0;
    for(int i=0;i<4;i++){
        
        earning+=cost*arr[i];
        sales[i][fruit]=cost*arr[i];
        
    }
    
    printf("%d ",earning);

}

int main(){
    
    int Papaya[4],Mango[4],Grapes[4];
    int sales[4][3];
    int total_sales=0;
    int sum;
    int i,j;
    //Taking inputs
    //since the the scanf inputs at the memory address we don't need code duplication
    inputs(Papaya);
    inputs(Mango);
    inputs(Grapes);
    //i) total sales fruit value
    total_costs_fruit(PAPAYA_COST,Papaya,sales,0);
    total_costs_fruit(MANGO_COST,Mango,sales,1);
    total_costs_fruit(GRAPES_COST,Grapes,sales,2);
    printf("\n");
    for(i=0;i<4;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=sales[i][j];
        }
        total_sales+=sum;
        printf("%d ",sum);
    }
    printf("\n%d",total_sales);
    
}
    /*
    //i) total sales fruit wise
    //Papaya
    int earning=0;
    for(i=0;i<4;i++){
        
        earning+=PAPAYA_COST*Papaya[i];
        sales[i][0]=PAPAYA_COST*Papaya[i];
    }
    
    printf("%d ",earning);
    //Mango
    earning=0;
    for(i=0;i<4;i++){
        
        earning+=MANGO_COST*Mango[i];
        sales[i][1]=MANGO_COST*Mango[i];
    }

    printf("%d ",earning);
    //Grapes
    earning=0;
    for(i=0;i<4;i++){
        
        earning+=GRAPES_COST*Grapes[i];
        sales[i][2]=GRAPES_COST*Grapes[i];
    }

    printf("%d \n",earning);
    for(i=0;i<4;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=sales[i][j];
        }
        total_sales+=sum;
        printf("%d ",sum);
    }
    printf("\n%d",total_sales);

}
*/