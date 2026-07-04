class Solution {
public:
    bool isPalindrome(string s) {
        // if(s==" ") return true;""
        string a="";
        for(char t:s)
        {
            if(isalnum(t))
            {
a+=tolower(t);
            }
        }
        string c=a;
        reverse(c.begin(),c.end());
        // string org=s;
        // reverse(org.begin(),org.end());

  return c==a;
    }
};