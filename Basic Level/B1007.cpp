#include <iostream>
using namespace std;
bool isprime(int n){
	for(int i=2; i*i<=n ; i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n, count=0;
	cin>>n;
	for(int i=5; i<=n; i++){
		if(isprime(i-2)&&isprime(i)) count++;
	}
	cout<<count;
	return 0;
}
