#include <iostream>
 
using namespace std;
 
int main(){
	
	int n,h,a,s=0;
	cin>>n>>h;
	
	for(int i = 0; i<n; i++){
		cin>>a;
		if(a > h){
			s = s+2;
		}else{
			s++;
		}
	}
	cout<<s<<endl;
}
