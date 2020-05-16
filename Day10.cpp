class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N==1)
            return 1;
        int len = trust.size();
        unordered_map<int,pair<int,int> > m;
        for(int i=0;i<len;i++){
            if(m.find(trust[i][0])==m.end()){
                m[trust[i][0]]={1,0};
            }
            else{
                m[trust[i][0]].first++;
            }
            if(m.find(trust[i][1])==m.end()){
                m[trust[i][1]]={0,1};
            }
            else{
                m[trust[i][1]].second++;
            }
        }
        for(auto it:m){
            if(it.second.first==0 && it.second.second==N-1)
                return it.first;
        }
        return -1;
    }
};
