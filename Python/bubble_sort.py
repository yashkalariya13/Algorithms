def bubble_sort(array):
	for i in range(len(array) - 1):
		for i in range(len(array)-1):
			if array[i+1] < array[i]:
				greater = array[i+1]
				array[i+1] = array[i]
				array[i] = greater

	return array

if __name__ == '__main__':
	print(bubble_sort([5, 10, 15, 3]))
