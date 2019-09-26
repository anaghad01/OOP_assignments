//============================================================================
// Name        : Binary.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
using namespace std;

stack <int> read()
{
	stack <int> S;
	int x, n, i;
	cout<<"Enter no. of bits:";
	cin>>n;
	cout<<"Enter binary number:";
	for(i=0; i<n; i++)
	{
		cin>>x;
		S.push(x);
	}
	return S;
}

void display(stack <int> &S)
{
	cout<<"  ";
	while(!S.empty())
	{
		cout<<S.top()<<"  ";
		S.pop();
	}
}

stack <int> add(stack <int> &S1, stack <int> &S2)
{
	stack <int> S;
	int sum, carry=0, b1,b2;
	while(!S1.empty()||!S2.empty())
	{
		b1=b2=0;
		if(!S1.empty())
		{
			b1=S1.top();
			S1.pop();
		}
		if(!S2.empty())
		{
			b2=S2.top();
			S2.pop();
		}
		sum=(b1+b2+carry)%2;
		carry=(b1+b2+carry)/2;
		S.push(sum);
	}
	if(carry==1)
	S.push(1);
	return S;
}


int main() {
	stack<int> S1,S2,S3;
	int ch;
	cout<<"MENU:\n";
	cout<<"1. Read  First number:\n";
    cout<<"2. Read Second number:\n";
    cout<<"3. Display addition:\n ";
    cout<<"4. Exit\n";
    do
    {
    	cout<<"Enter your choice:\n";
    	cin>>ch;
    	switch(ch)
    	{
    	case 1:
    		S1=read();
    		break;
    	case 2:
    		S2=read();
    		break;
    	case 3:
    		cout<<"The result is: ";
    		S3=add(S1,S2);
    		display(S3);
    		break;
    	}
    }while(ch!=4);
    return 0;
}
