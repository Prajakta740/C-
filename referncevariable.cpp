#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int &a=x;
	cout<<"\nx="<<x;
	cout<<"\na="<<a;
	x=20;
	cout<<"\nx="<<x;
	cout<<"\na="<<a;
	a=30;
	cout<<"\nx="<<x;
	cout<<"\na="<<a;
	return 0;
}
