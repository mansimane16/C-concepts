#include<iostream>
using namespace std;
bool check(int a,int b, int c){
	int y , z;
	int x = max(a,max(b,c));
	if(x==a){
		y=b;
		z=c;
	}else if(x==b){
		y=a;
		z=c;
	}else{
		y=b;
		z=a;
	}
	
	if(x*x == y*y + z*z){
		return 1;
	}
	else{
		return 0;
	}
	
}
int main(){
	int a, b, c;
	cout<<"Enter three numbers to check pythogorian triplet : ";
	cin>>a>>b>>c;
	
	if(check(a,b,c)){
		cout<<"Pythagorian triplets";
	}
	else{
		cout<<"not pythagorian triplets";
	}
}
