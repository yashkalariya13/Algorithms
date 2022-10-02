//49:- Group Anagrams
// https://leetcode.com/problems/group-anagrams/

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto x:strs){
            string a=x;
            sort(x.begin(),x.end());
            mp[x].push_back(a);
        }
        
       
        vector<vector<string>>v;
        //sort(strs.begin(),strs.end());
        
        for(auto it:mp){
            v.push_back(it.second);
        }
        return v;
        
    }
