#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
  int cnt = 0;
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int sum = 0;
      for (int l = i; l <= j; l++) {
        sum += arr[l];
        
      }
      if (sum == k) {
          cnt++;
        }
    }
  }
  return cnt;
}

int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}