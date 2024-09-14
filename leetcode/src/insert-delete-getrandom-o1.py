# https://leetcode.com/problems/insert-delete-getrandom-o1/
import random
class RandomizedSet:

    def __init__(self):
        self.indexes = dict()
        self.array = []

    def insert(self, val: int) -> bool:
        if val in self.indexes:
            return False
        
        self.array.append(val)
        self.indexes[val] = len(self.array)-1
        return True

    def remove(self, val: int) -> bool:
        if val not in self.indexes:
            return False
        val_index = self.indexes[val]

        last_val = self.array[-1]
        last_index = len(self.array)-1
        
        self.array[val_index] = last_val
        self.indexes[last_val] = val_index

        del self.indexes[val]
        self.array.pop()
        return True

    def getRandom(self) -> int:
        return random.choice(self.array)


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()