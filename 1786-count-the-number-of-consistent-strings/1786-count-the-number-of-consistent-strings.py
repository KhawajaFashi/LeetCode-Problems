# class Solution:
#     def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
#         a = 0
#         for i in range(len(words)):
#             for j in range(len(words[i])):
#                 if words[i][j] in allowed:
#                     pass
#                 else:
#                     a -= 1
#                     break
#             a += 1
#         return a
class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        allowed = set(allowed)
        count = 0

        for word in words:
            for letter in word:
                if letter not in allowed:
                    count += 1
                    break

        return len(words) - count
