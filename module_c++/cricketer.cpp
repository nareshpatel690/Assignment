#include<iostream>
using namespace std;
class cricketer
{
	public:
		string name;
		int runs,matches,score;
		void inputdata()
		{
			cout<<"enter a batsman name ";
			cin>>name;
			cout<<"enter total runs ";
			cin>>runs;
			cout<<"enter matches ";
			cin>>matches;
			cout<<"enter best score ";
			cin>>score;
		}
};
 class batsman : public cricketer
 {
 	public:
   void displaydata()
   {
   	
   	int avrage  =runs/matches;
   	
   	cout<<"\n betsman name: "<<name;
   	cout<<"\n total runs: "<<runs;   	
   	cout<<"\n avrage run: "<<avrage;
   	cout<<"\n best score: "<<score;
   }
   
 };
main()
{
batsman a;
a.inputdata();
a.displaydata();	
}