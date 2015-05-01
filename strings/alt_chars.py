"""
Problem Statement

Shashank likes strings in which consecutive characters are different. For example, he likes ABABA, while he doesn't like ABAA. Given a string containing characters A and B only, he wants to change it into a string he likes. To do this, he is allowed to delete the characters in the string.

Your task is to find the minimum number of required deletions.

Input Format

The first line contains an integer T, i.e. the number of test cases. 
The next T lines contain a string each.

Output Format

For each test case, print the minimum number of deletions required.

Constraints

1 <= T <= 10 
1 <= length of string <= 10^5
"""


def main():
    T = int(raw_input())
    
    for t in range(T):
        str = raw_input()
        s_len = len(str)
        del_count=0
        
        if s_len == 1:
            print 0
        else:
            i=0
            j=1
            while (j < s_len):
                prev = str[i]
                curr = str[j]
                
                if curr == prev:
                    del_count+=1
                    j+=1
                else:
                    i=j
                    j+=1
            print del_count
    
    
if __name__ == "__main__":
	main()