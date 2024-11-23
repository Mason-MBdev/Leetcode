class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        new_map = set()
        
        # Iterate, check new array for number, add unique number to new array
        for num in nums:
            if num in new_map:
                return True
            new_map.add(num)
        
        # no duplicates found while iterating, return no duplicates
        return False