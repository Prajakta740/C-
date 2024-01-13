/* WAP to define a friend function which finds maximum among private data members of two different classes */
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
	friend void max(sample,test);	
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
	friend void max(sample,test);	
};
int main()
{
	sample s;
	test t;
	s.read();
	t.read();
	max(s,t);
	return 0;
}
void max(sample a,test b)
{
	if(a.x>b.y)
	   cout<<"\n maximum ="<<a.x;
	else
	   cout<<"\n maximum ="<<b.y;   
}
