/*****************************
This question is asked for using merge sort to merge two list.So I just implement the merge sort algorithm and solve the problem.
*****************************/


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> tmp(nums1);
        if(n == 0){
            return;
        }
        if(m == 0){
            nums1 = nums2;
            return;
        }
        
        int index1 = 0,index2 = 0,index = 0;
        while(index1 < m || index2 < n){
            if(tmp[index1] <= nums2[index2]){
                nums1[index] = tmp[index1];
                ++index1;
            }
            else{
                nums1[index] = nums2[index2];
                ++index2;
            }
            ++index;
            if(index1 == m && index2 < n){
                for(;index2 < n;index2++){
                    nums1[index] = nums2[index2];
                    ++index;
                }
            }
            else if(index2 == n){
                for(;index1 < m;index1++){
                    nums1[index] = tmp[index1];
                    ++index;
                }
            }
        }
    }
};
