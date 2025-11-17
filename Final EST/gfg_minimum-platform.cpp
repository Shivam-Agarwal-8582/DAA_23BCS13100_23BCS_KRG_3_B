class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int n= arr.size();
        int m= dep.size();
        
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int i=0;
        int j=0;
        int maxcount=0;
        int cnt=0;
        int maxi=0;
        while(i<n && j< m){
            if(arr[i]<=dep[j]){
                cnt++;
                i++;
            }
            else {
                cnt--;
                j++;
            }
            maxcount= max(maxcount, cnt);
        }
        return maxcount;
        
    }
};
