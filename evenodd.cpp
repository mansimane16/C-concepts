#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	
	if(num%2 == 0){
		cout<<"Given number is even";
	}
	else{
		cout<<"Given number is odd";
	}
	
	return 0;
}
