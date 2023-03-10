#include<iostream>
using namespace std;

main()
{
int number,digit,a,b;
int i=0;
cout<<"enter a number of any length: ";
cin>>number;
cout<<"enter digit to find its frequency in a number: ";
cin>>digit;

while(number>0)
{
   a=number%10;
   number= number/10;

  if (a==digit)
  {
i++;
  }
}
   cout<<i; 
   
  
}