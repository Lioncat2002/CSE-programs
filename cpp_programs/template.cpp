#include "iostream"

template <typename T>bool compare(T *x,int size){
    if (*x>*(x+size-1))
    {
        T temp=*x;
        *x=*(x+size-1);
        *(x+size-1)=temp;
        return true;
    }
    return false;
}

int main(){
    int flag,n;
    std::cin>>flag;
    getchar();
    std::cin>>n;
    getchar();
    int arr[n];
    std::string arrstr[n];
    switch (flag)
    {
    case 0: 
        for (int i = 0; i < n; i++)
        {
               std::cin>>arr[i];
               getchar();
        } 
        printf("Output:\n");
       if(compare<int>(arr,n)){
           for (int i = 0; i < n; i++)
           {
               std::cout<<arr[i]<<"\n";
           } 
        }else{
            std::cout<<"No swap";
        }

    break;
    
    case 1:
        for (int i = 0; i < n; i++)
        {
               getline(std::cin,arrstr[i]);
        }
        printf("Output:\n");
        if(compare<std::string>(arrstr,n)){

           for (int i = 0; i < n; i++)
           {
               std::cout<<arrstr[i]<<"\n";
           } 
        }else{
            std::cout<<"No swap";
        }
    break;
    default:
        break;
    }
    
}