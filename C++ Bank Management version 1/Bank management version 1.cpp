//Bank Management C++ Project

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class bank
{
	//Variables
	char name[100], address[100], accOpt;
	int balance;
	
	
	
	
	public:
		void open_account();
		void deposit_money();
		void withdraw_money();
		void display_account();
};


void bank::open_account()
{
	cout<<"Enter your full name :: ";
	cin.ignore();
	cin.getline(name, 100);
	cout<<"Enter your Address :: ";
	cin.ignore();
	cin.getline(address, 100);
	cout<<"What type of Account would you like to open :: Savings account (s)  or Current Account (c) :: ";
	cin>>accOpt;
	cout<<"Enter Amount for Deposit:: ";
	cin>>balance;
	cout<<"Your Account Is created successfully::   \n";
	cout<<" ^  ^\n";
	cout<<" |__??_|\n";

}







int main()
{
	//variables
	int choise, x;
	bank obj;
	
	
	do 
	{
			cout<<"1) Open Account \n";
			cout<<"2)  Deposit Money \n";
			cout<<"3) Withdraw Money \n";
			cout<<"4) Display account \n";
			cout<<"5) Exit \n";
			cout<<"Select an option from Above   \n";
			cin>>choise;
			
			
			
			switch (choise)
			{
				case 1: 
				obj.open_account();
				break;
				
				case 2: 
				obj.deposit_money();
				break;
				
				case 3: 
				obj.withdraw_money();
				break;
				
				case 4: 
				obj.display_account();
				break;
				
				
				case 5: 
				   if(choise == 5)
				   {
				   	 exit(1);
				   }
				   
				default:
					cout<<" Invalid option  please try again \n";
				
			}	
			
			
			cout<<"\n do you want to select next option then press :: y\n";
			cout<<"If you want to exit then press :: N ";
			x=getch();
			
			
			
			if(x=='n' || x== 'N')
			exit(0);
			
	}   while(x=='Y'|| x=='y');

	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}