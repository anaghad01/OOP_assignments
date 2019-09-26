//============================================================================
// Name        : vb.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int roll, phone;
	string addr, name;
	cout<<"Enter roll number:";
	cin>>roll;
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter address:";
	cin>>addr;
	cout<<"Enter phone number:";
	cin>>phone;
	ofstream o;
	o.open("STUDENT.txt");
	o<<roll<<endl;
	o<<name<<endl;
	o<<addr<<endl;
	o<<phone<<endl;
	o.close();
	ifstream i;
	i.open("STUDENT.txt");
	char line[20];
	while(i)
	{
	i.getline(line,20);
	cout<<line<<endl;
	}
	i.close();
	return 0;
}


