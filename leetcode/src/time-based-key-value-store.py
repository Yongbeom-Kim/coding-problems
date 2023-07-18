class TimeMap:

    def __init__(self):
        self.key_map = []
        self.timestamps = []
        self.timestamp_index = dict()

    def set(self, key: str, value: str, timestamp: int) -> None:
        self.key_map.append((key, value))
        self.timestamps.append(timestamp)
        self.timestamp_index[timestamp] = len(self.key_map)-1

    def get(self, key: str, timestamp: int) -> str:
        timestamp_new = self.get_nearest_leq_timestamp(timestamp)
        if timestamp_new > timestamp:
            return ""
        timestamp = timestamp_new
        for i in range(self.timestamp_index[timestamp], -1, -1):
            if (self.key_map[i][0] == key):
                return self.key_map[i][1]
        
        return ""

    def get_nearest_leq_timestamp(self, timestamp):
        lo = 0
        hi = len(self.timestamps)-1
        while(lo < hi):
            mid = (lo+hi)//2
            if (self.timestamps[mid] == timestamp):
                return timestamp
            if (self.timestamps[mid] < timestamp):
                lo = mid + 1
            if (self.timestamps[mid] > timestamp):
                hi = mid - 1
        lo -= int(self.timestamps[lo] > timestamp)

        return self.timestamps[lo]

# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)