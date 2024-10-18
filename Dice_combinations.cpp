#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int mod=1e9+7;
    vector<int>dp(6,0);
    dp[0]=1;
    
    for(int i=1;i<=n;i++){
        
        int temp=0;
        for(int k=0; k<6 ;k++){
            temp=(temp+dp[k])%mod;
        }
        dp[i%6]=temp;
        
    }
    
    cout<<dp[n%6]<<endl;

}

