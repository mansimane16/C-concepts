#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	cout<<"Enter num1 and num2 : ";
	cin>>num1>>num2;
	
	for(int a = num1 ; a<=num2 ; a++ ){
		int i ;
		for( i = 2;i<num2;i++){
			if(a%i==0){
				break;
				
			}
			
		}
		if(a==i){
			cout<<a<<endl;
			
		}
		
	}
	
	return 0;
}
