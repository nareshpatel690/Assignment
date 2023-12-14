#include<iostream>
using namespace std;
class student
{
	public:
		int roll;
		void roll1()
		{
			cout<<"enter the roll number: ";
			cin>>roll;
		}
};
class test : public student
{
	public: 
		int subject1,subject2;
		void marks2()
		{
			
			cout<<"enter first subject marks: ";
			cin>>subject1;
			cout<<"enter secound subject marks: ";
			cin>>subject2;
			
		}
};
class result : public test
{
	public: 
	void detail3()
	{
		cout<<"roll number student: "<<roll<<endl;
		cout<<"total marks are "<<subject1+subject2<<endl;
	}
	
};

main()
{
result r;
r.roll1();
r.marks2();
r.detail3();
	
}
