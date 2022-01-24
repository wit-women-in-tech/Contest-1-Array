#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n,k;
		string s;
		cin >> n >> k >> s;
		ll cnt = 0;
		for(ll i = 0; i < k-1; i++){
			if(s[i] == s[i+1])	cnt++;
		}
		ll ans = 0;
		
		for(int i = k; i < n; i++){
			ans += (k-cnt-1);
			if(s[i] != s[i-1])	ans++;
			if(s[i-k] == s[i-k+1])	cnt--;
			if(s[i] == s[i-1])	cnt++;
		}

		cout << ans << endl;
	}
}