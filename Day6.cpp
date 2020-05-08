class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int n = nums.size();
        int ans, maxCount=0;
        for(int i=0;i<n;i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]]=1;
            }
            else{
                m[nums[i]]++;
            }
            if(m[nums[i]]>maxCount){
                ans = nums[i];
                maxCount = m[nums[i]];
            }
        }
        return ans;
    }
};
