#include <iostream>
#include <string> 
using namespace std;
int main(){
	int n;
	cin>>n;
	string maxname, maxnum, minname, minnum, name , num;
	int maxscore=-1, minscore=101, score;
	while(n>0){
		cin>>name>>num>>score;
		if(score>maxscore){
			maxscore = score;
			maxname = name;
			maxnum = num;
		}
		if(score<minscore){
			minscore = score;
			minname = name;
			minnum = num;
		}
		n--;
	}
	cout<<maxname<<" "<<maxnum<<endl;
	cout<<minname<<" "<<minnum;
	return 0;
}
