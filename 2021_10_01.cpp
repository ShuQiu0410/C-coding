#include<iostream>
using namespace std;

int main(){
	int a,v,t=0;
	cin>>a>>v;
	while(v>0){
		v=v-a;
		t++;
	}
	cout<<t;
}
