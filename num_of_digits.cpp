class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for ( int i=0; i< nums.size(); i++){
            string s = to_string(nums[i]);
            int l = s.size();
            if(l%2==0)
                count++;
        }
        return count;
    }
};
