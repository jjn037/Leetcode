class Solution {
public:
    void huisu(string digits, vector<string>& ret, int start, string temp){
        string num_map[] = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(temp.size()==start ){
            ret.push_back(temp);
            return;
        }
        for(int i=0; i<num_map[digits[start] - '0'].size(); i++){
            temp[start] = num_map[digits[start]- '0'][i];
            huisu(digits, ret, start+1, temp);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits=="") return vector<string>();
        vector<string> ret;
        string temp(digits.size(), ' ');
        huisu(digits, ret, 0, temp);
        return ret;
        // map['2'] = "abc"; map['3'] = "def"; map['4'] = "ghi"; map['5'] = "jkl";
        // map['6'] = "mno"; map['7'] = "pqrs"; map['8'] = "tuv"; map['9'] = "wxyz"; 
        // for(string::iterator it = s.begin(); it != s.end(); it++){
        //     string temp = map[*it] ;
            
        
        }
    };


https://blog.csdn.net/cinderella_niu/article/details/42610531
