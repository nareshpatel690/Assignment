#include<iostream>
using namespace std;

class bankacc{
	string name,type;
	int account,balance,d;
	public:
		void input(){
			cout<<"enter name of the depositor\n";
			cin>>name;
			cout<<"enter accont number\n";
			cin>>account;
			cout<<"enter type of account\n";
			cin>>type;
			cout<<"enter balance amount\n";
			cin>>balance;
		}
		void display(){
		cout<<"name of the depositor: "<<name<<endl;
		cout<<"account number: "<<account<<endl;
		cout<<"account type: "<<type<<endl;
		cout<<"account balance: "<<balance<<endl;
		}
		void deposit()
		{
			cout<<"\nenter deposited an amount ";
			cin>>d;
		}
		void disdeposit()
		{
			balance=balance+d;
			cout<<"\naccount balance "<<balance;
		}
		
		void withdraw()
		{
			cout<<"\nenter withdrawbalance ";
			cin>>d;
		}
		void diswithdraw()
		{
			cout<<"\nwithdraw balance "<<balance-d;
			cout<<"\nname "<<name;
		}
		
		
};

main(){
	bankacc obj;
	obj.input();
	obj.display();	
	obj.deposit();
	obj.disdeposit();
	obj.withdraw();
	obj.diswithdraw();
}