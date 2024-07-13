#include<iostream>
using namespace std;

int main(){
	char choice;
	cout<<"Enter your choice : \n1)A\n2)B\n3)C\n4)D\n5)E\n";
	cin>>choice;
	
	switch(choice){
		case 'A':
			cout<<"Hello";
			break;
		case 'B':
			cout<<"Namaste";
			break;
		case 'C':
			cout<<"Hola";
			break;
		case 'D':
			cout<<"Salut";
			break;
		case 'E':
			cout<<"Ciao";
			break;
		default:
			cout<<"PLEASE ENTER VALID CHOICE...";
			break;	
	}
	
	return 0;
	
}

