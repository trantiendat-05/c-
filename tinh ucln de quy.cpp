#include<iostream>
using namespace std;
int ucln(int a,int b){
	if(a==b){
		return a;
	}else if(a>b){
		return ucln(a-b,b);
	}else{
		return ucln(a,b-a);
	}
}
main(){
	int a,b;
	cin>>a>>b;
	cout<<ucln(a,b);
}
