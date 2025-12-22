class Solution {
public:
    bool valid_num(int n){
        int temp = n;
        while(temp>0){
            int rem = n%10;
            if(rem == 0 || temp%rem != 0)
            break;

            n /= 10;
        }
        return n==0;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left; i<=right; i++){
            if(valid_num(i))
            res.push_back(i);
        }
        return res;
    }
};