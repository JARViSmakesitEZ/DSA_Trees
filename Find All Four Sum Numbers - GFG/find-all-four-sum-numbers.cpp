//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int key) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int n = arr.size();//2 3 4 5 7 8 10
        int i = 0;
        while(i<n-3){
            int j = i+1;
            int l = n-1;
            int k = l-1;
            while(j<n-2){
                int k = j+1;
                int l = n-1;
                while(k<l){
                    int sum = arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==key){
                        ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                        int num = arr[j];
                        while(k<l && arr[k]==num){
                            k++;
                        }
                        num = arr[l];
                        while(k<l && arr[l]==num){
                            l--;
                        }
                    }
                    else if(sum>key){
                        int num = arr[l];
                        while(k<l && arr[l]==num){
                            l--;
                        }
                    }
                    else{
                        int num = arr[k];
                        while(k<l && arr[k]==num){
                            k++;
                        }
                    }
                }
                
                int num = arr[j];
                while(j<n-2 && arr[j]==num){
                    j++;
                }
            }
        
            int num = arr[i];
            while(i<n-3 && arr[i]==num){
                // cout<<i<<endl;
                i++;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends