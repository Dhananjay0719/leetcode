class Solution:
    def isPalindrome(self, s: str) -> bool:
        def isAlphaNum(s,i):
            ascval=ord(s[i])

            if(48<=ascval<=57 or 97<=ascval<=122):
                return True
            
            return False

        s=s.lower()
        i,j=0,len(s)-1

        while i<j:
            if not isAlphaNum(s,i):
                i+=1
                continue
            if not isAlphaNum(s,j):
                j-=1
                continue       
            if(s[i]==s[j]):
                i+=1
                j-=1
            else:
                return False

        return True

        