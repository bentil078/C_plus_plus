#include<iostream>
using namespace std;


/* my simple calculator*/


int main()
{
double x;
double y;
double z;
double option;

cout<<"enter 1 for addition: "<<endl;
cout<<"enter 2 for subtraction: "<<endl;
cout<<"enter 3 for multiplication: "<<endl;
cout<<"enter 4 for division"<<endl;


cout<<"enter option: "<<endl;
cin>>option;

if(option == 1){
	cout<<"enter first number: "<<endl;
	cin>>x;
	
	cout<<"enter second number: "<<endl;
	cin>>y;
	
	z = x + y;
	cout<<"the sum is: "<<z<<endl;}

else if(option ==2){
	cout<<"enter first number: "<<endl;
	cin>>x;
	
	cout<<"enter second number: "<<endl;
	cin>>y;
	
	z = x - y;
	cout<<"the difference is: "<<z<<endl;
	}

else if(option == 3){
	cout<<"enter first number: "<<endl;
	cin>>x;
	
	cout<<"enter second number: "<<endl;
	cin>>y;
	
	z = x * y;
	cout<<"the product is: "<<z<<endl;
	}
	
else if(option == 4){
	cout<<"enter first number: "<<endl;
	cin>>x;
	
	cout<<"enter second number: "<<endl;
	cin>>y;
	
	z = x / y;
	cout<<"the ratio is: "<<z<<endl;
	}
	
	
else{
	cout<<"wrong option. Please try again";}


return 0;
}
