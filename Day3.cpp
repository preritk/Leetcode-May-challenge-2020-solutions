class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        int len1 = ransomNote.length();
        int len2 = magazine.length();
        for(int i=0;i<len1;i++){
            if(m1.find(ransomNote[i])!=m1.end()){
                m1[ransomNote[i]]++;
            }
            else{
                m1[ransomNote[i]]=1;
            }
        }
        for(int i=0;i<len2;i++){
            if(m2.find(magazine[i])!=m2.end()){
                m2[magazine[i]]++;
            }
            else{
                m2[magazine[i]]=1;
            }
        }
        for(auto it=m1.begin();it!=m1.end();it++){
            if(it->second <= m2[it->first]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
