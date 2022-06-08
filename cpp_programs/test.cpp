#include <iostream>

struct temp{
    int a;
}s;

void fun(struct temp s){
    s.a=1;
}

int main(){
    s.a=10;
    fun(s);
    printf("%d",s.a);
}