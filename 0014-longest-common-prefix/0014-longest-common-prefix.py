class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        #If list is empty 
        if not strs:
            return ""

        #Finds the shortest string in the list and stores reference
        #This saves time
        min_len_str = min(strs, key=len)
    
        #Loop through characters of the shortest string using enumerate to have an index value
        for i, char in enumerate(min_len_str):
            #Check if character at index i is not common among all strings, otherwise keep looping
            if any(s[i] != char for s in strs):
                #Cull the current index and keep everything before it and return result
                #Effectively returning a common prefix
                return min_len_str[:i]
    
        #If all characters matched, return the shortest string itself
        return min_len_str
        