'''
Binary Search
'''

class BinarySearch:
    def __init__(self, arr, val):
        self.arr = arr
        self.val = val

    def bubsortArray(self):
        for i in range(len(self.arr)):
            for j in range(len(self.arr)-1):
                if self.arr[i] < self.arr[j]:
                    self.arr[i], self.arr[j] = self.arr[j], self.arr[i]
        return self.arr

    def selectsortArray(self):
        for i in range(len(self.arr)):
            for j in range(i+1, len(self.arr)):
                if self.arr[i] > self.arr[j]:
                    self.arr[j], self.arr[i] = self.arr[i], self.arr[j]
        return self.arr

    def insertsortArray(self):
        for i in range(len(self.arr)):
            for j in range(i ,0 , -1):
                if self.arr[j] < self.arr[j-1]:
                    self.arr[j], self.arr[j-1] = self.arr[j-1], self.arr[j]
        return self.arr

    def binarySearch(self):
        # self.arr = self.bubsortArray()
        # self.arr = self.selectsortArray()
        self.arr = self.insertsortArray()
        beg = 0
        end = len(self.arr)-1
        mid = 0

        while beg < end:
            mid = (beg + end)//2
            if self.arr[mid] == self.val:
                return mid+1
            elif self.arr[mid] < self.val:
                beg = mid+1
            else:
                end = mid-1

        return -1

if __name__ == "__main__":
    obj = BinarySearch([4,1,7,3,8,2,9,5,6], 5)
    print("Element not present." if obj.binarySearch == -1 else f"Element found at position: {obj.binarySearch()}.")