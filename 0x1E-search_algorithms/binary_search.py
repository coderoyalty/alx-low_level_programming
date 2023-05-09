def binary_search(arr, val):
    lower = 0
    upper = len(arr) - 1
    # while in range
    while lower <= upper:
        # print from lower to upper
        print(arr[lower:upper + 1])
        mid = (lower + upper) // 2
        current = arr[mid]
        if current < val:
            lower = mid + 1
            continue
        elif current > val:
            upper = mid - 1
            continue
        elif current == val:
            return mid
    return -1


arr = [0, 1, 2, 3 , 5, 6]
print(arr)

val = int(input("Enter value:"))

print("Answer: {}".format(binary_search(arr, val)))
