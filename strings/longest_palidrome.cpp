class Solution {
public:
    int longestPalindrome(vector<string>& words) {
       vector<vector<int>>store(26,vector<int>(26,0));
        int len =0,f=0;
        // take pairs like -- cl lc dd dd cl lc xx xx xx xx dd cc
       for(int i =0;i<words.size();i++){
           // include pairs in count of len
           int l = words[i][0]-'a',m = words[i][1]-'a'; 
           if (store[m][l])
                store[m][l]--,len+=4;
           else 
               store[l][m]++; // take all into consideration
       }
        for(int i =0;i<26;i++){
            if(store[i][i])
            {len+=2 ;break;}
        }
            
        return len;
    }
};