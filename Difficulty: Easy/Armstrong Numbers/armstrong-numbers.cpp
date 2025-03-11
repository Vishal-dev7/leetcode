//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int sum=0;
        int dup=n;
        int ld;
        while(n>0){
           ld=n%10;
           n=n/10;
           sum=(sum)+(ld*ld*ld);
        }
        
        if(dup==sum){
           return dup;
        }
        else
        return false;
    
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends