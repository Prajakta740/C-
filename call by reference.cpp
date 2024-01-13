#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
	int x=10, y=20;
	cout<<"\n values before calling swap";
	cout<<"\n x="<<x;
	cout<<"\n y="<<y;
	swap(x,y);
	cout<<"\n values after calling swap";
	cout<<"\n x="<<x;
	cout<<"\n y="<<y;
	return 0;
}
void swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"\n values inside calling swap";
	cout<<"\n a="<<a;
	cout<<"\n b="<<b;
}
