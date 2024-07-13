#include<iostream>
using namespace std;



int fact(int num){
	if(num ==0 || num == 1){
		return 1;
	}
	else{
		return num * fact(num-1);
	}
}

int combi(int n , int r ){
	int value = fact(n)/(fact(n-r) * fact(r));
	
	return value;
}

int main(){
	int a, b;
	cout<<"Enter value of n and r : "<<endl;
	cin>>a>>b;
	
	cout<<combi(a,b);
}

