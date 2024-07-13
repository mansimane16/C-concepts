#include<iostream>
#include<math.h>
using namespace std;

bool prime(int num){
	for(int i =2 ;i<num; i++ ){
		if(num % i ==0){
			return 0 ;
		}
		}
		
		return 1;
	}


int main(){
	int num1,num2;
	cout<<"Enter the range : ";
	cin>>num1>>num2;
	
	for(int i = num1 ; i<=num2 ;i++){
		if(prime(i)){
			cout<<i<<endl;
		}
	}
	
	return 0;
}
