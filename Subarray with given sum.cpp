class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        for(int i=1;i<n;i++) arr[i]=arr[i-1]+arr[i];
        if(arr[0]==s) return {1,1};
        int i,j,x=0;
        for(i=1,j=0;i<n;)
        {
            if(arr[i]-x == s) return {j+1,i+1};
            if(arr[i]-x > s) x=arr[j++];
            else i++;
        }
        return {-1};
    }
};
