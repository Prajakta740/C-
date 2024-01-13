#include<iostream>
using namespace std;
class maxmin
{
	private:
		int x,y;
	public:
	    void read()
		{
			cout<<"\n enter the two numbers:";
			cin>>x>>y;
		}
		void max()
		{
			if(x>y)
			    cout<<"\n maximum="<<x;
			else
			    cout<<"\n maximum="<<y;    
		}
		void min()
		{
			if(x<y)
			   cout<<"\n minimum="<<x;
			else
			   cout<<"\n minimum="<<y;   
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
