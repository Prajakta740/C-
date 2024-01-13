/* WAP to define a friend function which swaps values among private data members of two different classes */
#include<iostream>
using namespace std;
class test;
class sample
{
	private:
		int x;
	public:
	void read()
	{
		cout<<"\n Enter sample::x ";
		cin>>x;
	}
	void print()
	{
		cout<<"\n The value of sample::x "<<x;
	}
	friend void swap(sample&,test&);	
};
class test
{
	private:
		int y;
	public:
	void read()
	{
		cout<<"\n Enter test::y ";
		cin>>y;
	}
	void print()
	{
		cout<<"\n the value of test::y "<<y;
	}
	friend void swap(sample&,test&);	
};
int main()
{
	sample s;
	test t;
	s.read();
	t.read();
	cout<<"\n values before swaping";
	s.print();
	t.print();
	swap(s,t);
	cout<<"\n values after swaping";
	s.print();
	t.print();
	return 0;
}
void swap(sample &a,test &b)
{
  int t;
  t=a.x;
  a.x=b.y;
  b.y=t; 
}
