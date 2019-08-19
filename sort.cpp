//============================================================================
// Name        : sort.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T>
class vector
{   int i;
public:
vector()
{ int a;
  cout<<"\nWELCOME !!!\n";
  cout<<"\nEnter size of vector: \n";
  cin>>a;
  size=a;
  v= new T[size];
  for(i=0; i< size; i++)
 {v[i]=0;}
}
	T *v;
	int size,a;
  public:
	void create();
	void bubbleSort();
	void display();
};


template <class T>
void vector<T>::create()
{
	cout<<"\nEnter values for vector:\n";
	for(i=0; i< size; i++)
    {
	  cin>>v[i];
    }}

template <class T>
void vector <T>::bubbleSort()
{
   for(int i=0; i<size-1; i++){
			for(int j=size-1; i<j; j--){
				if(v[j]<v[j-1]){
					T temp= v[j];
					v[j]= v[j-1];
					v[j-1]= temp;
				}
			}
		}}


	template <class T>
	void vector<T>::display()
	{
	    cout<<"\nChanged vector values after all above operations are performed is :\n"<<"(";
	    for(i=0; i< size; i++)
	        {
	          cout<<v[i]<<", ";
	         }
	    cout<<")";
	}


	int main(){
		vector <int> V1;
		vector <float> V2;
		vector <char> V3;
		int v;
		do
		{
			     cout<<"\n1. Int";
		    	 cout<<"\n2. Float";
		    	 cout<<"\n3. Character";
		    	 cin>>v;
		    	 switch(v)
		    	 {
		    	 case 1:
		    		 V1.create();
		        V1.bubbleSort();
		        V1.display();
		        break;


		    	 case 2:
		    		 V2.create();
              V2.bubbleSort();
	    	  V2.display();
	    	  break;


		    	 case 3:
		    		 V3.create();
	    	  V3.bubbleSort();
	          V3.display();
	          break;
		    	 }} while(v<4);
		    	 return 0;
	}

