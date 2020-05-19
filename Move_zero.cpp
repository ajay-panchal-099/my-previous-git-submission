void moveZeroes(vector<int>& nums) {
    vector<int> zero;
    int l = nums.size();
    vector<int>::iterator it;
    for( it = nums.begin(); it!= nums.end(); it++){
        if(*it == 0)
        {nums.erase(it);it--;}
    }
    int nl= nums.size();
    while(nl<=l){
        nums.push_back(0);nl++;
    }

}
