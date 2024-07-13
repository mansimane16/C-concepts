#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	
	for(int i =2;i<num;i++){
		if(num%i==0){
			cout<<"NUMBER IS NOT PRIME";
			break;
		}
		else{
			cout<<"NUMBER IS PRIME";
			break;
		}
	}
	
	return 0;
}
