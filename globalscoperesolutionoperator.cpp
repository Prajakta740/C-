// GLOBAL SCOPE RESOLUTION OPERATOR
 #include<iostream>
 using namespace std;
 int a=50;
 int main()
 {
 	int a=10;
 	cout<<"\n loacal a="<<a;
 	cout<<"\n global a="<<::a;
 	return 0;
 }
