//progarm to create class fruit with necessary data members and member functions.
#include<iostream>
#include<iomanip>
using namespace std;

class Fruit{
private:
	double Rate;
	char Shape[30], Taste[30];
public:
	char Colour[30], Name[30];
public:
	void get_rate(){
		cout<<"enter rate: ";
		cin>>Rate;
	}
	void get_data(void){
		cout<<"enter name: ";
		cin.getline(Name, 30);
		cout<<"enter colour: ";
		cin.getline(Colour, 30);
		cout<<"enter shape: ";
		cin.getline(Shape, 30);
		cout<<"enter taste: ";
		cin.getline(Taste, 30);
	}
	void put_data(void){
		cout<<"name: "<<Name<<"\n";
		cout<<"colour: "<<Colour;<<"\n"
		cout<<"shape: "<<Shape<<"\n";
		cout<<"taste: "<<Taste<<"\n";
		cout<<"rate: "<<Rate<<"\n";
	}
};

int main(){
 Fruit F1,F2;
	F1.get_data();
	F1.get_rate();
	F1.put_data();
 F2.get_data();
 F2.get_rate();
 F2.put_data();
}