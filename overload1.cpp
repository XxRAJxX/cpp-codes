//Write a program to find the absolute value of an integer, double and float value using function overloading.
#include<iostream>
using namespace std;
int fun1(int a){
	if(a<0)
		a = -a;
	cout<<a<<"\n";
}
int fun1(double a, float b){
	if(a<0.0)
		a = -a;
	cout<<a<<"\n";
	cout<<b;
}

int main(){
	fun1(-7);
	fun1(-8.8,9.222);
}