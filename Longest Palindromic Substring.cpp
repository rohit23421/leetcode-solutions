class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n == 0) {
            return "";
        }
        bool table[1000][1000] = {false};
        
        int maxstring = 0;
        int maxlength = 1;
        
        for(int i=0;i<n;i++){
            table[i][i] = true;
            maxstring = i;
            maxlength = 1;
        }
        for(int i=0; i<n-1;i++){
            if(s[i] == s[i+1]){
                table[i][i+1] = true;
                maxstring = i;
                maxlength = 2;
            }
        }
        for( int len=2; len<=n; len++){
            for(int i=0; i<n-len+1;i++){
                int j = i+len-1;
                if(s[i] == s[j] && table[i+1][j-1]){
                    table[i][j] = true;
                    maxstring = i;
                    maxlength = len;
                }
            }
        }
        return s.substr(maxstring,maxlength);
    }
};