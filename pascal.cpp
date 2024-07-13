#include<iostream>
using namespace std;

int fact(int num ){
	if(num==0 ||num==1){
		return 1;
	}
	else {
		return num * fact(num-1);
	}
}

int comb(int n , int r){
	int value = fact(n)/(fact(n-r) * fact(r));
	return value;
}
int main(){
	int n ; 
	cout<<"Enter value of n : ";
	cin>>n;
	
	for(int i =0; i<n ; i++){
		for(int j = 0 ; j<=i ; j++){
			cout<<" "<<comb(i,j);
		}
		
		cout<<endl;
	}
}
