//Write a program to calculate cube of a given variable using inline function and return the result by reference.
#include<iostream>
using namespace std;
int inline cube(int );
int main(){
	int n;
	cout<<"enter number for which cube is to be found";
	cin>>n;
	cout<<"cube of "<<n<<" is "<<cube(n);
}
int inline cube(int n){
	return n*n*n;
	}