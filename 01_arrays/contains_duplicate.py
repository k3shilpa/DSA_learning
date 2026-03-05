# Problem Statement
# Given an array of integers, find if the array contains any duplicates.

# Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

# Example 1:

# Input: [1,2,3,1]
# Output: true
# Example 2:

# Input: [1,2,3,4]
# Output: false

def contains_duplicate(nums):
    # Create a set to store unique numbers
    seen = set()
    
    # Iterate through the list of numbers
    for num in nums:
        # If the number is already in the set, return True
        if num in seen:
            return True
        # Otherwise, add the number to the set
        seen.add(num)
    
    # If no duplicates are found, return False
    return False

# Example usage:
nums1 = [1, 2, 3, 1]
nums2 = [1, 2, 3, 4]
print(contains_duplicate(nums1))  # Output: True
print(contains_duplicate(nums2))  # Output: False
