#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number :";
	cin>>num;
	if(num > 10){
		cout<<"Given number is more than 10";
	}else if(num < 10){
		cout<<"Given number is less than 10";
	}else{
		cout<<"number is equal to 10";
	}
	return 0;
}
