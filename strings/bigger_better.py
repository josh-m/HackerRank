"""
Problem Statement

Given a word w, rearrange the letters of w to construct another word s in such a way that s is lexicographically greater than w. In case of multiple possible answers, find the lexicographically smallest one.

Input Format

The first line of input contains t, the number of test cases. Each of the next t lines contains w.

Constraints 
1=t=10^5 
1=|w|=100 
w will contain only lower-case English letters and its length will not exceed 100.

Output Format

For each testcase, output a string lexicographically bigger than w in a separate line. In case of multiple possible answers, print the lexicographically smallest one, and if no answer exists, print no answer.
"""

def main():
    T = int(raw_input())
    assert T>0
    
    for t in range(T):
        str = raw_input()
        assert str #exists
        
        s_len = len(str)
        j = s_len-1
        for i in range(j-1:-1:-1):
            print ch
        

#Attempts to find a lower indexed char with a lower ordinal value.
#If found returns that index,
#Otherwise returns -1 
def findMinSwap(str, idx):
    back_val = ord(str[idx])
    
    for (

        
        

if __name__ == '__main__':
    main()