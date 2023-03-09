class Solution {
public:
    int lengthOfLastWord(string s) {
        
        vector<string> words;
        string wordCur;
        for(int i = 0; i<s.size(); i++){
            //loop over string, if char is " " --> then nothing, 
            // if char is a letter append to string. at the next space push_back word to vector
            if(s[i] == ' '){
                //cout << "space" << endl;
            }
            if (i > 0 && s[i] == ' '){
                if(wordCur == ""){
                    //cout << "empty" << endl;
                    wordCur = "";
                }
                else{
                    words.push_back(wordCur);
                    //cout << "pushback and wordCur:" << wordCur << ":"<< endl;
                    wordCur = "";
                }
            }
            else if(s[i] != ' '){
                wordCur = wordCur + s[i];
                //cout << wordCur << endl;
                if(i == s.size()-1){
                    words.push_back(wordCur);
                }
            }

        }
        // for(auto word: words){
        //     cout << word << endl;
        // }
        return words[words.size()-1].size();
    }
};