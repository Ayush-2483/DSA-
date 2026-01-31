class NumArray {
    vector<int> segTree;
    int size;

    int buildST(int i, int l, int r, vector<int>& nums) {
        if (l == r) {
            segTree[i] = nums[l];
            return segTree[i];
        }
        int mid = l + (r - l) / 2;
        int left = buildST(2 * i + 1, l, mid, nums);
        int right = buildST(2 * i + 2, mid + 1, r, nums);
        segTree[i] = left + right;
        return segTree[i];
    }

    void updateST(int i, int l, int r, int idx, int val) {
        if (l == r) {
            segTree[i] = val;
            return;
        }
        int mid = l + (r - l) / 2;
        if (idx <= mid)
            updateST(2 * i + 1, l, mid, idx, val);
        else
            updateST(2 * i + 2, mid + 1, r, idx, val);
        segTree[i] = segTree[2 * i + 1] + segTree[2 * i + 2];
    }

    int queryST(int i, int l, int r, int ql, int qr) {
        if (ql <= l && r <= qr)
            return segTree[i];
        if (r < ql || l > qr)
            return 0;
        int mid = l + (r - l) / 2;
        return queryST(2 * i + 1, l, mid, ql, qr) +
               queryST(2 * i + 2, mid + 1, r, ql, qr);
    }

public:
    NumArray(vector<int>& nums) {
        size = nums.size();
        if (size == 0) return;
        segTree.resize(4 * size);
        buildST(0, 0, size - 1, nums);
    }

    void update(int index, int val) {
        updateST(0, 0, size - 1, index, val);
    }

    int sumRange(int left, int right) {
        return queryST(0, 0, size - 1, left, right);
    }
};


/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */