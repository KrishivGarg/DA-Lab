#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr, int n){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum < 0){
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements :" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Max subarray sum :" << maxSubarraySum(arr, n) << endl;
    return 0;
}
