//============================================================================
// Name        : ass1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class calculator
{
	public:
	int a,b,res;
	void getdata()
	{
            cout<<"Enter two numbers:"<<endl;
	    cin>>a>>b;
	}
    void addition()
    {
    	res=a+b;
    	cout<<"Addition is:"<<res;
    }
    void subtraction()
    {
    	res=a-b;
    	cout<<"Subtraction is:"<<res;
    }
    void multiplication()
    {
    	res=a*b;
    	cout<<"Multiplication is:"<<res;
    }
    void division()
    {
    	res=a/b;
    	cout<<"Division is:"<<res;
    }
};
int main() {

    char ch;
    calculator c;
    c.getdata();
    do
    { cout<<"\n Select the operation";
      cout<<"\n 1. Addition(+)";
      cout<<"\n 2. Subtraction(-)";
      cout<<"\n 3. Multiplication(*)";
      cout<<"\n 4. Division(/)";
      cout<<"\n 5. Exit"<<endl;
      cin>>ch;
      switch(ch)
      {
         case'+':{c.addition();
                  break;}
         case'-':{c.subtraction();
                  break;}
         case'*':{c.multiplication();
                  break;}
         case'/':{c.division();
                  break;}
      }
    }
    while(ch!='E' && ch!='e');
	return 0;
}
