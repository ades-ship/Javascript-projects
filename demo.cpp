#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    void increasearray(vector<int>& nums) {
        int n=nums.size();
        int fi=0; int temp=nums[0];
        for(int i=0; i<nums.size()-1; i++) {
            nums[fi]=nums[fi+1];
        }
        
    }
    bool checksmallest(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0; i<nums.size(); i++) {
            mini=min(mini,nums[i]);
        }

        if(mini>nums[0]) {
            return false;
        }  else if(mini==nums[0]) {
            return true;
        } else {
            return false;
        }
    }
    
    void swapandshift(vector<int>& nums) {
        int n=nums.size();  int temp=nums[0];
        int fi=0;
        for(int i=0; i<nums.size()-1; i++) {
            nums[fi]=nums[fi+1];
        }
        nums[n-1]=temp;
        
    }
    long long countOperationsToEmptyArray(vector<int>& nums) {
        
        int n=nums.size();
        int cnt=0;
        while(n!=0) {
            if(checksmallest(nums)){
                // remove
//                  swap;
                swapandshift(nums);
                
            } else {
               increasearray(nums);
            }
            
            cnt++;
            
        }
        return cnt;
    }
};

int main() {
    int n;  cin>>n;
    vector<int> num;
    for(int i=0; i<n; i++) {
        cin>>num[i];
    }
    Solution obj=new Solution();
    cout<<obj.countOperationsToEmptyArray(num);

}