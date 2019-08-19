//============================================================================
// Name        : ass4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//*************************PERSONAL DETAILS*******************************************************
class personal
{ string name, add; int phno;
  public:
  void getdata()
  {
    cout<<"\nEnter your name: ";
    cin>>name;
    cout<<"\nEnter your address: ";
    cin>>add;
    cout<<"\nEnter your phone number: ";
    cin>>phno;
  }

  void display()
  {
	cout<<"\nName: "<<name;
    cout<<"\nAddress: "<<add;
    cout<<"\nPhone number: "<<phno;
  }
};

//****************************** ACADEMIC DETAILS*************************************************************
class academic
{ string degree; int score1, score2;
  public:
  void getdata()
  {
    cout<<"\nEnter your degree: ";
    cin>>degree;
    cout<<"\nEnter your 12th score: ";
    cin>>score1;
    cout<<"\nEnter your GATE score: ";
    cin>>score2;
  }

  void display()
  {
	cout<<"\nDegree: "<<degree;
    cout<<"\n12th score: "<<score1;
    cout<<"\nGATE score: "<<score2;
  }
};

//***********************************PROFESSIONAL DATA**************************************************
class professional
{ string comp, des; int sal;
  public:
  void getdata()
  {
    cout<<"\nEnter company name you are currently working with: ";
    cin>>comp;
    cout<<"\nEnter your current designation: ";
    cin>>des;
    cout<<"\nEnter your current salary: ";
    cin>>sal;
  }

  void display()
  {
	cout<<"\nCompany name: "<<comp;
    cout<<"\nDesignation: "<<des;
    cout<<"\nSalary: "<<sal;
  }
};

//**********************************BIODATA*****************************************************************
class biodata: public personal,public academic,public professional
{ public:
	void getdata()
    {
		personal::getdata();
		academic::getdata();
		professional::getdata();
	}
	void display()
	{
		personal::display();
	    academic::display();
	    professional::display();

	}
};

//***************************************************************************************************
int main()
{ biodata b;
  b.getdata();
  b.display();
  return 0;
}

//***************************************END**************************************************************

















