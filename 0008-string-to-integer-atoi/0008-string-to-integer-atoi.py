class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        #Ignore Whitespaces
        #If not at end of string check for postive or negative operators
        #Else assume integer is postive
        #Keep reading until a non-digit char or end is reached (while loop)
        #Assume leading zero's are not relevant
        #If the interger is out of the 32-bit integer range "clamp it"
        #Return integer at the end of loop termination
        

        #Clear whitespaces and return 0 if empty
        ls = list(s.strip())
        if len(ls) == 0:
            return 0

        #Declare sign variable
        sign = 1

        #Handle whether it has a postive or negative symbol
        if ls[0] == '-':
            sign = -1
            ls = ls[1:] #Slice out "index 1 to end"
        elif ls[0] == '+':
            ls = ls[1:] #Slice out "index 1 to end"
        
        #Declare final result variable and iterator variable
        result, i = 0, 0

        #Convert string digits to int
        #Each iteration moves a number place, multiply by 10
        #Use ord to return unicode of char
        #Ex. Uni code for 9 is ord(9) - ord(0), which is equivalent to 57 - 48 = 9
        while i < len(ls) and ls[i].isdigit():
            result = result * 10 + ord(ls[i]) - ord('0')
            i += 1

        #Clamps integer value to 32-bit signed integer range and returns result
        return max(-2**31, min(sign * result, 2**31-1))






        