#include<iostream>
using namespace std;

int main(){
	int n,e=0,save=1;
	cin>>n;
	int t[n];
	for(int a=0;a<n;a++){
		cin>>t[a];
	}
	for(int a=0;a<n;a++){
		if(save>t[a]){
			e=e+(save-t[a])*2;
			save=t[a];
		}
		else{
			e=e+(t[a]-save)*3;
			save=t[a];
		}
	}
	cout<<e;
}
