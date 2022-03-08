#include<stdio.h>
void main(){
    int n1,n2,a[5][5],b[5][5],c[5][5];
    printf("Enter the no of rows and columns of the array: ");
    scanf("%d %d",&n1,&n2);
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("Enter the a[%d][%d] element value: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("Enter the b[%d][%d] element value: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The subtraction of two matrices a[][] and b[][] = c[][] that is equivalent to \n");
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}