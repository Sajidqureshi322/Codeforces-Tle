#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    int t;
    cin >> t;  // Number of test cases
    while(t--) {
        int n;
        cin >> n;  // Size of array
        vector<int> v(n);
        
        // Input the array
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        // Precompute prefix sums
        vector<long long> pre(n+1, 0);
        for(int i = 1; i <= n; i++) {
            pre[i] = pre[i-1] + v[i-1];  // Adjusted for 1-based indexing
        }
        
        long long ans = 0;

        // Iterate over all divisors i of n
        for(int i = 1; i <= n/2; ++i) {
            if(n % i == 0) {
                long long maxi = LLONG_MIN;
                long long mini = LLONG_MAX;

                // Loop through segments of length i
                for(int j = i; j <= n; j += i) {
                    long long sum = pre[j] - pre[j - i];
                    maxi = max(maxi, sum);
                    mini = min(mini, sum);
                }
                
                // Update the answer with the maximum difference
                ans = max(ans, maxi - mini);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
