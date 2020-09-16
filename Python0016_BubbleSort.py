def bubbleSort(a, s, i):
    j = 0
    while j < s-i-1:
        if a[j+1] < a[j]:
            swap(a, j)
        j += 1
    
    i += 1
    if i != s:
        bubbleSort(a, s, i)


def swap(a, i):
    temp = a[i]
    a[i] = a[i+1]
    a[i+1] = temp


def printt(a):
    for item in a:
        print(item, end = " ")


#main function
size = 10
i = 0
array = []

while i < size:
    s = str(input())
    s = s.split(' ')

    j = 0
    while j < len(s):
        array.append(int(s[j]))
        i += 1
        j += 1

bubbleSort(array, size, 0)

printt(array)
