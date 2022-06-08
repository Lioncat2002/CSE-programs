#include "iostream"

class String{

public:
    std::string a;
    String(std::string f=""){
        a=f;
    }
    bool operator==(String const &obj1){
        if (a==obj1.a)
        {
           return true;
        }
        return false;
    }

};

int main(){
    std::string x,y;
    getline(std::cin,x);
    getline(std::cin,y);
    String a(x),b(y);
    if (a==b)
    {
        std::cout<<"EQUAL";
    }else{
        std::cout<<"NOT EQUAL";
    }
    
}