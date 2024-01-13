/* WAP for date class again by defining member functions outside body of class */
#include<iostream>
using namespace std;
class date
{
	private:
	    int date, month, year;
	public:
		void read();
		void dmy();
		void mdy();
};
        void date::read()
		{
			cout<<"\n Enter the date :";
			cin>>date;
			cout<<"\n Enter the month :";
			cin>>month;
			cout<<"\n Enter the year :";
			cin>>year;
		}
		void date::dmy()
		{
			cout<<"\nDD/MM/YY :";
			cout<<date<<"/"<<month<<"/"<<year;
		}
		void date::mdy()
		{
			cout<<"\nMM/DD/YY :";
			cout<<month<<"/"<<date<<"/"<<year;
	    }
int main()
{
	date obj;
	obj.read();
	obj.dmy();
	obj.mdy();
	return 0;
}  
