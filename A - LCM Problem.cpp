#include<bits/stdc++.h>
#define ll  long long
#define pb  push_back
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
using namespace std;
int main(){
    
    fastread();
    
    
    ll l,r,t;
    cin>>t;
    while(t--){
        ll x = 0,y = 0;
        cin>>l>>r;
        if(l*2 <= r){
            x = l;
            y = l * 2;
        }
        else{
            x = -1;
            y = -1;
        }
        cout<<x<<" "<<y<<endl;
    }
 
    return 0;
}
