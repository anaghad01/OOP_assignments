#include <iostream>
#include <list>
using namespace std;

class stack
{
	list <int> l;

public:
	void get()
	{
		int a;
		cin>>a;
		l.push_front(a);
	}
	void pop()
	{
		l.front();
		l.pop_front();
	}

	void top()
	{
		cout<<"Front is:\n"<<l.front();
	}

	void size()
	{
		cout<<"Size is:\n";
		cout<<l.size();
	}
	void display()
	{
		list <int> ::iterator i;
		cout<<"Stack is:\n";
		for(i=l.begin(); i!=l.end(); i++)
		{

			cout<<" "<<*i;
		}
	}

};

int main()
{
     stack s; int ch;
     do{
    	 cout<<"\n1.PUSH\n"<<"2.POP\n"<<"3.SIZE\n"<<"4.TOP\n"<<"5.DISPLAY\n";
    	 cin>>ch;
    	 switch(ch)
    	 {
    	    case 1:cout<<"\nEnter element";
    	          s.get();
    	          break;

    	    case 2:s.pop();
    	           cout<<"\nRemoved element";
    	           break;

    	    case 3:s.size();
    	           break;

    	    case 4: s.top();
    	            break;

    	    case 5: s.display();
    	            break;
       }
     }while(ch<6);
    	 return 0;
}
