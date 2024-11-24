class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        place_count = 0
        i = 1

        # No flowers to place
        if n == 0:
            return True

        # first cell check
        if len(flowerbed) == 1 and flowerbed[0] == 0 and n == 1:
            return True


        if flowerbed[0] == 0 and flowerbed[1] == 0:
            place_count += 1
            flowerbed[0] = 1

        # middle cells
        while i < len(flowerbed)-1:
            if flowerbed[i] == 0:
                if flowerbed[i-1] == 0:
                    if flowerbed[i+1] == 0:
                        place_count += 1
                        flowerbed[i] = 1
            i += 1

        # last cell check
        if flowerbed[-1] == 0 and flowerbed[-2] == 0:
            place_count += 1
            flowerbed[-1] = 1

        if place_count >= n:
            return True
        else:
            return False


        