class Solution {
public:
    int countDigits(int num) {
        if(num<10 && num>0)
        return 1;
        int temp=num;
        int cnt=0;
        while(temp>0)
        {
            int rem=temp%10;
            if(num%rem==0)
            cnt++;
            temp/=10;
        }
        return cnt;
    }
};