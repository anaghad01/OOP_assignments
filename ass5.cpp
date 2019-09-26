
#include <iostream>
using namespace std;

template <class T>
class vector
{
	T *v;
	int size,a;
  public:
	int i;
	vector()
    { int a;
      cout<<"\nWELCOME !!!\n";
      cout<<"\nEnter size of vector: \n";
      cin>>a;
      size=a;
      v= new T[size];
      for(int i=0; i< size; i++)
     {v[i]=0;}
    }
	void create();
	void modify();
	void multiply();
	void bubbleSort();
	void display();
};
//**********************************************************************************************************
template <class T>
void vector<T>::create()
{   cout<<"\nEnter values for vector:\n";
	for( i=0; i< size; i++)
    {
	  cin>>v[i];
    }
	/*cout<<"\nThe entered values for vector are: \n"<<"(";
	for( i=0; i< size; i++)
	    {
	      cout<<v[i]<<", ";
	     }
	cout<<")";*/
}
//**********************************************************************************************************
/*template <class T>
void vector<T>::modify()
{   int p,q;
	cout<<"\nEnter the value to be changed :\n";
    cin>>p;
    cout<<"\nEnter your desired value:\n";
    cin>>q;
    for( i=0; i< size; i++)
    {
    	if(v[i]==p)
        {v[i]=q;}
    }
    cout<<"\nChanged vector values are:\n"<<"(";
    for( i=0; i< size; i++)
    {
      cout<<v[i]<<", ";
    }
    cout<<")";
}*/
//************************************************************************************************************
/*template <class T>
void vector<T>::multiply()
{   int k;
	cout<<"\nEnter the multiplier :\n";
    cin>>k;
    for(i=0; i< size; i++)
    {
    	v[i]= k*v[i];
    }
    cout<<"\nChanged vector values are:\n"<<"(";
    for( i=0; i< size; i++)
        {
          cout<<v[i]<<", ";
         }
    cout<<")";
}*/
//***********************************************************************************************************
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

//**********************************************************************************************************
template <class T>
void vector<T>::display()
{
    cout<<"\nChanged vector values after all above operations are performed is :\n"<<"(";
    for( i=0; i< size; i++)
        {
          cout<<v[i]<<", ";
         }
    cout<<")";
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
	vector <int> V1;
	vector <float> V2;
	vector <char> V3;
	 int ch, v;
	     cout<<"1. Int";
    	 cout<<"2. Float";
    	 cout<<"3. String";
    	 cin>>v;
    	 switch(v)
    	 {
    	    case 1:{
                     cout<<"\n1. Create";
	                 //cout<<"\n2. Modify";
	                 //cout<<"\n3. Multiply";
                     cout<<"\n4. Bubble Sort";
	                 cout<<"\n5. Display\n";
    	             cin>>ch;
	                  switch(ch)
                        {
	                        case 1:{ V1.create(); break;}
                            //case 2:{ V1.modify();break;}
                            //case 3: { V1.multiply();  break;}
	                        case 4:{V1.bubbleSort(); break;}
	                        case 5:{  V1.display(); break;}
                        }while(ch<6);break;
	              }

    	 case 2:{
    		         cout<<"\n1. Create";
	 	             //cout<<"\n2. Modify";
    		 	     //cout<<"\n3. Multiply";
    		         cout<<"\n4. Bubble Sort";
    		 	     cout<<"\n5. Display\n";
    		     	 cin>>ch;
    		 	     switch(ch)
    		         {
    		 	        case 1:{ V2.create(); break;}
    		            //case 2:{ V2.modify();break;}
    		            //case 3: { V2.multiply();  break;}
    		 	        case 4:{V2.bubbleSort(); break;}
    		 	        case 5:{ V2.display(); break;}
    		         }while(ch<6);break;
    	 	   }

    	 case 3:{
    		           cout<<"\n1. Create";
    		 	       //cout<<"\n2. Modify";
    		 	       //cout<<"\n3. Multiply";
    		 	       cout<<"\n4. Bubble Sort";
    		 	       cout<<"\n5. Display\n";
    		     	   cin>>ch;
    		 	       switch(ch)
    		           {
    		 	          case 1:{ V3.create(); break;}
    		              //case 2:{ V3.modify();break;}
    		              //case 3: { V3.multiply();  break;}
    		 	          case 4:{V3.bubbleSort(); break;}
    		 	          case 5:{  V3.display(); break;}
    		           }while(ch<6);break;
    	        }
    	 }while(v<=3);return 0;
}
