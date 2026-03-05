# Product of Array Except Itself


# 1

# Problem Statement: Given an array arr[] of integers, you need to return the product of given array elements except including the element itself.

# Examples
# Example 1:
# Input: N = 5, array[] = {1,2,3,4,5}
# Output: 120 60 40 30 24
# Explanation:
# For 0th index, excluding 1 from product of whole array will give 120
# For 1th index, excluding 2 from product of whole array will give 60
# For 2nd index , excluding 3 from product of whole array will give 40
# For 3rd index, excluding 4 from product of whole array will give 30
# For 4th index , excluding 5 from product of whole array will give 24

def product_except_self(nums):
    n = len(nums)
    output = [1] * n
    
    # Calculate the product of elements to the left of each index
    left_product = 1
    for i in range(n):
        output[i] *= left_product
        left_product *= nums[i]
    
    # Calculate the product of elements to the right of each index
    right_product = 1
    for i in range(n - 1, -1, -1):
        output[i] *= right_product
        right_product *= nums[i]
    
    return output

# Example usage:
nums = [1, 2, 3, 4, 5]
result = product_except_self(nums)
print(result)  # Output: [120, 60, 40, 30, 24]
