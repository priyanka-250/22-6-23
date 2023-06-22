#include<iostream>
#include<string.h>
using namespace std;

class house{
	public:
		int h_no;
		char h_name[100];
		int room_no;
		char h_address[100];
};

     int main()
     {
     	house h1;
     	cout<<"enter house no=";
     	cin>>h1.h_no;
     	cout<<"enter house name=";
     	cin>>h1.h_name;
     	cout<<"enter house room no=";
     	cin>>h1.room_no;
     	cout<<"enter house address=";
     	cin>>h1.h_address;
     	
     	
     	cout<<"house no="<<h1.h_no<<endl<<"house name="<<h1.h_name<<endl<<"house room size="<<h1.room_no<<endl<<"house address="<<h1.h_address<<endl;
     	return 0;
	 }
