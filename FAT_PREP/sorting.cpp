#include <iostream>
 template<typename T>void swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
 }

 template<typename T>void sort(T a[],int n){
    for (int i = 0; i < n-1; i++)
    {
        if (*(a+i)>*(a+i+1))
        {
            swap(*(a+i),*(a+i+1));
            i=-1;
        }
    }
}
int main(){
    int a[]={3,2,1,4,5,9};
    float b[]={2.1,3.3,4.5,6.7,1.0,5.0};
    sort(a,6);
    sort(b,6);
    for (int i = 0; i < 6; i++)
    {
        std::cout<<a[i]<<"\n";
    }
    for (int i = 0; i < 6; i++)
    {
        std::cout<<b[i]<<"\n";
    }
}