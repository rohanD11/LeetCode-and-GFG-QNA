class Solution {
public:
    int reverse(int x) {
        long long int n=0;
        bool yes=false;
        if(x<=-2147483648){
            return 0;
        }
        if(x<0){
            x*=-1;
            yes=true;
        }
           while(x>0){
               int rem=x%10;
               n=n*10+rem;
               if(n>2147483647){
                   return 0;
               }
               x=x/10;
                 
           }
        if(yes==true){
            n*=-1;
        }
        return n;
    }
};