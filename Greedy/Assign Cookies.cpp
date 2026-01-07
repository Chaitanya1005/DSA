class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int r = 0; 
        int l = 0; 
        while (r < g.size() && l < s.size()) {
            if (s[l] >= g[r]) r++;  
            l++;
        }
        return r;
    }
};