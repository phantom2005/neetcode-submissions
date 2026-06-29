class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
    int i=0,j=0;
int  maxcnt=-1;
int cnt=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
              maxcnt=max(maxcnt,cnt);
        }
        else{
            cnt=0;
        }
        maxcnt=max(maxcnt,cnt);
    }
return maxcnt;
    }
};