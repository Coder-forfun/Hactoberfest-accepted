public class ArrayFullNotes {
    /*
    -Array is data structure use to store a collection of data

    syntax of array:
    datatype[] variable_name = new datatype[size];

    e.g. we want to store roll numbers:

    int[] rollnos = new int[5];

    int -> represents the type of the data stored in array.

    or you can directly stored in this manner:
    int[] rnos = {1,2,3,4,5};
    **all type of the data in the array should be same!

    Internal working of array:
    int[] rnos; ( this is declaration of array )
    roll numbers are getting defined in the stack.

    rnos = new int[5]; (initialization )
    actually memory allocation happens here .
    here, objects is being defined in the heap memory.

    declaration of array are done in the compile time and
    initialization of the array are done in the runtime
    e.g. int[] arr = new int[5];
    this above concept is known as dynamic memory allocation which means at runtime or execution time memory allocated.

    * Internal representation of array:
    Internally, in the java memory allocation totally depends on JVM whether it is continuous or not!

    reason1: objects are stored in the heap memory

    reason2: In JLS (Java language Specification) it is mentioned that heap objects are not continuous.

    reason3: Dynamic memory allocation. hence, array objects in java may not be continuous (depends on JVM).

    *index of any array is count start from 0.
    suppose to change the value in the array,
    e.g. arr[5] -> now the 5th element is being changed.

    ** new keyword:
    e.g. int[] arr = NEW int[5];
    new: is used to store an object
    it will create an object in heap memory of array size 5.
    -> if we don't provide values in the array , internally by default it stores [0,0,0,0,0] for above size of array.

    * String example:
    String[] arr = new String[4];
    -> arr is stored in stack memory
    -> if we don't provide any value in the array then by default vale is "NULL".

    -> primitives int, char, float etc. are stored in stack memory.
    -> all other objects are stoered in heap memory.

    ** Arrays.tostring(array) -> internally uses for loop and gives the output in the proper format.

    ** in array, since we can chnage the objects hence they are mutable.
    ** Strings are immutable.

    ***** 2D array:

    syntax of 2D array:
    int[][] arr = new int[size][size];

    **Arraylists:

    Arraylist is a part of collection framework and is present in the java.util.package.
    it provides us dynamic arrays in java.

    if array list is fulled then he create another arraylist double of that size and copy the previous elemnets are present int 1st arrayliist and delete the 1st fullest arraylist.

     */
}
