// WAP  to read a number and check wheather the number is positive or not.

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\n enter the value.";
	cin>>n;
	if(n>0)
	{
		cout<<n<<"is positive number.";
	}
	else
	{
		cout<<n<<" is negative number.";
	}
	return 0;
}
