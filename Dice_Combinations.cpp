#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 10;
const int mod = 1e9 + 7;

// recursion
int solve(int left,vector<ll>&dp){
    if(left==0) return 1;
    ll ans=0;
    if(dp[left]!=-1) return dp[left];
    for(int i=1;i<=6;++i){    
        if(left-i>=0){
            ans+=solve(left-i,dp);
            ans=ans%mod;
        }
    }
    return dp[left]=ans;
}
int main(){
    ll n;
    cin>>n;
    vector<ll>dp(n+1,-1);
    cout<<solve(n,dp);

}




// Tabular Solution
// int main()
// {
//     ll n;
//     cin >> n;
//     vector<ll> dp(n + 1, 0);
//     dp[0] = 1;
//     for (int i = 1; i <= n + 1; ++i)
//     {
//         for (int j = 1; j <= 6; ++j)
//         {
//             if (j > i)
//                 break;
//             dp[i] = (dp[i] + dp[i - j])%mod;
//         }
//     }
//     cout << dp[n];
// }



