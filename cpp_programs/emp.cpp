#include <iostream>

class EMP{
    public:
    int id;
    std::string name;
    int salary;
    std::string regeime;
    int net_salary;
};

void swap(EMP &a,EMP &b){
    EMP temp=a;
    a=b;
    b=temp;
}

int main(){
    int n;
    std::cin>>n;
    getchar();
    EMP emp[n];

    for (int i = 0; i < n; i++)
    {
        std::cin>>emp[i].id;
        getchar();
        getline(std::cin,emp[i].name);
        std::cin>>emp[i].salary;
        getchar();
        getline(std::cin,emp[i].regeime);
    }

    for (int i = 0; i < n; i++)
    {
        if (emp[i].regeime=="New")
        {
            if (emp[i].salary>500000)
            {
                emp[i].net_salary=emp[i].salary-emp[i].salary*0.25;
            }
        }
        else if(emp[i].regeime=="Old"){
            if (emp[i].salary>=250000 && emp[i].salary<=500000)
            {
                emp[i].net_salary=emp[i].salary-emp[i].salary*0.15;
            }
            if (emp[i].salary>1000000)
            {
                emp[i].net_salary=emp[i].salary-emp[i].salary*0.20;
            }
        } 
    }
    for (int i = 0; i < n-1; i++)
    {
        if (emp[i].net_salary<emp[i+1].net_salary)
        {
            swap(emp[i],emp[i+1]);
            i=-1;
        }  
    }
    for (int i = 0; i < n; i++)
    {
        std::cout<<emp[i].id<<" "<<emp[i].name<<" "<<emp[i].net_salary;
    }
    
    
}