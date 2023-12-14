#include<iostream>
using namespace std;
class overloading
{
	public:
		void addition(int a,int b)
		{
			cout<<a+b<<endl;
		}
		void addition(double c,double d)
		{
			cout<<c-d<<endl;
		}
		void addition(int e,int f,int g)
		{
			cout<<e*f*g<<endl;
		}
		void addition(float h,float i)
		{
			cout<<h/i;
		}
};
main(){
	overloading sub;
	sub.addition(10,2);
	sub.addition(10,2);
	sub.addition(1,2,3);
	sub.addition(12.2f,12.2f);
}