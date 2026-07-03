class Solution {
public:
    int countDigits(int num) {
        int s=0,temp=num,c=0;
        while(temp)
        {
            s=temp%10;
            if(num%s == 0){
                c++;
            }
            temp=temp/10;
        
        }
        return c;
    }
};
