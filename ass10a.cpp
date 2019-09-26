//============================================================================
// Name        : ba.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

class queue {
	list <int> l;
  public:
	void insert()
	{
		int val;
		cin>>val;
	    l.push_back(val);
	}
	void del()
	{
		l.pop_front();
	}
    int front()
    {
    	return(l.front());
    }
    int back()
    {
    	return(l.back());
    }
    int size()
    {
    	return (l.size());
    }
    void display()
    {
    	list <int>::iterator i;
    	cout<<"Queue is:";
    	if(l.size()==0)
    		cout<<"EMPTY!!";
    	else
    	 {
    		for(i=l.begin(); i!=l.end(); i++)
    			cout<<*i<<"  ";
    	 }
    }
};

int main()
{queue s; int ch;
do{
	 cout<<"\n1.Insert\n"<<"2.Delete\n"<<"3.Front\n"<<"4.Back\n"<<"5.Size\n"<<"6.Display\n";
	 cin>>ch;
	 switch(ch)
	 {
	    case 1:cout<<"\nEnter element";
	          s.insert();
	          break;

	    case 2:s.del();
	           cout<<"\nRemoved element";
	           break;

	    case 3:cout<<"Front is:"<<s.front();
	           break;

	    case 4: cout<<"Back is:"<<s.back();
	            break;

	    case 5: cout<<"Size is:"<<s.size();
	            break;

	    case 6: s.display();
	            break;
  }
}while(ch<7);
	 return 0;
	}
