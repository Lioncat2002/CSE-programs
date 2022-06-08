#include "iostream"

float area(float base, float height){
     return 0.5*base*height;
}

int area(int base, int height){
     return base*height;
}
int area(int radius){
     return (int)(3.14*radius*radius);
}

int main(){
    float base,height;
    int length,breadth,r;

    std::cin>>base>>height;
    std::cin>>length>>breadth;
    std::cin>>r;
    
    std::cout<<area(base,height)<<"\n";
    std::cout<<area(length,breadth)<<"\n"; 
    std::cout<<area(r)<<"\n";
}