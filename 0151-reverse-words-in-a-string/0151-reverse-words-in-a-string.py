class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        output = ""

        # split the strong by whitespace and reverse the list
        words = s.split(" ")
        reversed_words = words[::-1]

        # iterate through list and add to output string (if 'word')
        for word in reversed_words:
            if word != "":
                output += word + " "

        # remove the last whitespace
        return output[:-1]