class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int sum=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='I') sum+=1;
            if(s[i]=='V'){
                if(i-1>=0 && s[i-1]=='I'){
                    sum+=4;
                    i--;
                }
                else{
                    sum+=5;
                }
            }
            if(s[i]=='X'){
                if(i-1>=0 && s[i-1]=='I'){
                    sum+=9;
                    i--;
                }
                else{
                    sum+=10;
                }
            }
            if(s[i]=='L'){
                if(i-1>=0 && s[i-1]=='X'){
                    sum+=40;
                    i--;
                }
                else{
                    sum+=50;
                }
            }
            if(s[i]=='C'){
                if(i-1>=0 && s[i-1]=='X'){
                    sum+=90;
                    i--;
                }
                else{
                    sum+=100;
                }
            }
            if(s[i]=='D'){
                if(i-1>=0 && s[i-1]=='C'){
                    sum+=400;
                    i--;
                }
                else{
                    sum+=500;
                }
            }
            if(s[i]=='M'){
                if(i-1>=0 && s[i-1]=='C'){
                    sum+=900;
                    i--;
                }
                else{
                    sum+=1000;
                }
            }
            
            
        }
        return sum;
    }  
};