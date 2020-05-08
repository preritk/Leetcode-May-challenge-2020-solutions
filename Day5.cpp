class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int> > m;
        int len = s.length();
        for(int i=0;i<len;i++){
            if(m.find(s[i])==m.end()){
                m[s[i]] = {1,i};
            }
            else{
                m[s[i]].first++;
            }
        }
        int index = len;
        for(auto it: m){
            if(it.second.first==1){
                index = min(index,it.second.second);
            }
        }
        if(index==len)
                return -1;
        return index;
    }
};
