#include<iostream>
using namespace std;
class array
{
	private:
		int a[10];
	public:
	    void read();
		void max();	
		void min();
};
void array::read()
{
	int i;
	cout<<"\n Enter the 10 digits:";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
}
void array::max()
{
	int i,max;
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		   max=a[i];
		   cout<<"\n max ="<<max;
	}
}
void array::min()
{
	int i,min=0;
	for(i=0;i<10;i++)
	{
		if(min>a[i])
		   min=a[i];
		   cout<<"\n maximum value ="<<min;
	}
}
int main()
{
	array obj1;
	obj1.read();
	obj1.max();
	obj1.min();
	return 0;
}
