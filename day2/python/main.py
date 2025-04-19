from collections import Counter
from typing import List

def top_k_frequent(nums: List[int], k: int) -> List[int]:
    count = Counter(nums)
    return [item for item, _ in count.most_common(k)]
