class Solution {
public:
    bool isValid(string s) {
        map<char, char> brackets_map;
        int i = 0;
        // brackets = "[({"
        brackets_map[']'] = '[';
        brackets_map[')'] = '(';
        brackets_map['}'] = '{';
        while(s != ""){
            if(s[i] != NULL && brackets_map.count(s[i])){
                if(i>0 && s[i-1] == brackets_map[s[i]]){
                    s.erase(s.begin()+i);
                    s.erase(s.begin()+i-1);
                    i = i-1;
                }
                else return false;
            }
            else if(s[i] != NULL && !brackets_map.count(s[i])){
                i++;
                continue;
            }
            else return false;
        }
        return true;
    }
};
