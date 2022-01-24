#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, l;
        cin >> n >> l;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        int ans = 1;
        int index = a[0];
         
        sort(a, a+n);
        
        int i = 0, j = 0;
        while(j < n){
            while(a[j]-a[i] <= l){
                j++;
                if(j >= n)  break;
            }
            
            if(j-i >= ans){
                ans = j-i;
                index = a[i];
            }
            
            i++;
        }
        
        cout << ans << " " << index << endl;
        
    }
}