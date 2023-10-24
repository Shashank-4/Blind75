//https://leetcode.com/problems/contains-duplicate/

//BRUTE FORCE
// TC: O(N^2) & SC: O(1)
bool containsDuplicate(vector<int>& nums) {
    int nums_size = nums.size();
    //check if ith element have a duplicate with the rest of the elements(jth element)
    for(int i=0;i<nums_size-1;i++){
        for(int j=i+1;j<nums_size;j++){
            //return true if there is a duplicate
            if(nums[i] == nums[j]){
                return true;
            }
        }
    }
    return false;
}

//Using UNORDERED_SET 
// TC: O(N) & SC: O(N)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> unqEle(nums.begin(), nums.end());
        if(unqEle.size() == nums.size()){
            return false;
        }
        return true;
    }
};
