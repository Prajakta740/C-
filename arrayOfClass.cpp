#include<iostream>
using namespace std;
class array
{
	private:
		int a[10];
	public:
	    void read();
		void print();	
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
void array::print()
{
	int i;
	cout<<"\n The entered digits are as follows:";
	for(i=0;i<10;i++)
	{
		cout<<"\t"<<a[i];
	}
}
int main()
{
	array obj1,obj2;
	obj1.read();
	obj1.print();
	obj2.read();
	obj2.print();
	return 0;
}
