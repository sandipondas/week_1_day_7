class Solution{
    public:
    int search(string a,string s)
    {
        int n=s.size();
        int m=a.size();
        int l=0,r=0,count=0;
        vector<int>fa(26,0),fs(26,0);
        for(auto c:a)
        {
            fa[c-'a']++;
        }
        while(r<n)
        {
            fs[s[r]-'a']++;
            if((r-l+1)==m)
            {
                if(fs==fa)
                {
                    count++;
                }
                fs[s[l]-'a']-=1;
                l++;
            }
            r++;
        }
        return count;
    }
    
}
