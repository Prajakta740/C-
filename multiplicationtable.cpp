// WAP  to read a number and print its multiplication table.

#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"\n enter the value.";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<"\n"<<n<<"x"<<i<<"="<<n*i;
	}
	return 0;
}
