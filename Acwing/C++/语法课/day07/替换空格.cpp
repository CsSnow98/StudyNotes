class Solution {
public:
    string replaceSpaces(string &str) {
        string s;
        for (auto v : str)
        {
            if(v==' ') s += "%20";
            else s += v;
        }
        return s;
    }
};