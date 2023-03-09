class Solution {
public:
    bool isValid(string s) {
        

        char pL = '('; //parenthesis left
        char pR = ')'; //parenthesis right
        char cBL = '{'; //curly bracket left
        char cBR = '}'; //curly bracket right
        char sBL = '['; //square bracket left
        char sBR = ']'; // square bracket right

        bool pClosed = true;
        bool cClosed = true;
        bool sClosed = true;

        vector<char> brackets;
        for (int i = 0; i < s.length(); i++){
            
            if(brackets.size() == 0){
                if(s[i] == pR || s[i] == cBR || s[i] == sBR){
                    return false;
                }
            }

            if (s[i] == pL || s[i] == cBL || s[i] == sBL){
                brackets.push_back(s[i]);
            }
            else if( s[i] == pR && brackets.back() != pL){
                return false;
            }
            else if( s[i] == pR && brackets.back() == pL){
                brackets.pop_back();
            }           
            else if( s[i] == cBR && brackets.back() != cBL){
                return false;
            }
            else if( s[i] == cBR && brackets.back() == cBL){
                brackets.pop_back();
            }                   
            else if( s[i] == sBR && brackets.back() != sBL){
                return false;
            }
            else if( s[i] == sBR && brackets.back() == sBL){
                brackets.pop_back();
            }                   
        }
        if (brackets.size() != 0){
            return false;
        }


        // for (int i = 0; i < s.length(); i+=2){
        //     if (s[i] == pL && s[i+1] != pR){
        //         return false;
        //     }
        //     if (s[i] == cBL && s[i+1] != cBR){
        //         return false;
        //     }
        //     if (s[i] == sBL && s[i+1] != sBR){
        //         return false;
        //     }
        // }
        // for (int i = 0; i < s.length(); i++){
        //     if (s[i] == pL && pClosed == true){
        //         pClosed = false;  //parenthesis are now open
        //         cout << "pclosed is false" << endl;
        //     }
        //     else if (s[i] == pL && pClosed != true){
        //         return false;   //parenthesis are open and another '(' appears
        //     }
        //     else if (s[i] == pR && pClosed == false){
        //         pClosed = true;  //parenthesis are not open and ')' appears
        //         cout << "pclosed is true" << endl;                
        //     }
        //     else if (s[i] == cBL && cClosed == true){
        //         cClosed = false;  //curlys are now open
        //         cout << "cClosed is false" << endl;
        //     }
        //     else if (s[i] == cBL && cClosed != true){
        //         return false;   //curlyss are open and another '(' appears
        //     }
        //     else if (s[i] == cBR && cClosed == false){
        //         cClosed = true;  //curlys are not open and ')' appears
        //         cout << "cClosed is true" << endl;
        //     }
        //     else if (s[i] == sBL && sClosed == true){
        //         sClosed = false;  //square are now open
        //         cout << "sClosed is false" << endl;
        //     }
        //     else if (s[i] == sBL && sClosed != true){
        //         return false;   //square are open and another '(' appears
        //     }
        //     else if (s[i] == sBR && sClosed == false){
        //         sClosed = true;  //square are not open and ')' appears
        //         cout << "sClosed is true" << endl;
        //     }            
        // }
        // if (sClosed== false || cClosed == false || pClosed == false){
        //     return false;
        // }
        return true;

    }
};