class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // vector<int>::iterator myiterator;
        vector<int> result;
        int remaining=0;
        
        //for(myiterator.begin();myiterator.end();myiterator++){
          for(int i=0;i<nums.size();i++){
              for(int j=0;j<nums.size();j++){
              //int j=0;
             if(nums[i]<target){
             
                 remaining=target-nums[i];
                 if(nums[i]!=nums[j]){
                 remaining=remaining-nums[j];
                     cout<<remaining;
                 if(remaining==0){
                     
                     result.push_back(i);
                    // result.push_back(j);
                 }
                 }
               //  j++;
                  //cout<<nums[i];
              }
              }
              
          }  
          return result;  
        }
        
    
};