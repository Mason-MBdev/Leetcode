class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        # Find max candy before extras are given
        max_candy = 0
        for candy in candies:
            temp = candy
            if candy > max_candy:
                max_candy = candy

        # Determine results array
        results = []
        for candy in candies:
            extra_sum = extraCandies + candy
            if extra_sum >= max_candy:
                results.append(True)
            else:
                results.append(False)

        return results