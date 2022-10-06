class Solution {
  public:
    int min(int a, int b) { return a < b ? a : b; }
    int countSetBits(int n) {
        int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    string lexicographicallySmallest(string str, int k) {
        // if length is power of 2 then k divide by 2
        if (countSetBits(str.size()) == 1) k /= 2;
        // else multiplly k  with 2
        else
            k *= 2;
        // if k is greater then size of string then return -1
        if (k >= str.size()) return "-1";
        // a for stroring 1
        int a[str.size()], i, j;
        // mark all position with 1
        for (i = 0; i < str.size(); i++) a[i] = 1;
        // iterate string
        for (i = 0; i < str.size();) {
            // starting index
            int start = i;
            // position of start
            int index = start;
            // ending index
            int end = min(start + k, str.size() - 1);
            // initialize min as start
            char minn = str[start];
            // iterate from start to end
            for (j = start + 1; j <= end; j++) {
                // checking for min and storing value and index of min
                if (str[j] < minn) {
                    minn = str[j];
                    index = j;
                }
            }
            // mark all max 0 before min
            for (j = index - 1; j >= start and k != 0; j--) {
                a[j] = 0;
                k--;
            }
            // change i to next of last index
            i = index + 1;
        }
        // if k is not zero do the same as before
        if (k) {
            for (i = str.size() - 1; i >= 0 and k != 0; i--) {
                if (a[i]) {
                    a[i] = 0;
                    k--;
                }
            }
        }
        // res for storing resulting string
        string res = "";
        // storing resulting string
        for (i = 0; i < str.size(); i++) {
            if (a[i]) {
                res += str[i];
            }
        }
        // return string
        return res;
    }
};
