class Solution {
public:
    int romanToInt(string s) {

        int I = 1;
        int V = 5;
        int X = 10;
        int L = 50;
        int C = 100;
        int D = 500;
        int M = 1000;

        int total = 0;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == 'I' && s[i+1] == 'V'){
                total = total - I;
            }
            else if(s[i] == 'I' && s[i+1] == 'X'){
                total = total - I;                
            }
            else if(s[i] == 'I'){
                total = total + I;
            }
            else if(s[i] == 'V'){
                total = total + V;
            }
            else if(s[i] == 'X' && s[i+1] == 'L'){
                total = total - X;
            }
            else if(s[i] == 'X' && s[i+1] == 'C'){
                total = total - X;                
            }
            else if(s[i] == 'X'){
                total = total + X;
            }
            else if(s[i] == 'L'){
                total = total + L;
            }
            if(s[i] == 'C' && s[i+1] == 'D'){
                total = total - C;
            }
            else if(s[i] == 'C' && s[i+1] == 'M'){
                total = total - C;                
            }
            else if(s[i] == 'C'){
                total = total + C;
            }
            else if(s[i] == 'D'){
                total = total + D;
            }
            else if(s[i] == 'M'){
                total = total + M;
            }


        }
        return total;
    }
};