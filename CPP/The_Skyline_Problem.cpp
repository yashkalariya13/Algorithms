//218. The Skyline Problem
//https://leetcode.com/problems/the-skyline-problem/

//Code

bool compare(vector<int>& a, vector<int>& b) {
	if(a[0] == b[0]) return a[1] < b[1];
	else return a[0] < b[0];
}
class Solution {
public:
	vector<vector<int>> getSkyline(vector<vector<int>>& arr) {
		vector<vector<int>> ans;
		vector<vector<int>> dir;

		for(auto it : arr){
			dir.push_back({it[0],-it[2]});
			dir.push_back({it[1],it[2]});
		}

		sort(dir.begin(),dir.end(),compare);

		priority_queue<int> pq;

		int maxVal = 0;
		pq.push(0);

		int n = dir.size();
		unordered_map<int, int> mp;
		for(int i=0; i<n; i++){
			int v = dir[i][1];
			if(v>=0){
				mp[v]++;
				while(mp[pq.top()]>0){
					mp[pq.top()]--;
					pq.pop();
				}
				if(pq.empty()){
					if(i==n-1 || dir[i+1][0]!=dir[i][0]){
						ans.push_back({dir[i][0],0});
						maxVal = 0;
					}
				}
				else if(pq.top()<maxVal){
					maxVal = pq.top();
					ans.push_back({dir[i][0], maxVal});
				}
			}
			else{
				pq.push(abs(v));
				if(pq.top()>maxVal){
					maxVal = pq.top();
					ans.push_back({dir[i][0], maxVal});            
				}
			}
		}
		return ans;
	}
};
