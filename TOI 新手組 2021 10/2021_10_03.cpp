#include<iostream>
using namespace std;

int main(){
	int N,M,D;
	cin>>N>>M>>D;
	while(D>0){
		if(D%M==0){
			cout<<"YES";
			return 0;
		}
		D=D-N;
	}
	cout<<"NO";
}
