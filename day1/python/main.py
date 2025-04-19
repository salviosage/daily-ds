from collections import Counter

def firstUniqChar( s: str) -> int:
    count = Counter(s)
    for i, char in enumerate(s):
        if count[char] == 1:
            return i
    return -1