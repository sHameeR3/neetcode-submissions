class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(int i=0;i<strs.size();i++){
            string t=strs[i];
            string size = to_string(t.size());
            encoded+=size;
            encoded+='#';
            encoded+=strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        for(int i=0;i<s.length();i++){
            int len=0;
            while(s[i]!='#'&&i<s.size()){
                len=len*10+(s[i]-'0');
                i++;
            }
            i++;
            if(i+len>s.size()) break;
            string y=s.substr(i,len);
            ans.push_back(y);
            i+=len-1;

        }
        return ans;
    }
};
