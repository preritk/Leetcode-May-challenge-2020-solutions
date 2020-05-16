class Solution {
public:
bool isPerfectSquare(int n) {
    if(n==1) return true;
    for(long i=2;i<=n/2;i++){
        long k=i*i;
        if(k==n){
            return true;
            break;
        }
        else if(k>n) return false;
    }
    return false;
}
};
