#include "iostream"

class Numbers{
    public:
        int nums;
        Numbers(){
            
        }
        bool operator >(Numbers n){
            return (nums>n.nums);
        }
};

int main(){
    int n;
    std::cin>>n;
    Numbers *num=new Numbers();
    for (int i = 0; i < n; i++)
    {
        std::cin>>num[i].nums;
    }
    
    Numbers l(num[0]);
    for (int i = 0; i < n; i++)
    {
        if (num[i]>l)
        {
            l=num[i];
        }
    }
    std::cout<<l.nums;
}