class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int> v(150,1000);
        for(int i=0;i<s.size();i++){
            int index = (int)s[i];
            if(v[index]==1000)v[index]=s[i]-t[i];
            else if(v[index]!=(s[i]-t[i]))return false;
        }
        for(int i=0;i<v.size();i++){
            v[i]=1000;
        }
        for(int i=0;i<s.size();i++){
            int index = (int)t[i];
            if(v[index]==1000)v[index]=t[i]-s[i];
            else if(v[index]!=(t[i]-s[i]))return false;
        }

        return true;
        
    }
};