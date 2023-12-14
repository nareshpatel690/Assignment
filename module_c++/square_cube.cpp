#include<iostream>
using namespace std;
class multi
{
        
	public:
		void square(int a)
		{
			cout<<"square of given number ";
			cout<<a*a;
		}
};
class cubic
{
	
	public:
		void cube(int b)
		{
			cout<<"\ncubic of given number ";
			cout<<b*b*b;
		}
};
main()
{
	
multi s;
s.square(5);
cubic c;
c.cube(3);
	
}