class Solution:
    def isPalindrome(self, s: str) -> bool:
        # Empty string is palindrome
        if s is None:
            return True

        # Strip non-alpha by iterating though old string, and only adding letters to the new one
        new_str = ""
        i = 0
        while i < len(s):
            char = s[i]
            if char.isalnum():
                new_str = new_str + char.lower()
            i += 1

        print(new_str)


        # Index variables
        pointer1 = 0
        pointer2 = len(new_str)-1

        # two pointers to check from either side simultaneously
        while (pointer1 is not pointer2) and (pointer1 < len(new_str)):

            # If letters do not match; break early and return false
            if new_str[pointer1] is not new_str[pointer2]:
                return False

            pointer1 += 1
            pointer2 -= 1

        # All letters must have matched, return true
        return True