class Solution {
public:

    string encode(vector<string>& strs) {
       string result  = "";
       for(string s: strs){
        int len = s.size();

        string lenstr = string(4 - to_string(len).size(), '0') + to_string(len);
        result +=lenstr + s;

       }
       return result;
    }

    vector<string> decode(string s) {
      vector<string> result;
      int i =0;
      while (i<s.size()){
        int length = stoi(s.substr(i,4));
        string word = s.substr(i+4,length);
        result.push_back(word);
        i = i+4+length;
      }

      return result;
    }
};
