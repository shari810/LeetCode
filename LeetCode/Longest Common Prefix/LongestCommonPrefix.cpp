#include <iostream>
#include <string>

class Solution {
public:
        //check all letters in the same position
        bool sameLetter(int pos, vector<string> words, char checkLetter){
            for(int i = 0; i < words.size(); i++){
                if (checkLetter == words[i][pos]){
                    continue;
                }
                else{
                    return false;
                }
            }
            return true;
        }

    string longestCommonPrefix(vector<string>& strs) {
        
        string output;
    
        for (int i = 0; i < strs.size(); i++){ //check each word
            string curLong;
            cout << strs[i] << endl;
            for (int j = 0; j < strs[i].length(); j++ ){  //check each letter in each word
                //cout << strs[i][j] << endl;
                if( sameLetter(j, strs, strs[i][j]) == true ){
                    //cout << strs[i][j] << endl;
                    curLong = strs[i].substr(0,j+1);
                    //cout << curLong << endl;
                }    
                else{
                    break;
                }
            }
            if (curLong.length() > output.length()){
                output = curLong;
            }
        }

        
        return output;


    }
};