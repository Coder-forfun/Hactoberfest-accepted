import java.util.*;

/**
 * @author Ayan1089
 * @since 1.0.0
 */
class RadixSort {

  // Method to counting sort w.r.t to the digit in exponent
  static void countingSort(int array[], int n, int exponent)
  {
    int[] output = new int[n]; // output array
    int i;
    int[] count = new int[10];
    Arrays.fill(count, 0);

    for (i = 0; i < n; i++)
      count[(array[i] / exponent) % 10]++;

    for (i = 1; i < 10; i++)
      count[i] += count[i - 1];

    // Creating the output array
    for (i = n - 1; i >= 0; i--) {
      output[count[(array[i] / exponent) % 10] - 1] = array[i];
      count[(array[i] / exponent) % 10]--;
    }

    for (i = 0; i < n; i++)
      array[i] = output[i];
  }

  // Getting the maximum value of the array
  static int getMaxValue(int max_arr[], int n)
  {
    int max = max_arr[0];
    for (int i = 1; i < n; i++)
      if (max_arr[i] > max)
        max = max_arr[i];
    return max;
  }

  public static void main(String[] args)
  {
    int[] array = { 19, 0, 77, 219, 69, 21 , 18 };
    int n = array.length;

    // Find the maximum number to know number of digits
    int m = getMaxValue(array, n);


    // exponent is passed here for counting sort
    for (int exp = 1; m / exp > 0; exp *= 10)
      countingSort(array, n, exp);

    //Print the output
    for (int j : array) System.out.print(j + " ");
  }
}