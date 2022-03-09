#include<stdio.h>
int main(){
    int a1,x,y,z;
    int k1[10][10],k2[10][10],re[10][10];
    scanf("%d %d",&a1,&a1);
    scanf("%d %d",&a1,&a1);
    for(x=0;x<a1;x++){
        for(y=0;y<a1;y++){
            scanf("%d",&k1[x][y]);
        }
    }
    for(x=0;x<a1;x++){
        for(y=0;y<a1;y++){
            scanf("%d",&k2[x][y]); 
        }
    }
        for(x=0;x<a1;x++){
            for(y=0;y<a1;y++)
        {
            int s=0;
            for (z=0;z<a1;z++)
            {
            s+=k1[x][y]*k2[z][y];
            }
            re[x][y]=s;
        }
    
    }
    for (x=0;x<a1;x++){
        for (y=0;y<a1;y++){
            printf("%d ",re[x][y]);
        }
    }
    return 0;
}