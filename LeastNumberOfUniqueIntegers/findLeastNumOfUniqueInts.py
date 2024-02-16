class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        count = Counter(arr)
        elems = sorted(count.items(), key=lambda x: x[1])
        remaining = len(elems)
        for key, freq in elems:
            if k >= freq:
                k -= freq
                remaining -= 1
            else:
                break
        return remaining
