//           Write a program to find the max number from given two numbers using 
//           friend function 



#include<iostream>
using namespace std;
class Max
{
	public:
		int x,y;
		void max()
		{
			cout<<"enter number x: ";
			cin>>x;
			cout<<"enter number y: ";
			cin>>y;
		if(x<y){
			cout<<"bigger is "<<y;
		}
		else{
			cout<<"bigger is "<<x;
		}
		
		}
		friend void show();
		

};
	void show()
{
	Max m;
	m.max();
}

main()
{
	show();
}
