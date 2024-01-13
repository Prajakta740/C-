#include<iostream>
using namespace std;
int add(int,int);
double add(float,float);
int add(int,int,int);
int main()
{
	int x,y;
	cout<<"\n enter the two integer value=";
	cin>>x>>y;
	add(x,y);
	cout<<"\n Addition =" << add(x,y);
	
	float a,b;
	cout<<"\n enter the two float value=";
	cin>>a>>b;
	add(a,b);
	cout<<"\n Addition =" <<add(a,b);

	int p,q,r;
	cout<<"\n enter the three integer value=";
	cin>>p>>q>>r;
	add(p,q,r);
	cout<<"\n Addition= "<<add(p,q,r);
	
	return 0;
}
int add(int i,int j)
{
	return i+j;
}
double add(float i,float j)
{
	return i+j;
}
int add(int i,int j,int k)
{
	return i+j+k;
}
