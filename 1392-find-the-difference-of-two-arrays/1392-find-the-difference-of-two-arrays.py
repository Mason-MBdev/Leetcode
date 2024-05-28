class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        answer1 = []
        answer0 = []
        
        for num in nums1:
            if (num not in nums2) and (num not in answer0):
                answer0.append(num)
        
        for num in nums2:
            if (num not in nums1) and (num not in answer1):
                answer1.append(num) 

        answer = [answer0, answer1]
        return answer