/*Slip1
Q.1) Write a C++ program to calculate area and circumference of a Circle. (Use default 
argument, scope resolution operator and manipulator.) 

#include<iostream>
#include<iomanip>
using namespace std;
class circle
{
 public:
 void area(float r=2.7);
  
 void circum(float r=5.5)
 {
  float a;
  a=2*3.14*r;
  cout<<setw(6) << "Circumference Of Circle="<<a << endl;
 }
}; 
void circle::area(float r)
 {
  float a;
  a=3.14*r*r;
  cout<<setw(10) << "Area Of Circle="<<a << endl;
 } 
int main()
{
   circle ob;
   float r;
   cout<< "Enter Radius Of Circle:"<<endl;
   cin>>r;
   ob.area(r);
   ob.circum(r);
}
*/
/*
Q.2) Write a C++ program to create a class MyDate with three data members as dd, mm, yyyy. 
Create and initialize the object by using parameterized constructor and display date in dd-
mon-yyyy format. (Input: 19-12-2014 Output: 19-Dec-2014). (Use the concept of dynamic 
initialization of object).
*/
#include<iostream>
using namespace std;
class MyDate
{
  public:
  int dd,mm,yyyy;
  MyDate(int dd,int mm,int yyyy)
  {
    this->dd=dd;
    this->mm=mm;
    this->yyyy=yyyy;
  }
  void disp()
  {
    string m[]={"Jan","feb","March","April","May","June","July","Aug","Sept","Oct","Nov","Des"};
    cout<<"Output:"<<dd<<"-"<<m[mm-1]<<"-"<<yyyy;
  }
};
int main()
{
  MyDate *m1=new MyDate(29,8,2005); 
  m1->disp();
}