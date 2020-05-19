int majorityElement(vector<int>& nums) {
    int count=0;
    map<int, int> m;
    vector<int>:: iterator it;
    for(it = nums.begin(); it != nums.end(); it++){
        m[*it]++;
    }
    int l = nums.size()/2;
    map<int,int> ::iterator mm;
    for (mm = m.begin(); mm!= m.end(); mm++){
        if(mm->second>l)
        {
            count= mm->first;
            break;
        }
    }
    return count;
        
    }
