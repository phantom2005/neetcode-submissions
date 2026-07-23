class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int,int>um;
  for(int i=0;i<nums.size();i++){
   int rem=target-nums[i];
   if(um.contains(rem)>0){
    return {um[rem],i};
   }
   else{
    um[nums[i]]=i;
   }
  
    }
    return {};
    }
};


