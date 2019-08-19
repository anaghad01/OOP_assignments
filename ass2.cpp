//============================================================================
// Name        : ass2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class student
  {
		private:
	       string name,add,bloodgrp,cls;
	       char div;
	       int roll,contact,age;
	       static int count;

		public:
	       student()
		   {
	    	   cout<<"\nWelcome to student database !!!!!";
	    	   roll= ++count;
	    	   age=18;
               cls="SE";
               div='C';
	    	   name="";
	    	   contact=0;
		   }

//***************************************************************************************************************

	       void getdata()
	       {
	    	   cout<<"\nEnter your name:";
	    	   cin>>name;
	    	   cout<<"\nEnter your cls:";
	    	   cin>>cls;
	    	   cout<<"\nEnter your div:";
	    	   cin>>div;
	    	   cout<<"\nEnter your add:";
	    	   cin>>add;
	    	   cout<<"\nEnter your bloodgrp:";
	    	   cin>>bloodgrp;
	       }

//**************************************************************************************************************

	       void display()
	       {
	    	   cout<<"\nYour name:"<<name;
	    	   cout<<"\nYour roll:"<<roll;
	       	   cout<<"\nYour cls:"<<cls;
	       	   cout<<"\nYour div:"<<div;
	       	   cout<<"\nYour add:"<<add;
	       	   cout<<"\nYour bloodgrp:"<<bloodgrp;
	       }

//***********************************************************************************************************

	       static void total()
	       {
	    	   cout<<"\nTotal students"<<count;
	       }

//**************************************************************************************************************

	       student( string name,string add,string bloodgrp,string cls,char div,int roll,int contact,int age,static int count)
	       {
	    	   cout<<"Parameterized constructor";
	    	   roll=++count;
	    	   this->name= name;
	    	   this->add=add;
	    	   this->bloodgrp=bloodgrp;
	    	   this->cls=cls;
	    	   this->div=div;
	    	   this->roll=roll;
	    	   this->contact=contact;
	    	   this->age=age;
	       }

//*************************************************************************************************************

	       ~ student()
	       {
	      	    cout<<"Welcome to student database !!!!!";
	      	    roll=0;
    	    	age=0;
	            cls="SE";
	            div='C';
	      	    name="";
	      	    contact=0;
	      	}
  };
int student::count;

//*****************************************************************************************************************

int main(){
	student d;
	d.getdata();
	d.display();
	d.total();

	cout<<"Create S2 dynamically";
	student *S2;
	S2= new student;
	S2->getdata();
	cout<<"Output";
	S2->display();
	student::total();
	delete(S2);
	student::total();
	return 0;
}

/**********************************************END********************************************************************/
