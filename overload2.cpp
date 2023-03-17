/*Raising a number ‘N’ to the power ‘P’ is the same as multiplying N by itself P times. Write
a function called power() that takes N (double) and P (int) as input, and returns the result
N*P as a double value. Use a default argument of 2 for P, so that if this argument is
omitted, the number N will be squared. Overload power() function, to work with int, long,
and float. Overload the power() function for char datatype also, which should print P times
the given character N. Write the main() program to exercise these overloaded functions
with all argument types.*/
#include<iostream>
using namespace std;

int power(double N,int P = 2){
	if(P == 2)
		cout<<N*N;
	else
		cout<<N*P;
}
int power(float N,int P = 2){
	if(P == 2)
		cout<<N*2;
	else
		cout<<N*P;
}
int power(long N,int P = 2){
	if(P == 2)
		cout<<N*2;
	else
		cout<<N*P;
}
int power(char c,int P = 2){
	if(P == 2)
		cout<<c*2;
	else
		cout<<c*P;
}
int main(){
	double N ;
	int P = 0;
	long a;
	float b = 0.0;
	char c;
	cout<<"enter the char ";
	cin>>c; 
	power(c,P);
	cout<<"enter exponent ";
	cin>>P;
	cout<<"enter the float no ";
	cin>>b;
	power(b,P);
	cout<<"enter the double no ";
	cin>>N;
	power(N,P);
	cout<<"enter the long no ";
	cin>>a;
	power(a,P);
	
}