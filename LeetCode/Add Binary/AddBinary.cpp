class Solution {
public:
    string addBinary(string a, string b) {
        
        //0 + 0 = 00
        //0 + 1 = 01
        //1 + 0 = 01
        //1 + 1 = 10

        string total;
        string carry = "0";
        //add lead zeros to shorter number string
        if(a.size() > b.size()){
            int diff = a.size() - b.size();
            b.insert(0, diff, '0');            
        }
        else{
            int diff = b.size() - a.size();
            a.insert(0, diff, '0');     
        }

        int Cnt = a.size()-1;
        while (Cnt >= 0){

            cout << a[Cnt] << " + " << b[Cnt] << endl;
            if (a[Cnt] == '0' && b[Cnt] == '0'){
                if(carry == "1"){
                    total.append("1"); 
                    carry = "0";                   
                }
                else{
                    total.append("0");
                }
            }
            else if (a[Cnt] == '0' && b[Cnt] == '1'){
                if(carry == "1"){
                    total.append("0"); 
                    carry = "1";                   
                }
                else{
                    total.append("1");
                }
            }            
            else if (a[Cnt] == '1' && b[Cnt] == '0'){
                if(carry == "1"){
                    total.append("0"); 
                    carry = "1";                   
                }
                else{
                    total.append("1");
                }
            }
            else if (a[Cnt] == '1' && b[Cnt] == '1'){
                if(carry == "1"){
                    total.append("1"); 
                    carry = "1";                   
                }
                else{
                    total.append("0");
                    carry = "1";
                }
            }            
            cout << total << endl;
            Cnt-=1;
        }
        if(carry == "1"){
            total.append(carry);
        }
        reverse(total.begin(),total.end());

        return total;
    }
};