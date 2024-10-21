/*Slip-3
Q.1) Create a C++ class Employee with data members E_no, E_Name, Designation and Salary. 
Accept two employee’s information and display information of employee having maximum 
salary. (Use this pointer).
 
#include<iostream>
using namespace std;
class employee
{
  public:
  int eno,sal;
  string ename,desig;
  void accept(int eno,string ename,string desig,int sal)
  {
    this->eno=eno;
    this->ename=ename;
    this->desig=desig;
    this->sal=sal;
  }
  void disp()
  {
    cout << "\nEmployee Having Maximum Salary::\n" << endl;
    cout << "Employee No:"<<eno << endl;
    cout << "Employee Name:"<<ename << endl;
    cout << "Employee Designation:"<<desig << endl;
    cout << "Employee Salary:"<<sal << endl;
  }
};
int main()
{
  employee e1,e2;
  e1.accept(1,"Om","clear",34500);
  e2.accept(2,"Sai","manager",54500);
  if(e1.sal>e2.sal)
    e1.disp();
  else
    e2.disp();  
}
*/
/* 
Q.2) Write a C++program to calculate following series: 
(1*1) +(2*2) +(3*3) + … +(n*n).
*/
#include<iostream>
using namespace std;
void cal_series(int n)
{
  int i,s=0;
  for(i=1;i<=n;i++)
  {
    s=s+(i*i); 
  }
  cout << "Sum Of Series="<<s << endl;
}
int main()
{
  int n;
  cout << "Enter Limit:" << endl;
  cin>>n;
  cal_series(n);
}