class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        int rem;
        while(num>0)
        {
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
        if(sum>9)
            return addDigits(sum);
        else
            return sum;
    }
};