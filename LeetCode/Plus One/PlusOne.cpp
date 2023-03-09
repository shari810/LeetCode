#include <algorithm>    // std::reverse
#include <vector>       // std::vector

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        // if(digits[digits.size()-1] == 9){
        //     digits[digits.size()-1] = 0;
        //     if(digits.size() == 1){  //number is [9]
        //         digits.insert(digits.begin(), 1);
        //     }
        //     else{

        //         digits[digits.size()-2] +=1;
        //     } 
        // }
        // else{
        //     digits[digits.size()-1] +=1;
        // }

        // //check for 10s
        std::reverse(digits.begin(),digits.end());

        digits[0] +=1;
        for (int i = 0; i<digits.size(); i++){
            if(digits[i] == 10){
                digits[i] = 0;
                if(i == digits.size()-1){
                    digits.push_back(1);
                }
                else{
                    digits[i+1]+=1;
                }
            }
        }
        std::reverse(digits.begin(),digits.end());
        return digits;
    }
};