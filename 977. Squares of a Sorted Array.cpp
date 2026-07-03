class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        n=len(nums)
        b=[]
        for i in range(0,n):
            b.append(nums[i]*nums[i])
        b.sort()
        return b
