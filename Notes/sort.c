// sorting algorithm

//[2,1,3,5,4] => [1,2,3,4,5]
// selection sort algorithm

/*
Min = i
for (i) {
    for (j) {
        is Min > j? Min = j     // would return that min is one
    }
}
*/

// keeps moving through the loop and moving the min value forward until everything is sorted
// it is gonna mutate the original array

// Time complexity: O(n^2)
// So this is not the most efficient algorithm for sorting, but it is simple and easy to understand. It works well for small datasets, but for larger datasets, more efficient algorithms like quicksort or mergesort are preferred. (too slow since you have to go through the entire array for each element to find the minimum value)

// Space complexity: O(1)
// So this is an in-place sorting algorithm, meaning it does not require any additional space for sorting the array. It sorts the array by swapping elements in place, which makes it memory efficient.
