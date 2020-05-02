class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> patt;
        int len1 = J.length();
        int len2 = S.length();
        int i=0;
        while(i<len1){
            patt.insert(J[i]);
            i++;
        }
        i = 0;
        int count = 0;
        while(i<len2){
            if(patt.find(S[i])!=patt.end()){
                count++;
            }
            i++;
        }
        return count;
    }
};
