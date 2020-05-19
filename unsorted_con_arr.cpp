 int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v=nums;
        sort(v.begin(),v.end());
        int count=0;
        int x=0,y=0;
        for(int i=0; i<nums.size();i++ ){
            if(nums[i]!=v[i])
            {
                x=i;
                break;
            }
        }
        for(int i= nums.size()-1; i>=0; --i ){
            if(nums[i]!=v[i]){
                y=i;
                break;
            }
        }
        if(x>0 || y>0)
            return y-x+1;
        else
            return y-x;
    }
