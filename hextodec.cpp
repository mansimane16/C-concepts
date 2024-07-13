#include<iostream>
using namespace std;

int hex_to_dec(string num){
	int ans =0;
	int x = 1;
	int s = num.size();
	
	for(int i = s-1 ; i>=0 ; i--){
		if(num[i] >= '0' && num[i]<= '9'){
			ans = ans + x*(num[i] - '0');
		}
		else if(num[i] >= 'A' && num[i]<= 'F'){
			ans = ans +x*(num[i]-'A'+10);
		}
		
		x=x*16;
	}

	return ans ;
	
}


int main(){
	string hex_value;
	cout<<"Enter hex_value : ";
	cin>>hex_value;
	cout<<hex_to_dec(hex_value);
	
}
