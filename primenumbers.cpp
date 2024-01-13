// WAP  to read a number and check it is prime number or not.
//method 1: by counting value
#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	cout<<"\nEnter the number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		   c++;
	}
	if(c==2)
	  cout<<"\n"<<n<<" is prime number";
    else
      cout<<"\n"<<n<<" is not prime number";
	return 0;
}
