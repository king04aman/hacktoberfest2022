 #Insertion sort definition 
def insertionSort(arr): 

    for i in range(1, len(arr)): 

        key = arr[i] 

        # Shifting elements of arr[0..i-1], that are 
        # greater than key, to one position ahead 
        # of their current position 
        j = i-1
        while j >=0 and key < arr[j] : 
                arr[j+1] = arr[j] 
                j -= 1
        arr[j+1] = key 


# Driver code to test above 
arr = [15, 2, 56, 17,11] 
insertionSort(arr) 

print ("Sorted array is:") 
for i in range(len(arr)): 
    print ("%d" %arr[i])

# By: Max Müller