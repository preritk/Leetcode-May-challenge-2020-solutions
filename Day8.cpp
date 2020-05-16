class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int len = coordinates.size();
        if(len<=2){
            return true;
        }
        vector<int> v1(2,0);
        vector<int> v2(2,0);
        v1[0]=coordinates[1][0]-coordinates[0][0];
        v1[1]=coordinates[1][1]-coordinates[0][1];
        for(int i=2;i<len;i++){
            v2[0]=coordinates[i][0]-coordinates[0][0];
            v2[1]=coordinates[i][1]-coordinates[0][1];
            if(((v1[0]*v2[1])-(v1[1]*v2[0]))!=0){
                return false;
            }
        }
        return true;
    }
};
