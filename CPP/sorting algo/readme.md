<h1>Bubble sort Algorithm</h1>

 we will discuss the Bubble sort Algorithm. The working procedure of bubble sort is simplest. This article will be very helpful and interesting to students as they might face bubble sort as a question in their examinations. So, it is important to discuss the topic.

Bubble sort works on the repeatedly swapping of adjacent elements until they are not in the intended order. It is called bubble sort because the movement of array elements is just like the movement of air bubbles in the water. Bubbles in water rise up to the surface; similarly, the array elements in bubble sort move to the end in each iteration.

Although it is simple to use, it is primarily used as an educational tool because the performance of bubble sort is poor in the real world. It is not suitable for large data sets. The average and worst-case complexity of Bubble sort is O(n2), where n is a number of items.

***<h3>Algorithm</h3>***

```
begin BubbleSort(arr)  
   for all array elements  
      if arr[i] > arr[i+1]  
         swap(arr[i], arr[i+1])  
      end if  
   end for     
   return arr     
end BubbleSort  
```
