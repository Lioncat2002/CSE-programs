#include <iostream>

class Student{
    public:
        int roll;
        std::string name;
        std::string branch;
};

class Exam:public Student{
    public:
        float phy;
        float chem;
        float math;
        void init(int r,std::string n,std::string b){
            roll=r;
            name=n;
            branch=b;
        }
};

class Result{
    public:
         float total(float s1,float s2,float s3){
            return s1+s2+s3;
        }
         float average(float s1,float s2,float s3){
            return total(s1,s2,s3)/3;
        }
};

int main(){
    int n,flag=0;
    std::cin>>n;
    Exam e1[n];

    for (int i = 0; i < n; i++)
    {
        int roll;
        std::string name;
        std::string branch;
        std::cout<<"Enter roll: ";
        std::cin>>roll;
        getchar();
        std::cout<<"Enter name ";
        getline(std::cin,name);
        std::cout<<"Enter branch: ";
        getline(std::cin,branch);

        e1[i].init(roll,name,branch);
    }
    for (int i = 0; i < n; i++)
    {
        
        std::cin>>e1[i].phy;
        std::cin>>e1[i].chem;
        std::cin>>e1[i].math;
    }
    for (int i = 0; i < n; i++)
    {
        Result r;
        float tot=r.total(e1[i].phy,e1[i].chem,e1[i].math);
        float avg=r.average(e1[i].phy,e1[i].chem,e1[i].math);
        if (avg>90)
        {
            std::cout<<e1[i].name;
            flag++;
        }
    }
    
    if (flag==0)
    {
        std::cout<<"NA";
    }
    
    
}