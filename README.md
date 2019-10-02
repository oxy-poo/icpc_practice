# readme guide
## problem poj2136
### Description

Write a program to read four lines of upper case (i.e., all CAPITAL LETTERS) text input (no more than 72 characters per line) from the input file and print a vertical histogram that shows how many times each letter (but not blanks, digits, or punctuation) appears in the all-upper-case input. Format your output exactly as shown.
### Input

* Lines 1..4: Four lines of upper case text, no more than 72 characters per line.
### Output

* Lines 1..??: Several lines with asterisks and spaces followed by one line with the upper-case alphabet separated by spaces. Do not print unneeded blanks at the end of any line. Do not print any leading blank lines.
### Sample Input

THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG.
THIS IS AN EXAMPLE TO TEST FOR YOUR
HISTOGRAM PROGRAM.
HELLO!

## POJ 2140
### Description

The cows in farmer John's herd are numbered and branded with consecutive integers from 1 to N (1 <= N <= 10,000,000). When the cows come to the barn for milking, they always come in sequential order from 1 to N.

Farmer John, who majored in mathematics in college and loves numbers, often looks for patterns. He has noticed that when he has exactly 15 cows in his herd, there are precisely four ways that the numbers on any set of one or more consecutive cows can add up to 15 (the same as the total number of cows). They are: 15, 7+8, 4+5+6, and 1+2+3+4+5.

When the number of cows in the herd is 10, the number of ways he can sum consecutive cows and get 10 drops to 2: namely 1+2+3+4 and 10.

Write a program that will compute the number of ways farmer John can sum the numbers on consecutive cows to equal N. Do not use precomputation to solve this problem.
### Input

* Line 1: A single integer: N
### Output

* Line 1: A single integer that is the number of ways consecutive cow brands can sum to N.
### Sample Input

15
### Sample Output

4



