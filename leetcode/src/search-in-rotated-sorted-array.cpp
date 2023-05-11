class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int lo = 0;
        int hi = nums.size() - 1;
        int mid = (hi - lo) / 2 + lo;

        while (lo <= hi)
        {
            int mid = (hi - lo) / 2 + lo;
            if (nums[mid] == target)
            {
                return mid;
            }

            if (nums[lo] <= nums[mid] && nums[lo] <= target && target < nums[mid])
            {
                hi = mid - 1;
            }
            else if (nums[lo] <= nums[mid])
            {
                lo = mid + 1;
            }
            else if (nums[mid] < target && target <= nums[hi])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        return -1;
    }
};