/*Slip-5
Q.1) Write a C++ program to create two classes Array1 and Array2 with an integer array as a 
data member. Write necessary member functions to accept and display array elements of 
both the classes. Find and display maximum of both the array. (Use Friend function). 
 
 #include<iostream>
 using namespace std;
 class Array2;
 class Array1
 {
   public:
   int a[100],i;
   void accept()
   {
     cout << "Enter 5 Array1 Elements: " << endl;
     for(i=0;i<5;i++)
     {
       cin>>a[i];
     }
   }
   void disp()
   { 
      cout << "\nArray1 Elements: " << endl;
     for(i=0;i<5;i++)
     {
       cout<<a[i]<<endl;
     } 
   }
  friend void cal_max(Array1,Array2);   
 };
 class Array2
 {
   public:
   int a[100],i;
   void accept()
   {
     cout << "Enter 5 Array2 Elements: " << endl;
     for(i=0;i<5;i++)
     {
       cin>>a[i];
     } 
   }
   void disp()
   {
      cout << "\nArray2 Elements: " << endl;
     for(i=0;i<5;i++)
     {
       cout<<a[i]<<endl;
     }
   }
   friend void cal_max(Array1,Array2); 
 };
 void cal_max(Array1 a1,Array2 a2) 
 {
   int max1=a1.a[0];
   int max2=a2.a[0];
   for(int i=0;i<5;i++)
   {
     if(a1.a[i]>max1)
       max1=a1.a[i];
     if(a2.a[i]>max2)
       max2=a2.a[i];
   }
   cout << "\nMaximun Number Of Array1="<<max1 << endl;
   cout << "\nMaximun Number Of Array2="<<max2 << endl;
     
 }
 int main()
 {
   Array1 a1;
   Array2 a2;
   a1.accept();
   a2.accept();
   a1.disp();
   a2.disp();
   cal_max(a1,a2);
 }
 */
 /* 
Q.2) Write a C++ program to accept ‘n’ float numbers, store them in an array and print the 
alternate elements of an array. (Use dynamic memory allocation).
*/
#include<iostream>
using namespace std;
int main()
{
 float *a;
int i,n;
 cout << "Enter Limit:" << endl;
 cin >> n;
 a=new float[n];
 cout << "Enter n Numbers:" << endl;
 for(i=0;i<n;i++)
 {
   cin>>a[i];
 }
 cout << "\nAlternate Numbers:" << endl;
 for(i=0;i<n;i=i+2)
 {
   cout <<a[i]<< endl;
 }
}