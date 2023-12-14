#include<iostream>
using namespace std;
class overloading
{
	public:
	void area(float r,float pi=3.14)
	{
		cout<<pi*r*r<<endl;
	}
	void area(int l,int b)
	{
		cout<<l*b<<endl;
	}
	void area(double l,double h)
	{
		cout<<h/2*l;
		
	}
};
main()
{
	 overloading a;
	a.area(5.f);
	a.area(5);
	a.area(2.00,3.00);
}
