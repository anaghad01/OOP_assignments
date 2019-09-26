//============================================================================
// Name        : OOP.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <list>

class deque
{   int ele;
	list <int> l;
  public:
	void insert_beg()
	{
		cout<<"Enter element at the beginning:";
	    cin>>ele;
	    l.push_front(ele);
	}

	void insert_end()
	{
		cout<<"Enter element at the end:";
	    cin>>ele;
	    l.push_back(ele);
	}

	void delete_beg()
	{
		cout<<"Delete element at the beginning:";
	    cout<<l.front();
	    l.pop_front();
	}

	void delete_end()
	{
		cout<<"Delete element at the end:";
	    cout<<l.back();
	    l.pop_back();
	}

	void front()
	{
		cout<<"\n Element present at the front: "<<l.front();
    }

	void back()
	{
		cout<<"\n Element present at the back: "<<l.back();
	}

	void size()
	{
		cout<<"Size is :"<<l.size();
	}

	void display()
	{
	    cout<<"\n Dequeue:"<<"\n";
		list<int>::iterator i;
		for(i= l.begin(); i!= l.end();i++)
		cout<<*i<<"   \n";
	}
};

int main() {

	deque d;int ch;
	while(1){
	cout<<"\nEnter your choice:\n";
	cout<<"1. Enter element at the beginning\n";
	cout<<"2. Enter element at the end\n";
	cout<<"3. Delete element at the beginning\n";
	cout<<"4. Delete element at the end \n";
	cout<<"5. Element present at the front \n";
	cout<<"6. Element present at the back \n";
	cout<<"7. Size\n";
	cout<<"8. Display\n";
	cin >> ch;
	  switch(ch){
	    case 1:
		   d.insert_beg();
		   break;
	case 2:
		d.insert_end();
		break;
	case 3:
		d.delete_beg();
		break;
	case 4:
		d.delete_end();
		break;
	case 5:
		d.front();
		break;
	case 6:
		d.back();
		break;
	case 7:
		d.size();
		break;
	case 8:
		d.display();
		break;
	}}
	return 0;
}





































