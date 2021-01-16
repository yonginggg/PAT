#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[3];
	arr[2] = n%10;
	n/=10;
	arr[1] = n%10;
	n/=10;
	arr[0] = n;
	for(int i=0; i<arr[0]; i++){
		cout<<"B";
	}
	for(int i=0; i<arr[1]; i++){
		cout<<"S";
	}
	for(int i=0; i<arr[2]; i++){
		cout<<i+1;
	}
	return 0;
}
