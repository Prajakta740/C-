#include<iostream>
using namespace  std;
class employee
{
	private:
		int eno,age;
		char name[30],gender,city[20];
		float salary;
		
	public:
	    void getdata();
		void putdata();	
};
void employee::getdata()
{
	cout<<"\n enter emp no:";
	cin>>eno;
	cout<<"\n enter name(oonly initial):";
	cin>>name;
	cout<<"enter age:";
	cin>>age;
	cout<<"\n enter gender(M/F):";
	cin>>gender;
	cout<<"\n enter salary:";
	cin>>salary;
	cout<<"\n enter city:";
	cin>>city;
}
void employee::putdata()
{
	cout<<"\n"<<eno<<"\t"<<name<<"\t"<<age<<"\t"<<gender<<"\t"<<salary<<"\t"<<city;
}
int main()
{
	employee e[10];
	int i;
	for(i=0;i<10;i++)
	{
		e[1].getdata();
	}
	cout<<"\n emp_no\t name\tage\tgender\tsalary\tcity";
	for(i=0;i<10;i++)
	{
		e[1].putdata();
	}
	return 0;
}
