class Solution {
public:
    bool isSubsequence(string s, string t) {
       int k;
       int j=0;
       int c=0;
       for(int i=0;i<t.size();i++){
           if(s[j]==t[i]){
               j++;
               c++;
           }
           if(j>s.size()-1&&c!=s.size())
           return false;
       }
       if(c==s.size())
       return true;
       return false;
    }
};