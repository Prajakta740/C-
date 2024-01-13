/* WAP to define a class date having following members 
Data members
    date,month,year
Member functions
    1. to read date
	2. to print date in dd/mm/yy
	3. to print date in mm/dd/yy */
#include<iostream>
using namespace std;
class date
{
	private:
	    int date, month, year;
	public:
		void read()
		{
			cout<<"\n Enter the date :";
			cin>>date;
			cout<<"\n Enter the month :";
			cin>>month;
			cout<<"\n Enter the year :";
			cin>>year;
		}
		void dmy()
		{
			cout<<"\nDD/MM/YY :";
			cout<<date<<"/"<<month<<"/"<<year;
		}
		void mdy()
		{
			cout<<"\nMM/DD/YY :";
			cout<<month<<"/"<<date<<"/"<<year;
	    }
};	
int main()
{
	date obj;
	obj.read();
	obj.dmy();
	obj.mdy();
	return 0;
}    
