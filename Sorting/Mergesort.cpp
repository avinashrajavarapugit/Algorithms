class Solution {
public:
    void merge(int left, int right, int mid, vector<int>& a) {
        int leftSize = mid - left + 1, rightSize = right - mid;
        vector<int> arrayLeft(leftSize), arrayRight(rightSize);
        
        for (int i = 0; i < leftSize; i++) arrayLeft[i] = a[left + i];
        for (int i = 0; i < rightSize; i++) arrayRight[i] = a[mid + 1 + i];

        int leftInd = 0, rightInd = 0, ind = left;

        while (leftInd < leftSize && rightInd < rightSize) {
            if (arrayLeft[leftInd] < arrayRight[rightInd])
                a[ind++] = arrayLeft[leftInd++];
            else
                a[ind++] = arrayRight[rightInd++];
        }
        while (leftInd < leftSize) a[ind++] = arrayLeft[leftInd++];
        while (rightInd < rightSize) a[ind++] = arrayRight[rightInd++];
    }

    void mergeSort(int left, int right, vector<int>& a) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(left, mid, a);
            mergeSort(mid + 1, right, a);
            merge(left, right, mid, a);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(0, nums.size() - 1, nums);
        return nums;
    }
};
