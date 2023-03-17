//Write a program to find the largest of the three numbers using inline functions
#include<iostream>
using namespace std;
int inline g(int ,int ,int );
int main(){
	int n1,n2,n3,greatest;
	cout<<"enter 3 nos";
	cin>>n1;
	cin>>n2;
	cin>>n3;
	greatest = g(n1,n2,n3);
	cout<<"greatest number is "<<greatest;
}
int inline g(int n1, int n2, int n3){
	if(n1>n2&&n1>n3)
		return n1;
	else if(n2>n1&&n2>n3)
		return n2;
	else
		return n3;
}