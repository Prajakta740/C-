/* WAP to define a class maxmin having following members data members-three integers
   member functions- 1.to read values of integers, 2.to find maximum, 3.to find minimum */
#include<iostream>
using namespace std;
class maxmin
{
	private:
		int x,y,z;
	public:
		void read()
		{
			cout<<"\n Enter the three integers values :";
			cin>>x>>y>>z;
		}
		void max()
		{
			if(x>y)
			   cout<<"\n Maximum ="<<x;
			else if(y>z)
			    cout<<"\n Maximum ="<<y;
			else
			    cout<<"\n Maximum ="<<z;	   
		}
		void min()
		{
			if(x<y)
			   cout<<"\n Minimum ="<<x;
			else if(y<z)
			    cout<<"\n Minimum ="<<y;
			else
			    cout<<"\n Minimum ="<<z;	   
		}
};
int main()
{
	maxmin obj;
	obj.read();
	obj.max();
	obj.min();
	return 0;
}  

