class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>dp;
       dp.push_back(a[0]);
       for(int i=1;i<n;i++)
       {
           if(a[i]>dp[dp.size()-1])
           {
               dp.push_back(a[i]);
               
           }
           else
           {
               auto it =lower_bound(dp.begin(),dp.end(),a[i]);
               int ind=distance(dp.begin(),it);
               dp[ind]=a[i];
               
           }
           
       }
       return dp.size();
    }
};
