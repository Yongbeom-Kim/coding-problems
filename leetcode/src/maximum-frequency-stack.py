# https://leetcode.com/problems/maximum-frequency-stack/
class FreqStack:

    def __init__(self):
        self.val_to_freq = dict()
        self.freq_to_stack = dict()
        self.max_freq = 0

    def push(self, val: int) -> None:
        freq = self.val_to_freq.get(val, 0) + 1
        self.val_to_freq[val] = freq
        if freq not in self.freq_to_stack:
            self.freq_to_stack[freq] = []
        
        self.freq_to_stack[freq].append(val)
        self.max_freq = max(self.max_freq, freq)
        

    def pop(self) -> int:
        val = self.freq_to_stack[self.max_freq].pop()
        if not self.freq_to_stack[self.max_freq]:
            del self.freq_to_stack[self.max_freq]
            self.max_freq -= 1
        self.val_to_freq[val] -= 1
        return val
        


# Your FreqStack object will be instantiated and called as such:
# obj = FreqStack()
# obj.push(val)
# param_2 = obj.pop()