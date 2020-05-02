// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l=1,h=n;
        long long ans;
        while(l<=h){
            long long mid = (l+h)/2;
            bool tmp = isBadVersion(mid);
            if(tmp==true){
                ans = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};
