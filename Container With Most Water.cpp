class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0,i=0,j=height.size()-1,result=0;
        while (i < j) {
            if(height[i] <= height[j]){
                result = height[i] * (j-i);
                i++;
            }else{
                result = height[j] * (j-i);
                j--;
            }
            if(result > area){
                area = result;
            }
        }
            return area;
        }
};