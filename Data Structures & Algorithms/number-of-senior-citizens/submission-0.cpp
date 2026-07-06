class Solution {
public:
    int countSeniors(vector<string>& details) {
       int count=0;
       for(int i=0;i<details.size();i++){
        string s=details[i];
    string agestr=s.substr(11,2);

    int age=stoi(agestr);
    if (age > 60) {
                count++;}
        }
return count;
    }
};