#include<iostream>
using namespace std;
inline int square (int a)
{
	return(a*a);
}
int main()
{
int x=25,y;
y= square(x);   //inline expansion
cout<<"\n square="<<y;
return 0;
}
