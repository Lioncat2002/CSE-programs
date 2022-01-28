#include <iostream>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a;
    int b;
    std::cin>>a;
    std::cin>>b;

    swap(&a,&b);

    std::cout<<a<<" "<<b;

}