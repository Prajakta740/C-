#include<iostream>
using namespace std;
int pow(int,int);
float pow(float,int);
int main()
{
	int a,b;
	float c;
	cout<<"\n enter the base and index which both are integers:";
	cin>>a>>b;
    cout<<"\n power"<<a <<"raise to"<<b<<"="<<pow(a,b);
    cout<<"\n enter the base which is float and index is integers:";
	cin>>c>>b;
	cout<<"\n power"<<c <<"raise to"<<b<<"="<<pow(c,b);
	return 0;
}
int pow(int x,int y)
{
  int i,p=1;
  for(i=1;i<=y;i++)
     p=p*x;
  return p;	   	
}
float pow(float x, int y)
{
	int i;
	float p;
	for(i=1;i<=y;i++)
	   p=p*x;
	return p;   
}

