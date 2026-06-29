class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        multiset<char>st1;
        for(char a:s){
            st1.insert(a);
        }
        multiset<char>st2;
        for(char a:t){
            st2.insert(a);
        }
return st1==st2;
      


    }
};
