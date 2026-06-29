class Solution {
   public:
    bool isSubsequence(string s, string t) {
        int a = 0;
        int b = 0;

        while (b < t.length()) {
            if (s[a] == t[b]) {
                a++;
                b++;
            } else {
                b++;
            }

        }
        if(b==t.length() && a==s.length()){
            return true;

        }
        return false;
    }
};