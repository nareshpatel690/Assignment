#include<iostream>
using namespace std;
class human1{
	public:
		string name;
		int age;
	void member(){
		cout<<"enter members name ";
		cin>>name;
		cout<<"enter age ";
		cin>>age;
	}
};
class student 
{
	public : 
	float percentage;
		void per()
		{
			cout<<"enter a student percentage ";
			cin>>percentage;
		}
};
class human2 : public student ,public human1
{
	public:
		int salary;
	void class1()
	{
		cout<<"enter a teacher salary ";
		cin>>salary;
	}
	void dd(){
		cout<<"\nname "<<name;
		cout<<"\nage "<<age;
		cout<<"\npercentage "<<percentage;
		cout<<"\nsalary "<<salary;
	}
};


main()
{
  human2 a;
 a.member();
 a.per();
 a.class1();
 a.dd();
			
}