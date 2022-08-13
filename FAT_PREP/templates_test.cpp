#include<iostream>
using namespace std;
template <class T>
void display(T x)
{
cout<<"Template display:"<<x<<"\n";
}
void display()
{
cout<<"Explicitly display:\n";
}
int main()
{
display(100);
display(12.34);
display('c');
display();
return 0;
}