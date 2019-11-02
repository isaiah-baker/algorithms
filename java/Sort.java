package com.company;
import java.util.Random;


public class Sort {

    public static int[] generateArrayOfInts(int size) {

        Random rd = new Random(); // creating Random object
        int[] arr = new int[size];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = rd.nextInt(); // storing random integers in an array
//            System.out.println(arr[i]); // printing each array element
        }
        return arr;
    }


    public static int[] mergeSort(int array[]) {
        // pre: array is full, all elements are valid integers (not null)
        // post: array is sorted in ascending order (lowest to highest)

        // if arr has more than 1 element we need to split and merge the sorted halves
        if (array.length > 1) {
            // sub array 1 always has the smaller of halves
            int elementsInA1 = array.length / 2;
            int elementsInA2 = elementsInA1;
            if ((array.length % 2) == 1) {
                elementsInA2 += 1;
            }

            // declare and initialize the array once the sizes have been determined
            int arr1[] = new int[elementsInA1];
            int arr2[] = new int[elementsInA2];

            // copy the first part of 'array' into 'arr1', causing arr1 to become full
            for (int i = 0; i < elementsInA1; i++) {
                arr1[i] = array[i];
            }

            // copy the remaining elements into arr2
            for (int i = elementsInA1; i < elementsInA2 + elementsInA1; i++) {
                arr2[i - elementsInA1] = array[i];
            }

            // recursively call mergeSort on each of the two sub-arrays that we've just created // note: when mergeSort returns, arr1 and arr2 will both be sorted!
            arr1 = mergeSort(arr1);
            arr2 = mergeSort(arr2);

//          declare indexes used for merging [i] stores the index of main arr; [j] stores element of arr1 being compared; [k] stores element of arr2 being compared;
            int i = 0, j = 0, k = 0;

            // the below loop will run until one of the sub-arrays becomes empty
            // in my implementation, it means until the index equals the length of the sub-array
            while (arr1.length != j && arr2.length != k) {
                if (arr1[j] < arr2[k]) {
                    // copy current element of arr1 into the final array
                    array[i] = arr1[j];

                    //increase index of final array
                    i++;

                    // increase index of arr1
                    j++;
                } else {
                    // copy the current element of arr1 into the final array
                    array[i] = arr2[k];

                    i++;
                    k++;
                }
            }

            // at this point, one of the sub-arrays has been exhausted and there are no more
            // elements in it to compare. this means that all the elements in the remaining
            // array are the highest (and sorted), so it's safe to copy them all into the
            // final array.

            while (arr1.length != j) {
                array[i] = arr1[j];
                i++;
                j++;
            }
            while (arr2.length != k) {
                array[i] = arr2[k];
                i++;
                k++;
            }
        }
        return array;
    }
}


