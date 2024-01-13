/* WAP to define a class student having the following members
Data members
   Roll number
   name of student
   marks in three subject
Member functions
   1. to read information
   2. to compute total and average
   3. to print information  */
#include<iostream>
using namespace std;
class student
{
   private:
      int rno;
	  char name[20];
	  float marks1,marks2,marks3,total,avg;

	public:
	   void read()
	   {
	   	cout<<"\n Enter the roll number :";
	   	cin>>rno;
	   	cout<<"\n Enter the name :";
	   	cin>>name;
	   	cout<<"\n Enter the marks of three subject :";
	   	cin>>marks1>>marks2>>marks3;
	    }
		void calc()
		{
			total=marks1+marks2+marks3;
			avg=total/3;	
		}
		void print()
		{
			cout<<"\n Roll no. ="<<rno;
			cout<<"\n Name ="<<name;
			cout<<"\n Marks of three subject ="<<marks1<<"\t"<<marks2<<"\t"<<marks3;
			cout<<"\n Total marks ="<<total;
			cout<<"\n Average marks ="<<avg;
		}  	
};
int main()
{
	student obj;
	obj.read();
	obj.calc();
	obj.print();
	return 0;
}

