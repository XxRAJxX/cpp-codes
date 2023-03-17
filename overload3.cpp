/*Program to compute the volume of a cylinder using a function compute(), with default
values - 1 for radius of the base of the cylinder and 2 for height of the cylinder. Calculate
and return the volume of the cylinder, by calling the function from the main(), with and
without arguments.*/
/*
//with args
#include<iostream>
using namespace std;
float compute(float rad = -1.0, float h = 2.0){
	float volume;
	volume = 3.14*rad*rad*h;
	return volume;
}
int main(){
	float rad;
	float h;
	float vol;
	cout<<"radius ";
	cin>>rad;
	cout<<"height ";
	cin>>h;
	vol = compute(rad,h);
	cout<<"volume of cylinder is "<<vol;
}*/
//without args
#include<iostream>
using namespace std;
float rad;
float h;
float compute(){
	float volume;
	if(rad==0||h==0)
		rad = -1.0;
		h = 2.0;
	volume = 3.14*rad*rad*h;
	return volume;
}
int main(){
	cout<<"radius ";
	cin>>rad;
	cout<<"height ";
	cin>>h;
	float vol;
	vol = rad*compute();
	cout<<"volume of cylinder is "<<vol;
}
