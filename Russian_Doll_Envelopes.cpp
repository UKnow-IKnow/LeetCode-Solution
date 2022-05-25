//LeetCode Q.354. Russian Doll Envelopes

// Only Logic Part with Explanation

class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){ // compare function for sorting
        if(a[0]==b[0]) return a[1] > b[1];
        return a[0] < b[0];
    }
    int maxEnvelopes(vector<vector<int>>& env) {
        int n = env.size();
        sort(env.begin(),env.end(),comp); // sort by width in decreasing order
        vector<int> lis; // longest increasing subsequence
        for(int i=0;i<n;i++){ // for each envelope
            int ele = env[i][1]; // width of envelope i 
            int index = lower_bound(lis.begin(),lis.end(),ele)-lis.begin(); // find the first element in lis that is greater than ele
            if(index>=lis.size()) lis.push_back(ele); // if no such element, add ele to lis
            else lis[index] = ele; // if there is such element, replace it with ele
        }
        return lis.size(); // return the size of lis
    }
};