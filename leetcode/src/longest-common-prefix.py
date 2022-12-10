class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        pos = -1;
        minL = len(strs[0])
        for s in strs:
            minL = min(minL, len(s));
        
        if (len(strs) == 1):
            return strs[0];
        
        for i in range(minL):
            if (pos != -1):
                break;
            for j in range(len(strs)-1):
                if (strs[j][i] != strs[j+1][i]):
                    pos = i
                    break;
        
        if (pos == -1):
            pos = minL;

        return strs[0][0:pos];
        