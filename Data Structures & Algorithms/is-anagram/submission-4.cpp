class Solution {
public:
    bool isAnagram(string s, string t) {
if (s.length()!=t.length()){
    return false;

}
multiset<char>sr;
multiset<char>tr;
for(char a :s){
    sr.insert(a);
}
for(char b :t){
    tr.insert(b);
}
if(sr==tr){
    return true;
}
return false;
    }
};
