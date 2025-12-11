#include <iostream>
#include <vector>

int lower_bound(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();  // right is set to the size of the array
    
    while (left < right) {
        int mid = left + (right - left) / 2;  // Calculate the middle index
        
        if (arr[mid] < target) {
            left = mid + 1;  // If mid value is less than target, move left boundary
        } else {
            right = mid;  // Otherwise, shrink the right boundary
        }
    }
    
    return left;  // left will be the index of the lower bound
}


int upper_bound(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();  // right is set to the size of the array
    
    while (left < right) {
        int mid = left + (right - left) / 2;  // Calculate the middle index
        
        if (arr[mid] <= target) {
            left = mid + 1;  // If mid value is less than or equal to target, move left boundary
        } else {
            right = mid;  // Otherwise, shrink the right boundary
        }
    }
    
    return left;  // left will be the index of the upper bound
}




int main() {
    std::vector<int> arr = {1, 2, 4, 4, 5, 7, 9};
    int target = 9;
    
    std::cin >> target;
    int lb = lower_bound(arr, target);
    std::cout << lb << std::endl;
    std::cout << upper_bound(arr, target) << std::endl;

    
    return 0;
}
