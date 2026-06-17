#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int res = arr[0];           
    int maxEnding = arr[0];     
    for (int i = 1; i < arr.size(); i++) {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    if (!(cin >> n)) return 0;
    vector<int> arr(n);
    cout << "Enter the elements of the array separated by spaces: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];
    cout << maxSubarraySum(arr);
    return 0;
}