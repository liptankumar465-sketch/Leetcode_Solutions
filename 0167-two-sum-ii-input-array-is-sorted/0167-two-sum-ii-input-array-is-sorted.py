class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        l, r = 0, len(numbers) - 1

        while l <= r:
            sum_of_num = numbers[l] + numbers[r]
            
            if sum_of_num == target:
                return [l+1, r+1]
            elif sum_of_num < target:
                l = l + 1
            else:
                r = r - 1
        
        return []