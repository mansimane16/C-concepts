#include<iostream>
using namespace std;

int main(){
	int rows;
	cout<<"Enter a number of rows :";
	cin>>rows;
	int count =0;
	
	for(int i = 1 ; i<=rows ; i++){
		for(int j =1; j<=i ; j++){
			count = count+1;
			cout<<" "<<count<<" ";
	
		
	}
	cout<<endl;
}
	
	return 0;
}
