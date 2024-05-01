class Solution(object):
    def reversePrefix(self, word, ch):
        n=len(word)
        for i in range(n):
            if word[i]==ch:
                return word[i::-1]+word[i+1:n]
        return word