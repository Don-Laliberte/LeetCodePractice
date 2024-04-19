class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        #1.Use the set method to slice the list into unique values
        #2.Multiply the sum of this unique list by two to simulate each number hypothetically having a pair
        #3.Subtract it by the sum of the normal list to reveal the one integer that doesn't have another pair
        return 2 * sum(set(nums)) - sum(nums)


        