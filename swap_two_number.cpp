#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"a = ";
	cin>>a;
	
	cout<<"b = ";
	cin>>b;
	cout<<endl;
	
	c=b;
	b=a;
	a=c;
	cout<<"After Swapping"<<endl;
	
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b;
	return 0;
}