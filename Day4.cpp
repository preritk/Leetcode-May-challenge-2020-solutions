class Solution {
public:
    string getBinaryString(int num){
        string str = "";
        while(num>0){
            if(num%2==1){
                str = "0"+str;
            }
            else{
                str = "1"+str;
            }
            num = num/2;
        }
        return str;
    }
    int findComplement(int num) {
        string comBinary = getBinaryString(num);
        int len = comBinary.length();
        int ans = 0;
        int k = 0;
        for(int i=len-1;i>=0;i--){
            ans += (comBinary[i]-'0')*pow(2,k);
            k++;
        }
        return ans;
    }
};
