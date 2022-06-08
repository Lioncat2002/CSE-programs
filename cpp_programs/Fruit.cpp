#include "iostream"

class Fruit{
    public:
        int total_fruits=0;
        int fruits(int n){
            total_fruits+=n;
            return total_fruits;
        }

};
class Apples:public Fruit{
    public:
        int apples_no;

};
class Mangoes: public Fruit{
    public:
        int mangoes_no;
};
int main(){
    Apples appleobj;
    Mangoes mangoobj;
    appleobj.apples_no=40;
    mangoobj.mangoes_no=30;
    appleobj.total_fruits=appleobj.apples_no+mangoobj.mangoes_no;

    std::cout<<"Apples: "<<appleobj.apples_no;
}