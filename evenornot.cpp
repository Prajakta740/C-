// WAP  to read a number and check wheather the number is even or odd.

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\n enter the value.";
	cin>>n;
	if(n%2==0)
	{
		cout<<n<<" is even number.";
	}
	else
	{
		cout<<n<<" is odd number.";
	}
	return 0;
}
