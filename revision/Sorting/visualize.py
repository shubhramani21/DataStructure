import numpy as np
import matplotlib.pylab as plt

def bubbleSort(lst):
    x = np.arange(0, len(lst), 1)
    n = len(lst)

    # Display the initial unsorted list
    plt.bar(x, lst)
    plt.title("Initial Unsorted List")
    plt.show()

    # Bubble Sort visualization with swap highlighting
    
    # last = 0
    for i in range(n):
        
        for j in range(n - 1 - i):
            bar_colors = ['blue'] * len(lst)
            plt.clf()  # Clear the previous plot
            # last  = j+1
            # Default color is blue
            
            if lst[j] > lst[j + 1]:
                # Highlight the bars that are being swapped
                bar_colors[j] = 'red'
                bar_colors[j + 1] = 'red'
                
                # Swap the elements
                lst[j], lst[j + 1] = lst[j + 1], lst[j]
            
            # Plot the current state of the list with highlighted bars
            plt.bar(x, lst, color=bar_colors)
            plt.title("Bubble Sort in Progress")
            plt.pause(0.00001)
        
        # bar_colors[last] = 'green'
        # After each complete pass, clear the plot to avoid leftover red bars
        # plt.clf()

    # Display the final sorted list
    plt.bar(x, lst, color='green')
    plt.title("Sorted List")
    plt.show()

def selectionSort(arr):

    x = np.arange(0, len(arr), 1)

    plt.bar(x, arr)
    plt.title("Initial Unsorted List")
    plt.show()

    for i in range(len(arr)):
        mini = i
        for j in range(i, len(arr)):
            plt.clf()


            bar_color = ['blue'] * len(arr)
            

            if(arr[mini] > arr[j]):
                mini = j
            
        
        if(mini != i):
            # swap(arr[min],arr[i])
            bar_color[mini] = 'red'
            bar_color[i] = 'red'
            arr[mini],arr[i] = arr[i], arr[mini]

        plt.bar(x, arr, color=bar_color)
        plt.title("Selection Sort in Progress")
        plt.pause(0.001)
        plt.clf()
    
    return arr

def insertionSort(arr):

    x = np.arange(0, len(arr), 1)

    plt.bar(x, arr)
    plt.title("Initial Unsorted List")
    plt.show()
    for i in range(len(arr)):
        plt.clf()
        bar_color = ['blue'] * len(arr)
        j = i
        while(j > 0 and arr[j-1] > arr[j]):

            bar_color[j-1] = 'red'
            bar_color[j] = 'green'
            arr[j-1] , arr[j] = arr[j],arr[j-1]
            j-=1

            plt.bar(x, arr, color=bar_color)
            plt.title("Selection Sort in Progress")
            plt.pause(0.001)
            plt.clf()

    plt.bar(x, arr, color='green')
    plt.title("Sorted List")
    plt.show()
    return arr


def merge(arr, low, mid, high):
    temp = []
    left = low
    right = mid + 1

    # Highlight the subarray being merged
    for i in range(len(arr)):
        if i >= low and i <= high:
            plt.bar(i, arr[i], color='red')
        else:
            plt.bar(i, arr[i], color='blue')
    plt.pause(0.01)
    plt.clf()

    while left <= mid and right <= high:
        if arr[left] <= arr[right]:
            temp.append(arr[left])
            left += 1
        else:
            temp.append(arr[right])
            right += 1

    while left <= mid:
        temp.append(arr[left])
        left += 1

    while right <= high:
        temp.append(arr[right])
        right += 1

    for i in range(low, high + 1):
        arr[i] = temp[i - low]

    # Show the array after merging
    for i in range(len(arr)):
        if i >= low and i <= high:
            plt.bar(i, arr[i], color='green') 
        else:
            plt.bar(i, arr[i], color='blue')
    plt.pause(0.01)
    plt.clf()

def mergeSort(arr, low, high):
    if low < high:
        mid = (low + high) // 2

        mergeSort(arr, low, mid)
        mergeSort(arr, mid + 1, high)
        merge(arr, low, mid, high)

def partition(arr, low, high):
    pivot = arr[low]  # Choosing the first element as pivot
    i = low
    j = high

    for it in range(len(arr)):
        if(it == low):
            plt.bar(it,arr[it],color='red')
        elif(it> low and it <= high):
            plt.bar(it,arr[it],color='purple')
        else:
            plt.bar(it,arr[it],color = 'blue')
    plt.pause(0.5)
    plt.clf()
        
    while i < j:
        while i < high and arr[i] <= pivot:
            i += 1
        while j > low and arr[j] > pivot:
            j -= 1

        if i < j:
            arr[i], arr[j] = arr[j], arr[i]

    arr[low], arr[j] = arr[j], arr[low]
    for it in range(len(arr)):
        if(it == j):
            plt.bar(it,arr[it],color='red')
        elif(it> low and it <= high):
            plt.bar(it,arr[it],color='green')
        else:
            plt.bar(it,arr[it],color = 'blue')
    plt.pause(0.5)
    plt.clf()    
    return j

def quickSort(arr, low, high):
    if low < high:

        pi = partition(arr, low, high)

        quickSort(arr, low, pi - 1)

        quickSort(arr, pi + 1, high)

if __name__ == "__main__":
    amt = 50
    arr = list(range(1,amt+1))

    np.random.shuffle(arr)

    print("Array before sorting: ",arr)

    quickSort(arr,0,len(arr)-1)

    print("Array after sorting: ",arr)