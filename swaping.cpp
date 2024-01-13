#include<iostream>
using namespace std;
void swap(int&,int&);
void swap(float&,float&);
void swap(char&,char&);
int main()
{
	int x,y;
	cout<<"\n enter the two value=";
	cin>>x>>y;
	cout<<"\n values before swaping";
	cout<<"\n x="<<x;
	cout<<"\n y="<<y;
	swap(x,y);
	cout<<"\n values after swaping";
	cout<<"\n x="<<x;
	cout<<"\n y="<<y;
	
	float a,b;
	cout<<"\n enter the two value=";
	cin>>a>>b;
	cout<<"\n values before swaping";
	cout<<"\n a="<<a;
	cout<<"\n b="<<b;
	swap(a,b);
	cout<<"\n values after swaping";
	cout<<"\n a="<<a;
	cout<<"\n b="<<b;
	
	char p,q;
	cout<<"\n enter the two value=";
	cin>>p>>q;
	cout<<"\n values before swaping";
	cout<<"\n p="<<p;
	cout<<"\n q="<<q;
	swap(x,y);
	cout<<"\n values after swaping";
	cout<<"\n p="<<p;
	cout<<"\n q="<<q;
	
	return 0;
}
void swap(int &i,int &j)
{
	int t;
	t=i;
	i=j;
	j=t;
}
void swap(float &i,float &j)
{
	float t;
	t=i;
	i=j;
	j=t;
}
void swap(char &i,char &j)
{
	char t;
	t=i;
	i=j;
	j=t;
}
