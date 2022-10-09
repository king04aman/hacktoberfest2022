class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        dict1= {}
        for word in strs:
            sorted_word = "".join(sorted(word))
            if sorted_word not in dict1:
                dict1[sorted_word]=[word]
            else:
                dict1[sorted_word].append(word)
        result = []
        for words in dict1.values():
            result.append(words)
        return result
            
