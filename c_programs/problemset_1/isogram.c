/*
WAP to find if a word is isogram or not isogram
*/
#include "stdio.h"
#include "string.h"
#include "ctype.h"

void input(unsigned char word[200]){
    scanf("%s",word);
}

void frequency_table(unsigned char table[255],unsigned char word[200]){
    
    for (int i = 0; word[i] !='\0'; i++)
    {
        word[i]=tolower(word[i]);
        table[word[i]]++;  
        //printf("%c - %d\n",word[i],table[word[i]]); 
    }
}

int order1_anagram(unsigned char table[255],unsigned char word[200]){
    int anagram=0;

    for (int i = 0; word[i] !='\0'; i++)
    {
        if (table[word[i]]==1)
        {
            anagram=1;
            
        }
        else if(table[word[i]]>1){
            anagram=0;
            break;
        }
        
    }
    return anagram;
}
int order2_anagram(unsigned char table[255],unsigned char word[200]){
    int anagram=0;
    for (int i = 0; word[i] !='\0'; i++)
    {
            if (table[word[i]]==2)
            {
                anagram=1;

            }
            else if(table[word[i]]>2 ||table[word[i]]<2){
                anagram=0;
                return anagram;
            }
        
    }
    return anagram;
}

void display(int _1st_order_anagram,int _2nd_order_anagram){

    if (_1st_order_anagram && _2nd_order_anagram==0)
    {
        printf("First-Order Isogram");
    }
    else if (_2nd_order_anagram && _1st_order_anagram==0)
    {
        printf("Second-Order Isogram");
    }
    else{
        printf("Non-Isogram");
    }

}

int main(){
    unsigned char table[255]={0};
    unsigned char word[200];
    input(word);
    int _1st_order_anagram=0;
    int _2nd_order_anagram=0;
    //counting frequency
    frequency_table(table,word);

    
    _1st_order_anagram=order1_anagram(table,word);
    _2nd_order_anagram=order2_anagram(table,word);    

    display(_1st_order_anagram,_2nd_order_anagram);
    
}