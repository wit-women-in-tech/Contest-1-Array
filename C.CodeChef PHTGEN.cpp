#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p,k,t;
	cin>>t;
	      while(t--){
           cin>>n>>p>>k;
           int s[n] ;
            for (int i = 0; i < n; i++) {
                cin>>s[i];}
            sort(s,s+n);
            int r= n%p;
            if(r>k||p>n){
                cout<<"NO"<<endl;
            }else{
            	int x=0;
				for(int i=p-1;i<n;i+=p)
				if(s[i]==s[i+1]){
				    if(n-i-1>k){
				    cout<<"NO"<<endl;
				    x=1;
					break;    
				    }
				}
				if(x==0)
				cout<<"YES"<<endl;	
            }
			}
			return 0;
	}