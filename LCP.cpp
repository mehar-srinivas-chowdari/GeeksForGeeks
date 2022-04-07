class Solution{
public:
    string LCP(string ar[], int n)
    {
        string s="";
        bool flag=true;
        for(int i=0;i<ar[0].size() and flag ;i++) {
            char x=ar[0][i];
            for(int j=0;j<n and flag ;j++) if(ar[j][i]!=x) flag=false;
            if(flag) s+=x;
        }
        if(s=="") return "-1";
        return s;
    }
};
