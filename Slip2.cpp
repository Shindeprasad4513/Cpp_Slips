/*
Q.1) Create a base class Shape. Derive three different classes Circle, Rectangle and Triangle 
from Shape class. Write a C++ program to calculate area of Circle, Rectangle and Triangle. 
(Use pure virtual function). 

#include<iostream>
using namespace std;
class shape
{
  public:
  virtual void area()=0;  
};
class circle:public shape
{
  public:
  float r;
  void area()
  {
    cout << "Enter radius:" << endl;
    cin >> r;
    int a=3.14f*r*r;
    cout << "Area Of Circle="<<a << endl;
  }
};
class rectangle:public shape
{
  public:
  float l,w;
  void area()
  {
     cout << "Enter Length And Width:" << endl;
     cin >> l>>w;;
     int a=l*w;
     cout << "Area Of rectangle="<<a << endl;
  }
};
class triangle:public shape
{
  public:
  float b,h;
  void area()
  {
      cout << "Enter base And height:" << endl;
      cin >> b>>h; 
      int a=0.5f*b*h;
      cout << "Area Of Circle="<<a << endl;
  }
};
int main()
{
  circle c;
  c.area();
  rectangle r;
  r.area();
  triangle t;
  t.area();
}
*/
/*
Q.2) Write a C++ program to define power function to calculate x^y. (Use default value 
 as 2 for y).
 */
 #include<iostream>
 using namespace std;
 void power(int x,int y=2)
 {
   int p=1,i;
   for(i=1;i<=y;i++)
   {
      p=p*x;
   }
   cout << "Base to Power ="<<p << endl;
 }
 int main()
 {
   int x;
   cout << "Enter base Value:" << endl;
   cin>>x;
   power(x,2);
 }