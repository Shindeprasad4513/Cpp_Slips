/*Slip-4
Q.1) Design a Base class Customer (name, phone-number). Derive a class Depositor (accno, 
balance) from Customer. Again, derive a class Borrower (loan-no, loan-amt) from 
Depositor. Write necessary member functions to read and display the details of ‘n’ 
customers. 

#include<iostream>
using namespace std;
class customer
{
  public:
  long int phno;
  string name;
  void accept_cust()
  {
    cout << "Enter Customer Name And Phno:" << endl;
    cin>>name>>phno;
  }
  void disp_cust()
  {
    cout << "Customer Name="<<name << endl;
    cout << "Customer Phone No="<<phno << endl;
  }
};
class depositor:public customer
{
    public :
    long int ano,bal;
    void accept_depo()
    {
      cout << "Enter Acc No And Balance:" << endl;
      cin>>ano>>bal;
    }
    void disp_depo()
  {
    cout << "Customer Account No="<<ano << endl;
    cout << "Customer Balance="<<bal << endl;
  }
    
};
class borrower:public depositor
{
  public:
  long int lno,lamt;
 void accept_borro()
 {
   cout << "Enter Loan No Amd Loan Amt:" << endl;
   cin >> lno>>lamt;
 }
 void disp_borro()
  {
    cout << "Customer Loan NO="<<lno << endl;
    cout << "Customer Loan Amount="<<lamt << endl;
  }
};
int main()
{
  int i,n;
  borrower ob[100];
  cout << "Enter Limit:" << endl;
  cin>>n;
  cout << "Enter n Customer Details\n" << endl;
  for(i=0;i<n;i++)
  {
    ob[i].accept_cust();
    ob[i].accept_depo();
    ob[i].accept_borro();
  }
  cout << "Customers Details\n" << endl;
  for(i=0;i<n;i++)
  {
    ob[i].disp_cust();
    ob[i].disp_depo();
    ob[i].disp_borro();
  }
}
*/
/*
Q.2) Write a C++ program to calculate area of cone, sphere and circle by using function 
overloading.
*/
#include<iostream>
using namespace std;
void area(float r,float l)
{
  float a=3.14*r*(r+l);
  cout<<"\nArea Of Cone="<<a;
}
void area(float r)
{
  float a=4*3.14*r*r;
  cout<<"\nArea Of Sphere="<<a;
}
void area(double r)
{
  double a=3.14*r*r;
  cout<<"\nArea Of Circle="<<a;
}
int main()
{
  area(3.4f,6.7f);
  area(4.5f);
  area(5.5);
}