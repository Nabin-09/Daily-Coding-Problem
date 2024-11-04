/*
Given an array of integers, return a new array such that each element at index i of
the new array is the product of all the numbers in the original array except the one
at i.
For example, if our input was [ 1, 2, 3, 4, 5], the expected output would be [ 120,
60, 40, 30, 24]. Ifourinputwas [3, 2, 1],theexpectedoutputwouldbe [2,
3, 6]. 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    int p = 1;
    vector<int> arr(n);
    for(int &num : arr){
        cin >> num ;
    }
    vector<int> ans;
    for(int i = 0 ; i < n ; i++){
        p = p * arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        ans.push_back(p/arr[i]);
    }
    for(int num : ans){
        cout<<num<<" ";
    }
    return 0;
}
/*Optimal approach*/