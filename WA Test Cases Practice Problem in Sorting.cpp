#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        string v;
        cin>>v;
        int ans = 101;
        for (int i = 0; i < n; i++) {
            if (v[i] == '0') {
                ans = min(ans, s[i]);
            }
        }
        cout << ans << endl;
    }

}

