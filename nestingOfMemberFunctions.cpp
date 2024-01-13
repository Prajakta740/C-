/* WAP to define a class arithmetic to demonstrate arithmetic operations on data members using nesting of member functions*/
#include<iostream>
using namespace std;
class arithmetic
{
	private:
		int x,y;
	public:
		void read()
		{
		    cout<<"\n Enter two numbers :";
			cin>>x>>y;	
		}
	    void add()
		{
		    cout<<"\n Addition="<<x+y;	
		}
		void sub()
		{
		    cout<<"\n Subtraction="<<x-y;	
		}
		void multi()
		{
		    cout<<"\n Multiplication="<<x*y;	
		}
		void div()
		{
		    cout<<"\n Division="<<float(x)/y;	
		}
		void operators()
		{
		    add();
			sub();
			multi();
			div();	
		}	
};
int main()
{
	arithmetic obj;
	obj.read();
	obj.operators();
	return 0;
}
