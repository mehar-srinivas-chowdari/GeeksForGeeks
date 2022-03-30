long long int calculate(int a[], int n)
{
    // Complete the function
    unordered_map<int,int>ma;
    for(int i=0;i<n;i++) ma[a[i]]++;
    int ans=0;
    for(auto it:ma)
    {
        ans+=((it.second)*(it.second-1))/2;
    }
    return ans;
}
