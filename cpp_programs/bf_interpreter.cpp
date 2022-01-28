#include <iostream>
#include <string>
#include <stdint.h>
using namespace std;

int main()
{
    string s;
    uint8_t table[3000]={0};
    uint8_t* ptr=table;

    cout << "Enter a string: ";
    getline(cin,s);
    int n=s.length();

    for (size_t i = 0; i < n; i++)
    {
        if (s[i]=='+')
        {
            
            ++*ptr; //phaking prefix and postfix operator lost an hour here >:c
        }
        if (s[i]=='-')
        {
            
            --*ptr; //phaking prefix and postfix operator lost an hour here >:c
        }
        if(s[i]=='>'){
            
            ptr++;
        }
        if(s[i]=='<'){
            
            ptr--;
        }
        if(s[i]=='.'){
            
            cout<<*ptr;
        }
        if(s[i]==','){
            
            cin>>*ptr;
        }
        
    }
    
    return 0;
}
