#include<iostream>
using namespace std;

main()
{
int number;
int a;
int b=0;
cout<<"enter a number:";
cin>>number;
while(number>0)
{
    number=number/10;
b++;

}

  cout<<b;  
}