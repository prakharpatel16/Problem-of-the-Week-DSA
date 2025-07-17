 Min In Sort Rotated Array    LEETCODE LINK : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

Approach (Binary Search):
• Initialize low = 0, high = N - 1   // N is the size of the array
• While low < high:



 Find mid = (low + high) / 2
 If arr[mid] > arr[high], the minimum is in the right half → low = mid +
 Else, the minimum is in the left half (including mid) → high = mid
 Return arr[low]


 
 Time Complexity: O(log N)    // logN Time Complexity because of Binary Search 
 Space Complexity: O(1)       // Constant Space Complexity as we are not using any extra space in order to solve the problem.
