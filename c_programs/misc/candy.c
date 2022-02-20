#include "stdio.h"
#include "string.h"
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int chocolates[n];
    int students[m];
    memset(students,0,sizeof(students));
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&chocolates[i]);
        
    }
    students[0]=1;
    for (size_t i = 0; i < m-1; i++)
    {
       if(chocolates[i]>chocolates[i-1]){
           students[i+1]+=students[i]+1;
       }
       if(chocolates[i]>chocolates[i+1]){
           students[i+1]+=students[i+2]+1;
       }
       printf("%d ",students[i]);
    }
    int sum=0;
    for(int i=0;i<m;i++){
        sum+=students[i];
    }
    printf("%d",sum);
}