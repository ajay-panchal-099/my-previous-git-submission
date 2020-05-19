 vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> x;
        set<int>s;
        vector<int>::iterator it;
        for(it = nums.begin(); it != nums.end(); it++){
            s.insert(*it);
        }
        set<int>::iterator si;
        si = s.begin();
        for(int i=1; i<=nums.size(); i++){
            if(i== (*si)){
                si++;
            }
            else{
                x.push_back(i);
            }
        }
        return x;
    }
