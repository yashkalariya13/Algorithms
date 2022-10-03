// ✔️ Solution - I (Dynamic Programming - Iterative)

// The pascal triangle problem has a very simple and intuitive dynamic programming approach. As the definition states, every element of a row is formed by the sum of the two numbers directly above. So, we can just apply DP and use the previously stored rows of trianlge to calculate the new rows.

// We can just initialize the start and end elements of each row as 1 and update only the elements between them. This will make the code simpler and avoid the need of having extra checks for edge elements of each row.

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans(n);             // initialize n rows
        for(int i = 0; i < n; i++) {
            ans[i] = vector<int>(i+1,1);        // ith row(0-indexed) has i+1 elements
            for(int j = 1; j < i; j++)          // 1st and last elements will be 1, rest will be sum of two elements from above row
                ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];            
        }
        return ans;
    }
};

// Time Complexity : O(n2)
// Space Complexity : O(n2)



// ✔️ Solution - II (Top-Down Recursive)

// Here, the same logic as above is applied, just using a recursive implementation. 
// We will start from the bottom of triangle and recursively call the generate(n-1), 
// till the top-most row of trianlge is generated and then construct the bottom rows one-by-one using the values from the above rows.

class Solution {
    vector<vector<int>>ans;
public:    
    vector<vector<int>>& generate(int n) {
        if(n) {
            generate(n-1);                       // generate above row first
            ans.emplace_back(vector<int>(n,1));  // insert current row into triangle
            for(int i = 1; i < n-1; i++)         // update current row values using above row
                ans[n-1][i] = ans[n-2][i] + ans[n-2][i-1];    
        }
        return ans;
    }
};

// Time Complexity : O(n2)
// Space Complexity : O(n2)