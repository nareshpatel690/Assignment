#include<iostream>
using namespace std;

	class calc
	{
		int a,b;
        public:
		calc()
		{
			cout<<"enter first number ";
			cin>>a;
			cout<<"enter secound number ";
			cin>>b;
			cout<<"\nsum of given number "<<a+b;
			cout<<"\nsub of given number "<<a-b;
			cout<<"\nmulti of given number "<<a*b;
			cout<<"\ndiv of given number "<<a/b;
			}					
	};



main()
{
	calc c;
	
}
