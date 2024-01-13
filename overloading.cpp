#include<iostream>
using namespace std;
int maximum(int,int);
double maximum(double,double);
int maximum(int,int,int);
int main()
{
	cout<<"\n maximum between 200 and 765 ="<<maximum(200,765);
	
	cout<<"\n maximum between 567.87 and 98.67 ="<<maximum(567.87,98.67);
	
	cout<<"\n maximum between 34,98 and 76 ="<<maximum(34,98,76);
	
	return 0;
}
int maximum(int a,int b)
{
   if(a>b)
     return a;
	else
	  return b;    	
}
double maximum(double a,double b)
{
   if(a>b)
     return a;
	else
	  return b;    	
}
int maximum(int a,int b,int c)
{
   if(a>b && a>c)
     return a;
	else if(b>c)
	  return b;  
	else
	return c;    	
}
