class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        numS=nums[0]
        numF=nums[0]
        cnt=0
        while(numS!=numF or cnt==0):
            cnt=1
            numS=nums[numS]
            numF=nums[nums[numF]]

        slow=nums[0]
        fast=numF
        while(slow!=fast):
            slow=nums[slow]
            fast=nums[fast]    
        return fast