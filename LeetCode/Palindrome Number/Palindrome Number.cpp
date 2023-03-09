#include <iostream>
#include <string>
#include <sstream>    // header file for stringstream
class Solution {
public:
    bool isPalindrome(int x) {
        
        stringstream xStr;
        xStr << x;

        string xReverse = xStr.str();
        reverse(xReverse.begin(),xReverse.end());
        if(xStr.str() == xReverse){
            return true;
        }
        return false;

    }
};