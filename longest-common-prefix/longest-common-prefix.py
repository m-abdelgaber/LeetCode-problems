class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs)==0:
            return ""
        common = strs[0]
        for i in range(1, len(strs)):
            contender = strs[i]
            if(len(common)<= len(contender)):
                short_word = common
                long_word = contender
            else:
                short_word = contender
                long_word = common
            new_comm = ""
            for j in range(0, len(short_word)):
                if(long_word[j] == short_word[j]):
                    new_comm += short_word[j]
                else:
                    break
            common = new_comm
            if(common ==""):
                break
        return common