# Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

# You may assume:

# Each input has exactly one solution.

# You may not use the same element twice.

# You can return the answer in any order.
    # Input: nums = [2,7,11,15], target = 9
    # Output: [0,1]
    # Explanation: nums[0] + nums[1] == 9

def two_sum(nums, target):
    # Create a dictionary to store the indices of the numbers
    num_dict = {}
    
    # Iterate through the list of numbers
    for i, num in enumerate(nums):
        # Calculate the complement of the current number
        complement = target - num
        
        # Check if the complement is in the dictionary
        if complement in num_dict:
            # If it is, return the indices of the two numbers
            return [num_dict[complement], i]
        
        # Otherwise, add the current number and its index to the dictionary
        num_dict[num] = i
    
    # If no solution is found, return an empty list (though the problem guarantees one solution)
    return []
# Example usage:
nums = [2, 7, 11, 15]
target = 9
result = two_sum(nums, target)
print(result)  # Output: [0, 1]