#include <iostream>
using namespace std;
class student
{
 private:
 int roll_no;
 float marks;
 public:
 student(int r, float m)
 {
 roll_no=r;
 marks=m;
 }
friend ostream& operator<<(ostream &out, student &st)
 {

 out<<"roll_no: "<<st.roll_no<<endl;
 out<<"marks: "<<st.marks<<endl;
 return out;
 }
};
int main()
{
 student s1(1,490), s2(2, 600);
 cout<<"Record of Studen1 is:\n";
 cout<<s1;
 cout<<"Record of Studen2 is:\n";
 cout<<s2;

}