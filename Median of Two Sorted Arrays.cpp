class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> twoMedian (nums1.size()+nums2.size());
        int k = 0;
        int i = 0;
        int j = 0;
        int n = nums1.size();
        int m = nums2.size();
        
        while(k < (m + n)){
            if (i < n && j < m){
                if (nums1[i] < nums2[j]){
                    twoMedian[k] = nums1[i];
                    i++;                  
                }else{
                    twoMedian[k] = nums2[j];
                    j++;
                }
            }else if (i < n){
               twoMedian[k] = nums1[i];
                i++;
            }else if ( j < m){
               twoMedian[k] = nums2[j];
                j++;
            }else{
                break;
            }
            k++;
        }
        int medianArray = (m + n) / 2;
        if ((m + n) %2 == 0){
            return (twoMedian[medianArray - 1] + twoMedian[medianArray]) / 2.0;
        }else{
            return twoMedian[medianArray];
        }
    }
};