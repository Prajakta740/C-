#include<iostream>
using namespace std;
class matrix 
{
	private:
	 int a[3][3];
	 
	public:
	 void read();
	 void print(); 
};
void matrix::read()
{
	int i,j;
	cout<<"\n enter the 9 elements";
	for (i=0;i<3;i++)
	{
	   for (j=0;j<3;j++)
	  {
		cin>>a[i][j];
	  }	
	}
}
void matrix::print()
{
	int i,j;
	
	for (i=0;i<3;i++)
	{
	   for (j=0;j<3;j++)
	  {
		cout<<a[i][j]<<"\t";
	  }	
	}
}
int main()
{
	matrix m1,m2;
	
	m1.read();
	m2.read();
	cout<<"\n matrix 1 :";
	m1.print();
	cout<<"\n matrix 2 :";
	m2.print();
	return 0;
}
