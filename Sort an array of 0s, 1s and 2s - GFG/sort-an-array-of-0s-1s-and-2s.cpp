//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int l = 0;
        int m = 0;
        int h = n-1;
        while(m<=h){
            if(arr[m]==0){
                swap(arr[m],arr[l]);
                m++;l++;
            }
            else if(arr[m]==2){
                swap(arr[m],arr[h]);
                h--;
            }
            else{
                m++;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends