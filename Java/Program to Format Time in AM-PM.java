// Java program to convert 24 hour
// time format to 12 hour format
 
// Importing generic java libraries
import java.util.*;
 
class GFG {
 
    // Function converting entered values to String type
    static void convertTime(String time)
    {
        String format;
 
        // Parsing hours, minutes and seconds in array
        String[] arr = time.split(":");
 
        // Converting hours into integer
        int hh = Integer.parseInt(arr[0]);
 
        if (hh > 12) {
            hh = hh - 12;
            format = "PM";
        }
        else if (hh == 00) {
            hh = 12;
            format = "AM";
        }
        else if (hh == 12) {
            hh = 12;
            format = "PM";
        }
        else {
            format = "AM";
        }
 
        // Converting hh to String and
        // padding it with 0 on left side
        String hour = String.format("%02d", hh);
        String minute = arr[1];
        String second = arr[2];
 
        // Printing formatted time
        System.out.print("Time in 12-hour format is : ");
        System.out.print(hour + ":" + minute + ":" + second
                         + " " + format);
    }
 
    // Main driver code
    public static void main(String[] args)
    {
        // Taking input from the user via Scanner class
        Scanner sc = new Scanner(System.in);
 
        // Asking from user to enter
        // time in 24 format
        System.out.println(
            "Enter the time in 24-hour format : ");
 
        /* User: Remember to enter time in below format
                 Enter in this format - '14:02:45' */
        String time = sc.nextLine();
 
        // Passing time as entered above as parameter
        // wher efunrion isn
        convertTime(time);
    }
}
