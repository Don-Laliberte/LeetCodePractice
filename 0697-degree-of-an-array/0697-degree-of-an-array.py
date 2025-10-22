from typing import List

class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        mapped_data = {} 

        for i, num in enumerate(nums):
            if num not in mapped_data:
                mapped_data[num] = [1, i, i]
            else:
                mapped_data[num][0] += 1
                mapped_data[num][2] = i
        
        max_freq = 0
        for data in mapped_data.values():
            max_freq = max(max_freq, data[0])

        min_length = len(nums)

        for data in mapped_data.values():
            freq, first_index, last_index = data[0], data[1], data[2]
            
            if freq == max_freq:

                current_length = last_index - first_index + 1
                
                min_length = min(min_length, current_length)

        return min_length