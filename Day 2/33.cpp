class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int i = 0;
        int j = nums.size() - 1;
        int pivot = 0;

        while (i < j)
        {
            int mid = (i + j) / 2;
            if (abs(mid - i) == 1 && nums[mid] < nums[i])
            {
                pivot = mid;
                break;
            }
            if (abs(mid - j) == 1 && nums[mid] > nums[j])
            {
                pivot = mid;
                break;
            }

            if (nums[i] < nums[mid])
            {
                i = mid;
                continue;
            }
            if (nums[j] > nums[mid])
            {
                j = mid;
                continue;
            }
        }

        if (nums[pivot] == target)
            return pivot;

        i = 0;
        j = pivot;
        while (i < j)
        {
            if (nums[i] == target)
                return i;
            if (nums[j] == target)
                return j;

            int mid = (i + j) / 2;

            if (nums[mid] >= target)
            {
                j = mid;
            }
            else
            {
                i = mid + 1;
            }
        }
        i = pivot;
        j = nums.size() - 1;
        while (i < j)
        {
            if (nums[i] == target)
                return i;
            if (nums[j] == target)
                return j;
            int mid = (i + j) / 2;

            if (nums[mid] >= target)
            {
                j = mid;
            }
            else
            {
                i = mid + 1;
            }
        }

        return -1;
    }
};