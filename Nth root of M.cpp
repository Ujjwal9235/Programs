// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		double multiply(double number, int n)
		{
			double ans = 1.0;
			for(int i = 1;i<=n;i++){
				ans = ans*number;
			}
			return ans;
		}
	double NthRoot(int n, int m)
	{
	    // Code here.
	    double l = 1;
	    double h = m;
	    double eps = 1e-6;
	    while((h-l) > eps)
	    {
	        double mid = (h+l)/2.0;
	        
	        
	        if(multiply(mid, n) > m) h = mid;
	        
	        else l = mid;
	    }
	    
	     
	}  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		float ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends