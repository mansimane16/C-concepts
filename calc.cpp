#include<iostream>
using namespace std;

int main(){
	int num1 , num2,choice;
	
	cout<<"Enter your choice : \n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Modulo\n";
	cin>>choice;
	cout<<"Enter num1 and num2 : ";
	cin>>num1>>num2;

	switch(choice){
		case 1:
			cout<<"Addition is :"<<num1+num2<<endl;
			break;
		case 2:
			cout<<"Subtraction is :"<<num1-num2<<endl;
			break;
		case 3:
			cout<<"Multiplication is :"<<num1*num2<<endl;
			break;
		case 4:
			cout<<"Division is :"<<num1/num2<<endl;
			break;
		case 5:
			cout<<"Modulo is :"<<num1%num2<<endl;
			break;
		default:
			cout<<"PLEASE ENTER VALID CHOICE...";
			break;	
	}
	
	return 0;
	
}

