#include <iostream>
#include <map>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n>0){
		string s;
		cin>>s;
		int p=0, t=0;
		map<char, int> m;
		for(int i=0; i<s.length();i++){
			m[s[i]]++;
			if(s[i]=='P') p=i;
			if(s[i]=='T') t=i;
		}
		if(m['P']==1 && m['T']==1 && t-p!=1 && m.size()==3 && p*(t-p-1)==s.length()-t-1){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
		n--;
	}
	return 0;
}
