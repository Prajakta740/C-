// WAP  to read a number and print its fibonacci series.

#include<iostream>
using namespace std;
int main()
{
	int i,x=0,y=1,s=0;
	cout<<"\n Fibonnacci series is as follows :";
	cout<<"\n0\t1\t";
	
	for(i=1;i<=18;i++)
	{
		s=x+y;
		cout<<s<<"\t";
		x=y;
		y=s;
	}
	return 0;
}
