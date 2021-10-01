class Solution {
public:
    string intToRoman(int num) {
        pair<int,string> rmap[] = {
            {1000,"M"}, 
            {900,"CM"}, 
            {500, "D"}, 
            {400, "CD"}, 
            {100, "C"}, 
            {90, "XC"}, 
            {50, "L"}, 
            {40, "XL"}, 
            {10,"X"},
            {9,"IX"},
            {5, "V"}, 
            {4,"IV"}, 
            {1, "I"}
        };
        int rptr = 0;
        string str="";
        while(num){
            if(num>=(rmap[rptr]).first){
                str += (rmap[rptr]).second;
                num -= (rmap[rptr]).first;
            }
            else{
                rptr++;
            }
        }
        return str;
    }
};