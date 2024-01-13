/* WAP to define a class employee having following members
data members
   employee number
   name of employee
   gender
   salary
member function
    1. to read the information
	2. to print the information */
#include<iostream>
using namespace std;
class employee
{
	private:
		int eno;
		char ename[20],gender;
		float salary;
	public:
	    void read()
		{
			cout<<"\n Enter the employee number:";
			cin>>eno;
			cout<<"\n Enter the employee name:";
			cin>>ename;
			cout<<"\n Enter the gender(mention M / F):";
			cin>>gender;
			cout<<"\n Enter the salary:";
			cin>>salary;
		}
		void print()
		{
			cout<<"\n Employee no. :"<<eno;
			cout<<"\n Employee name. :"<<ename;
			cout<<"\n Employee gender :"<<gender;
			cout<<"\n Employee salary :"<<salary;
		}	
};
int main()
{
	employee obj;
	obj.read();
	obj.print();
	return 0;
}	   
