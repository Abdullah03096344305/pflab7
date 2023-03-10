#include<iostream>
using namespace std;

main()
{
int n,a,b;
int i=0;
int sum=0;
cout<<"enter a number to find its digits sum: ";
cin>>n;
while(n>0)
{
a=n%10;
sum=a+sum;
n=n/10;

}
cout<<sum;
 
}