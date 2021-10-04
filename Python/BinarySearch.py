    # Python program for recursive binary search.  
    # Returns index position of n in list1 if present, otherwise -1  
    def binary_search(list1, low, high, n):   
      
       # Check base case for the recursive function  
       if low <= high:  
      
          mid = (low + high) // 2  
      
          # If element is available at the middle itself then return the its index  
          if list1[mid] == n:   
             return mid   
      
          # If the element is smaller than mid value, then search moves  
          # left sublist1  
          elif list1[mid] > n:   
             return binary_search(list1, low, mid - 1, n)   
      
          # Else the search moves to the right sublist1  
          else:   
             return binary_search(list1, mid + 1, high, n)   
      
       else:   
          # Element is not available in the list1  
          return -1  
      
    # Test list1ay   
    list1 = [12, 24, 32, 39, 45, 50, 54]  
    n = 32  
      
    # Function call   
    res = binary_search(list1, 0, len(list1)-1, n)   
      
    if res != -1:   
       print("Element is present at index", str(res))  
    else:   
       print("Element is not present in list1")  