#include <iostream>
#include <vector>
#include <climits> 

std::pair<int, int> findUnsortedWindow(const std::vector<int>& array) {
    int left = -1, right = -1;
    int max_seen = INT_MIN, min_seen = INT_MAX;
    int n = array.size();
    for (int i = 0; i < n; ++i) {
        if (array[i] < max_seen) {
            right = i;
        } else {
            max_seen = array[i];
        }
    }

  
    for (int i = n - 1; i >= 0; --i) {
        if (array[i] > min_seen) {
            left = i;
        } else {
            min_seen = array[i];
        }
    }

    return {left, right};
}

int main() {
    std::vector<int> array = {3,7,5,6,9}; 
    std::pair<int, int> result = findUnsortedWindow(array);
    int left = result.first;
    int right = result.second;

    std::cout << "Left: " << left << ", Right: " << right << std::endl;
    return 0;
}
