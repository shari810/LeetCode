class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        
        int tracked = low;
        
        while(tracked<=high){
            if(tracked%2 !=0){
                count++;
            }
            tracked++;
        }

        return count;        


    }
};