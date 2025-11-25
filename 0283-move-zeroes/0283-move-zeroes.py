class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        start,trv=0,1

        for trv in range(len(nums)):
            if(nums[trv]!=0):
                nums[start],nums[trv]=nums[trv],nums[start]
                start+=1