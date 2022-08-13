#include <iostream>

class A{
    public:
        int a;
    int operator +(A obj){
        return a+obj.a;
    }
};

int main(){
    A a,b;
    a.a=30;
    b.a=20;
    int c=a+b;
    std::cout<<c;
}
