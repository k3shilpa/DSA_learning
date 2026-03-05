# Given an integer array arr[], find the subarray (containing at least one element) which has the maximum possible sum, and return that sum.
# Note: A subarray is a continuous part of an array.

# Examples:

# Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
# Output: 11
# Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.

# Input: arr[] = [-2, -4]
# Output: -2
# Explanation: The subarray [-2] has the largest sum -2.

# Input: arr[] = [5, 4, 1, 7, 8]
# Output: 25
# Explanation: The subarray [5, 4, 1, 7, 8] has the largest sum 25.

def max_subarray_sum(arr):
    max_sum = float('-inf')  # Initialize max_sum to negative infinity
    current_sum = 0  # Initialize current_sum to 0
    
    for num in arr:
        current_sum += num  # Add the current number to current_sum
        
        # Update max_sum if current_sum is greater
        max_sum = max(max_sum, current_sum)
        
        # If current_sum drops below 0, reset it to 0
        if current_sum < 0:
            current_sum = 0
            
    return max_sum

# Example usage:
arr1 = [2, 3, -8, 7, -1, 2, 3]
arr2 = [-2, -4]
arr3 = [5, 4, 1, 7, 8]
print(max_subarray_sum(arr1))  # Output: 11
print(max_subarray_sum(arr2))  # Output: -2
print(max_subarray_sum(arr3))  # Output: 25