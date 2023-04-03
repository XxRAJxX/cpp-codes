//code to creqte class with 4 data members, 2 member functions & constructors
#include<iostream>
#include<cstring>
using namespace std;
class Patient{
private: 
	int PatientId, Age;
	char Name[50], Disease[50];
public:
 	Patient(){
		Age = PatientId = 0;
	}
	Patient(int P, int A, char N[50], char D[50]){
		PatientId = P;
		Age = A;
		strcpy(N,Name);
		strcpy(D,Disease);
	}
	void displayData(){
		cout<<"Patient Id: "<<PatientId;
		cout<<"Age: "<<Age;
		cout<<"Name: "<<Name;
		cout<<"Disease: "<<Disease;
	}
	char* SearchPatient(){
		return Name;
	}
};
int main(){
	int P,A;
	char N[50], D[50], N2[50], N3[50];
	cout<<"enter patient Id: ";
	cin>>P;
	cout<<"enter age: ";
	cin>>A;
	cout<<"enter name: ";
	cin>>N;
	cout<<"enter disease: ";
	cin>>D;
	Patient P1(P,A,N,D);
	cout<<"enter patient name to be searched: ";
	cin>>N2;
	strcpy(P1.SearchPatient(), N3);
	if(strcmp(N3,N2) == 0){
		P1.displayData();	
	}
	else{
		cout<<"no such data found";
	}
}
