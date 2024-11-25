class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        new_string = ""
        char1 = ""
        char2 = ""
        index = 0
        max_len = max(len(word1), len(word2))
        while(index <= max_len-1):
            if ((index <= len(word1)-1) and (word1[index])):
                new_string += word1[index]

            if ((index <= len(word2)-1) and (word2[index])):
                new_string += word2[index]

            index += 1

        return new_string