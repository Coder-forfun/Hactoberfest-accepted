'''
Cycle Sort is a algorithm which you can use when they give you the term 0 or 1 - N
Here all the elements are sorted in from 0,1,2 - N in ascending order
So every element must be in arr[element - 1] pos if the min in arr is 1 else arr[element] if min in arr is 0.
So we can just traverse to the array and just make swaps based on above condition
Time complexity - O(N); Space Complexity - O(1) but wont work if the order is not 0,1 - N
'''

def cyclic_sort(nums):
	i = 0
	while i < len(nums):
		# correct = nums[i] #  ---> if zero is  included in the list
		correct = nums[i] - 1 #---> if zero is not included in the list
		if nums[i] < len(nums) and nums[i] != nums[correct]:
			nums[i], nums[correct] = nums[correct], nums[i]
		else:
			i += 1
	return nums


if __name__ == '__main__':
    arr = [6,4,2,3,5,1]