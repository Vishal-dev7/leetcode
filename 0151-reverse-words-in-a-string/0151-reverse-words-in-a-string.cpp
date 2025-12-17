class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n =s. size();
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++)
            {
                string word="";
                int count=0;
                
                while (i<n && s[i]!=' ')
                    {
                        word +=s[i];
                        count ++;
                        i++;
                    }
                  reverse(word.begin(),word.end());
                if(count>0)
                {
                    ans+=" "+word;
                }
            }
        return ans.substr(1);
    }
};