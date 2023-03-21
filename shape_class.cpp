/*Create a class named Shape with a private data members – ShapeName(char array), NoOfDimensions(int), Side1(double),Side2(double),Side3(double) and Perimeter(double). Add the following member functions – a) getNoOfDimenstions() that takes the number of unique sides as input and updates the NoOfDimensions data member, b) computePerimeter() – computes the perimeter of the shape and
updates the data member, c) getName() – that takes the name of shape as input and updates the ShapeName and d) printData() – that prints all the details of the invoking object. Write a C++ program to implement and test the above.*/
#include<iostream>
#include<cstring>
using namespace std;

class Shape{
private:
	char ShapeName[50];
	int NoOfDimensions;
	double side1,side2,side3,perimeter;
public:
	void getNoOfDimensions(){
		cout<<"\n enter 0 for circle\n enter 1 for square\n enter 2 for rectangle\n enter 3 for triangle\n enter the no of dimensions: ";
		cin>>NoOfDimensions;
		if(NoOfDimensions == 0){
			cout<<"enter side1 value: ";
			cin>>side1;}
		else if(NoOfDimensions == 1){
			cout<<"enter side1 value: ";
			cin>>side1;}	
		else if(NoOfDimensions == 2){
			cout<<"enter side1 value: ";
			cin>>side1;
			cout<<"enter side2 value: ";
			cin>>side2;}
		else if(NoOfDimensions == 3){
			cout<<"enter side1 value: ";
			cin>>side1;
			cout<<"enter side2 value: ";
			cin>>side2;
			cout<<"enter side3 value: ";
			cin>>side3;}	
	}
	double computePerimeter(){
		if(NoOfDimensions == 0)
			perimeter = 2*3.14*side1;	
		else if(NoOfDimensions == 1)
			perimeter = side1*4;		
		else if(NoOfDimensions == 2)
			perimeter = 2*(side1 + side2);	
		else if(NoOfDimensions == 3)
			perimeter = side1+side2+side3;	
	}
	char[50] getName(char name[50]){
		cout<<"enter the shape name : ";
		cin>>ShapeName;
		return ShapeName[50];

	}	
	void printData(){
		if(NoOfDimensions == 0){
			cout<<"shape is circle ";
			cout<<"radius is: "<<side1;
			cout<<"circle perimeter: "<<computePerimeter();}
		else if(NoOfDimensions == 1){
			cout<<"shape is square ";
			cout<<"side is: "<<side1;
			cout<<"square perimeter: "<<computePerimeter();	}
		else if(NoOfDimensions == 2){
			cout<<"shape is rectangle: ";
			cout<<"side1 is: "<<side1;
			cout<<"side2 is: "<<side2;
			cout<<"rectangle perimeter: "<<computePerimeter();}
		else if(NoOfDimensions == 3){
			cout<<"shape is triangle: ";
			cout<<"side1 is: "<<side1;
			cout<<"side2 is: "<<side2;
			cout<<"side3 is: "<<side3;
			cout<<"triangle perimeter:  "<<computePerimeter();}	
		
	}
};
int main(){
	Shape S1;
	char name[50];
	cout<<"enter shape name for which the output needs to be printed: ";
	cin>>name;
	S1.getName();
	
}
