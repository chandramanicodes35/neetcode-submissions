class Solution {
public:
    int numDecodings(string s) {
       if(s.empty()|| s[0]=='0')
       return 0;
       int prev2=1;
       int prev1=1;
       int curr = 0;
       for(int i=1;i<s.size();i++){
        if(s[i]!='0'){
            curr = prev1;

            int twodigit = stoi(s.substr(i-1,2));
            int (twodigit >= 10 && twodigit <= 26);
                curr += prev2;
    
            

        }

        prev2=prev1;
        prev1=curr;

       } 
       return prev1;
    }
};
