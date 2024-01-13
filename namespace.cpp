//namespace keyword
#include<iostream>
using namespace std;
namespace sample
{
	int a=50;
}
namespace test
{
	float a=6.7;
}
int main()
{
	cout<<"\n"<<sample::a;
	cout<<"\n"<<test::a;
	return 0;
}
