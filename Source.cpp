#pragma warning(disable : 4996)
#include<iostream>
#include<string.h>
#include <windows.h>
#include<conio.h>
#include <fstream>
#include<stdio.h>
void menu();
using namespace std;
class BANK
{
public:
	BANK();
	void add_customer();
	void store();

private:
	int date,account_number,dob,age,city_no, ph_no, amt_deposite;
	char customer_name[25];
	char address[60];

};

BANK::BANK()
{
	date = 0;
	account_number=0;
	dob = 0;
	age = 0;
	city_no = 0;
	ph_no = 0;
	amt_deposite = 0;
	//strcpy("\0", customer_name);
}

void BANK::add_customer()
{
	cout << "Enter today's date(mm/dd/yyyy) :";
	cin >> date;
	cout << "Enter Account Number :";
	cin >> account_number;
	cout << "Enter Name :";
	cin>>customer_name;
	cout << "Enter  date of birth(mm/dd/yyyy) :";
	cin >> dob;
	cout << "Enter the age:";
	cin >> age;
	cout << "Enter the address:";
	cin >> address;
	cout << "Enter the citizenship number:";
	cin >> city_no;
	cout << "Enter the phone number:";
	cin >> ph_no;
	cout << "Enter the ammount to deposite:$";
	cin >> amt_deposite;

}
/*void BANK::store()
{
	ofstream fout;
	fout.open("data.dat",ios::app|ios::binary);
	fout.write((char*)this, sizeof(*this));
	fout.close();
}*/

//////////////////////////////////////////////////////////////////////////
int main()
{
	int choice;
	int password;
	cout << "Enter password to Login :";
	cin >> password;
	if (password == 7137)
	{
		cout << "Password Match! LOADING ";
		for (int i = 0; i < 5; i++)
		{
			cout << ".";
			Sleep(1000);

		}

		menu();
		cout << "\n";
		cout << "Enter Your Choice :";
			cin >> choice;
		if (choice == 1)
		{ 
         	BANK c1;
			c1.add_customer();
			ofstream outfile("my.DAT",ios::binary);
			outfile.write(reinterpret_cast<char*>(&c1), sizeof(c1));

		}
		
	}
	getch();
}
//////////////////////////////////////////////////////////////////////////////////
void menu()
{
	
	system("cls");
	//system("Color 7C");
	cout << "\t\tCUSTOMER ACCOUNT BANK MANAGEMENT SYSTEM";
	cout << "\n\t\t\tWelcome To The Main Menu";
	cout << "\n";
	cout << "\n\t\t\t1.create new account";
	cout << "\n\t\t\t2.Update information of existing account";
	cout << "\n\t\t\t3.For transactions";
	cout << "\n\t\t\t4.Checking the details of existing account";
	cout << "\n\t\t\t5.Removing of existing account";
	cout << "\n\t\t\t6.View customer's list";
	cout << "\n\t\t\t7.Exit";
}
 