#include<iostream>
using namespace std;

int main(){
	int n ; 
	cout<<"Enter num : ";
	cin>>n;
	int armnum =0 ;
	int originalnum = n;
	while(n>0){
		int lastdigit = n % 10;
		int digit = lastdigit*lastdigit*lastdigit;
		n=n/10;
		armnum += digit ;
	}
	cout<<armnum<<endl;
	cout<<originalnum<<endl;
	if(armnum == originalnum ){
		cout<<"armstrong";
		
	}
	else{
		cout<<"not armstrong";
	}
}
