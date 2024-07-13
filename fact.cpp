#include<iostream>
using namespace std;

int fact(int num ){
	if(num<=1){
		return 1;
	}
	else{
			return num * fact(num-1);
	}
	
	}
int main(){
	int n;
	cout<<"Enter two numbers : ";
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
	
}
