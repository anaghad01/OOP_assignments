//============================================================================
// Name        : except.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class data
{
	int age;
	float income;
	string city;
	char vehicle;
public:
	void read(){
		cout<<"\nEnter your age details:\n";
		cin>>age;
		cout<<"\nEnter your income details:\n";
		cin>>income;
		cout<<"\nEnter your city details:\n";
		cin>>city;
		cout<<"\nEnter your vehicle details:\n";
		cin>>vehicle;
	}

	void display(){
		if(age<18 || age>55)
			throw age;
		if(income<50000 || income>100000)
			throw income;
		if(city!="pune"&&city!="mumbai"&&city!="chennai")
			throw city;
		if(vehicle!='Y')
			throw vehicle;

		cout<<"\nAGE:\n"<<age;
		cout<<"\nINCOME:\n"<<income;
		cout<<"\nCITY:\n"<<city;
		cout<<"\nVEHICLE:\n"<<vehicle;
	}
};

//********************************************************************************************************************
int main()
{
    data d;
	d.read();
	try{
	     d.display();
	   }
	catch(int a)
	{cout<<"\n!!!!EXCEPTION:Age not in defined limit!!!!\n";}
	catch(float b)
	{cout<<"\n!!!!EXCEPTION:Income not in defined limit!!!!\n";}
	catch(string c)
	{cout<<"\n!!!!EXCEPTION:City not in defined limit!!!!\n";}
	catch(char d)
	{cout<<"\n!!!!EXCEPTION:Vehicle not in defined limit!!!!\n";}
	cout<<"\n*********END OF PROGRAM********\n";
	return 0;
}
