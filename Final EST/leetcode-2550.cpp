class Solution {
public:
    long long mod=1e9+7;

    int solve(int n){
        if(n==0) return 1;
        long long result=solve(n/2);
        if(n%2) return (result*result*2)%mod;
    return (result*result)%mod;
    }

    int monkeyMove(int n){        
        return (solve(n)-2+mod)%mod;
    }
};