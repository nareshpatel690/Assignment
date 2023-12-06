#include<iostream>
using namespace std;
 class menu{
 	string name,a;
 	int choice,bill,q;
 	public:
 		void userinput()
 		{
 	cout<<"\nplease enter your name ";
 	cin>>name;
 	cout<<"\nwhat would you like to order";
 	cout<<"\n1.burger";
 	cout<<"\n2.pizza";
 	cout<<"\n3.sandwich";
 	cout<<"\n4.puff";
 	cout<<"\nenter your choice";
 	cin>>choice;
 	if(choice==1)
 	{
 		cout<<"\n1.veg burger Rs.100";
 		cout<<"\n2.non burger Rs.200";
 		cout<<"\n3.paneer burger Rs.300";
 		cout<<"\nwhich burger you would like to have : ";
 		cin>>choice;
 		if(choice==1)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*100;
 			cout<<"total bill : "<<bill;
 			
		 }
		 
	   else if(choice==2)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*200;
 			cout<<"total bill : "<<bill;
 			
		 }
		 
		 else if(choice==3)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*300;
 			cout<<"total bill : "<<bill;
 			
		 }
		 
 	}
		 else if(choice==2)
 		
 		{
 		cout<<"\n1.veg pizza Rs.150";
 		cout<<"\n2.non pizza Rs.250";
 		cout<<"\n3.paneer pizza Rs.300";
 		cout<<"\nwhich pizza you would like to have : ";
 		cin>>choice;
 		
 		if(choice==1)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*150;
 			cout<<"total bill : "<<bill;
 			
		 }
		 else if(choice==2)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*250;
 			cout<<"total bill : "<<bill;
 			
		 }
		 
		 	 else if(choice==3)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*300;
 			cout<<"total bill : "<<bill;
 			
		 }
 		
		 }
		 	else if(choice==3)
 		{
 		cout<<"\n1.veg sandwich Rs.150";
 		cout<<"\n2.non sandwich Rs.250";
 		cout<<"\n3.paneer sandwich Rs.300";
 		cout<<"\nwhich sandwich you would like to have : ";
 		cin>>choice;
 		if(choice==1)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*150;
 			cout<<"total bill : "<<bill;
 			
		 }
		 else if(choice==2)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*250;
 			cout<<"total bill : "<<bill;
 			
		 }
		 
		 	 else if(choice==3)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*300;
 			cout<<"total bill : "<<bill;
 			
		 }
		 
 		
		 }
		 
		 	else if(choice==4)
 		{
 		cout<<"\n1.veg puff Rs.150";
 		cout<<"\n2.non puff Rs.250";
 		cout<<"\n3.paneer puff Rs.350";
 		cout<<"\nwhich puff you would like to have : ";
 		cin>>choice;
 		
 			 if(choice==1)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*150;
 			cout<<"total bill : "<<bill;
 			
		 }
		 
		 	 else if(choice==2)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*250;
 			cout<<"total bill : "<<bill;
 			
		 }
		 
		 	 else if(choice==3)
 		{
 			cout<<"enter quantity : ";
 			cin>>q;
 			bill=q*350;
 			cout<<"total bill : "<<bill;
 			
		 }
 		
		 }
 		
	 }
		 void again()
		 {
		 	cout<<"would you like to order anything else? Y/N : ";
		 	cin>>a;
		 	if(a=="Y" || a=="y")
		 	{
		 		userinput();
		 		again();
			 }
			 else {
			 	cout<<"thank you visit again  ";
			 }
		 	
		 }
 };
 main()
 {
 	menu s1;
 	s1.userinput();
 	s1.again();
 }