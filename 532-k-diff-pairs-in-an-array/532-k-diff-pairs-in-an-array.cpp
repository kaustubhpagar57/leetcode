class Solution {
public:
    
    int binarySearch(int left, int right, int key, vector<int>& nums){
    
        while(right>=left){
            int mid = (right + left)/2;
            if(nums[mid] == key)
                return mid;
            else if(key > nums[mid])
                left = mid + 1;
            else
                right = mid - 1;
        }    
        
        return -1;        
    }
    
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int,int>> pairs;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int loc = binarySearch(i+1,n-1,nums[i]+k,nums);
            if(loc == -1)
                continue;
            else{
                pair<int, int> p;
                p = make_pair(nums[i], nums[i]+k);
                pairs.insert(p);
            }
        }
        return pairs.size();
    }
};