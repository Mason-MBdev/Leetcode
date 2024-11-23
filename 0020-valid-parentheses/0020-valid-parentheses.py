class Solution:
    def isValid(self, s: str) -> bool:
        stack = [0]

        # iterate through the string
        for char in s:
            # Append opening brackets to the stack
            if char == "(" or char == "{" or char == "[":
                stack.append(char)

            # If char matches a closing bracket, check the top of stack for the matching opening bracket
            # And if it matches, pop that bracket from the stack. Otherwise return false because it is invalid
            if (char == ")"):
                if (stack[-1] == "("):
                    stack.pop()

                else:
                    return False

            elif (char == "}"):
                if (stack[-1] == "{"):
                    stack.pop()

                else:
                    return False

            elif (char == "]"):
                if (stack[-1] == "["):
                    stack.pop()

                else:
                    return False

        # If the stack is empty, then that means all opening brackets have found their closing brackets and in the correct order
        if len(stack) == 1:
            return True
        else:
            return False