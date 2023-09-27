//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        for(int i =0;i<n;i++){
            arr[i]++;
        }
        set<int> s;
        vector<int> ans;
        for(int i = 0;i<n;i++){
            if(arr[abs(arr[i])-1]>0){
                arr[abs(arr[i])-1]*=-1;
            }
            else{
                s.insert(abs(arr[i])-1);
            }
        }
        if(s.size()==0){//3 1 4 4 2
            return {-1};
        }
        for(int i:s){
            ans.push_back(i);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends