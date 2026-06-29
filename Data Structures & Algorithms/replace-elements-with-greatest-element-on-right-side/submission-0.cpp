class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      int n=arr.size();
       if(n<1){
        return arr;
       } 

       for(int i=0;i<n-1;i++){
         auto start=arr.begin()+i+1;
         auto end=arr.end();
      arr[i]=*std:: max_element(start,end);
     
       }
       arr[n-1]=-1;
       return arr;
    }
};