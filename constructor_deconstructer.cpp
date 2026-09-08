#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int marks;
    int phone_number;
    public:
    student(){
        name="unknown";
        marks=0;
        phone_number= 00000000;
        cout<<"student records with default system"<<endl;
    }
    void inputofstudent(){
        cout<<"enter the name of the student:"<<endl;
        cin>>name;
        cout<<"enter the marks of the student:"<<endl;
        cin>>marks;
        cout<<"enter the phone number (upto 10 digits):"<<endl;
        cin>>phone_number;
    }
    void display(){
        cout<<"the name of student is:"<<name<<endl;
        cout<<"the marks of student is:"<<marks<<endl;
        cout<<"the phone number of student is:"<<phone_number<<endl;
        

    }
    ~student(){
        cout<<"the deconstructer is called"<<endl;}


};
int main(){
   student s1;
   s1.inputofstudent();
   s1.display();
   cout<<"the program is ended"<<endl;
   return 0; 
}