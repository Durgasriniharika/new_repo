#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    /*
       1. state--> dp[i] minimum coins required to form ith sum;
       2. transition--> dp[i]=min(dp[i], (dp[i]-coins[j])+1)
       3. base case--> dp[0]=0;
       4. final answer--> dp[sum];
    */
    vector<int>dp(sum+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=sum;i++){
       for(int j=0;j<n;j++){
          if((i-coins[j])>=0 && dp[i-coins[j]]!=INT_MAX){
               dp[i]=min(dp[i],(dp[i-coins[j]])+1);
          }
       }
    }
    if(dp[sum]==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<dp[sum]<<endl;   
    }
    
}