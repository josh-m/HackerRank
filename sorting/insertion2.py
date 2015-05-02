
def main():
    ar_size = int(raw_input())

    ar_str = raw_input().split()
    
    ar = map(int, ar_str)
        
    insertionSort(ar_size,ar)
        
def print_arr(sz, ar):
    for n in ar[:-1]:
        print '%i' % n,
        
    print ar[-1]
     
def insertionSort(sz, ar):
    for j in range(1,sz):
        v = ar[j]
        i = j-1
        while v < ar[i] and i>-1:
            ar[i+1] = ar[i]
            i-=1
            
        ar[i+1] = v
        
        print_arr(sz, ar)


if __name__ == '__main__':
    main()
    