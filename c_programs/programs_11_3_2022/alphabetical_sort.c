//WAP to arrange words in alphabetical order
#include<stdio.h>
#include<string.h>
int main(){
   int i,j,n;
   char str[100][100],s[100];
   printf("Enter words number: \n");
   scanf("%d",&n);
    printf("Enter words number: \n");
   
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n-1;i++){
      
         if(strcmp(str[i],str[i+1])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[i+1]);
            strcpy(str[i+1],s);
            i=-1;
         }
      
   }
    printf("Arranged order: \n");
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }
}