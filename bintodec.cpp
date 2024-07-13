#include<iostream>
using namespace std;

int dec(int bit ){
	int ans = 0;
	int x=1;
	while(bit>0){
		int lastdigit = bit % 10;
		ans = ans + x*lastdigit;
		x= x*2;
		bit = bit/10;
	}
	
	return ans ;
	
	
}


int main(){
	int bit ;
	cout<<"Enter binary value : ";
	cin>>bit;
	cout<<dec(bit);
	
}
