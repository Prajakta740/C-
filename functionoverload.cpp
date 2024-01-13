#include<iostream>
using namespace std;
void display(int);
void display(char);
void display(double);
int main()
{
	display(45);
	
	display('$');
	
	display(3.4); 
	
	return 0;
}


void display(int a)
{

	cout<<"\n integer="<<a;
}
void display(char a)
{

	cout<<"\n character="<<a;
}
void display(double a)
{

	cout<<"\n double="<<a;
}



