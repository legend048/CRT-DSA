#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& arr) {
    int n = arr.size();
    
    int candidate = -1;
    int count = 0;
    for (int num : arr) {
       
        if (count == 0) {
            candidate = num;
            count = 1;
        } 
        else if (num == candidate) {
            count++;
        } 
        else {
            count--;
        }
    }

    count = 0;
    for (int num : arr) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    vector<int> arr = {1, 1, 2, 1, 3, 5, 1};
    cout << majorityElement(arr) << endl;
    return 0;
}