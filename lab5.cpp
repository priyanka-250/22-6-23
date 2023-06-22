#include<iostream>
#include<string.h>
using namespace std;


class student{

             private:
             int id;
			 char name[100];
			 int age;
			 };
			 
	int main()
	{
		student s;
		cout<<"enter this id=";
		cin>>s.id;
		cout<<"enter this name=";
		cin>>s.name;
		cout<<"enter this age=";
		cin>>s.age;
		
		cout<<"id="<<s.id<<endl;
		cout<<"name="<<s.name<<endl;
		cout<<"age="<<s.age<<endl;
		
		return 0;
			 }	
