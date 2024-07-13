#include<iostream>
using namespace std;

int oct_to_dec(int num){
	int ans =0;
	int x = 1;
	while(num>0){
		int last = num % 10;
		ans = ans + x*last;
		x = x * 8;
		num=num/10;
		
	}
	return ans ;
}


int main(){
	int octal_value;
	cout<<"Enter octal_value : ";
	cin>>octal_value;
	cout<<oct_to_dec(octal_value);
	
}
