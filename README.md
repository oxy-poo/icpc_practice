# ICPC Practice

## problem poj2136

### Description

Write a program to read four lines of upper case (i.e., all CAPITAL LETTERS) text input (no more than 72 characters per line) from the input file and print a vertical histogram that shows how many times each letter (but not blanks, digits, or punctuation) appears in the all-upper-case input. Format your output exactly as shown.

### Input

- Lines 1..4: Four lines of upper case text, no more than 72 characters per line.

### Output

- Lines 1..??: Several lines with asterisks and spaces followed by one line with the upper-case alphabet separated by spaces. Do not print unneeded blanks at the end of any line. Do not print any leading blank lines.

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

- Line 1: A single integer: N

### Output

- Line 1: A single integer that is the number of ways consecutive cow brands can sum to N.

### Sample Input

15

### Sample Output

4

## POJ 1504

### Description

The Antique Comedians of Malidinesia prefer comedies to tragedies. Unfortunately, most of the ancient plays are tragedies. Therefore the dramatic advisor of ACM has decided to transfigure some tragedies into comedies. Obviously, this work is very hard because the basic sense of the play must be kept intact, although all the things change to their opposites. For example the numbers: if any number appears in the tragedy, it must be converted to its reversed form before being accepted into the comedy play.

Reversed number is a number written in arabic numerals but the order of digits is reversed. The first digit becomes last and vice versa. For example, if the main hero had 1245 strawberries in the tragedy, he has 5421 of them now. Note that all the leading zeros are omitted. That means if the number ends with a zero, the zero is lost by reversing (e.g. 1200 gives 21). Also note that the reversed number never has any trailing zeros.

ACM needs to calculate with reversed numbers. Your task is to add two reversed numbers and output their reversed sum. Of course, the result is not unique because any particular number is a reversed form of several numbers (e.g. 21 could be 12, 120 or 1200 before reversing). Thus we must assume that no zeros were lost by reversing (e.g. assume that the original number was 12).

### Input

The input consists of N cases. The first line of the input contains only positive integer N. Then follow the cases. Each case consists of exactly one line with two positive integers separated by space. These are the reversed numbers you are to add.

### Output

For each case, print exactly one line containing only one integer - the reversed sum of two reversed numbers. Omit any leading zeros in the output.

### Sample Input

3\
24 1\
4358 754\
305 794

### Sample Output

34\
1998\
1

## POJ 1806

### Description

Background
Manhattan in the year 2025 - it is so densely populated that its old two-dimensional grid of streets and avenues fails to provide enough space for all the traditional vehicles such as cars, bicycles, or busses.Accordingly, the newly developed 3D-Skyjetters become very popular, because they allow to pass the traffic jams on the ground by flying in the air. After a series of horrible accidents caused by 3D-Skyjetters cutting a corner, New York authorities have put into place new regulations of air traffic and are determined to enforce them rigorously. The key point of these regulations is that 3D-Skyjetters must follow virtual airways on a three-dimensional rectangular grid, easy enough for the New Yorkers who had to use the two-dimensional rectangular grid of roads on the ground all their life.
Problem
You own a company that rents out 3D-Skyjetters. As 3D-Skyjetters are in such an early state of development,they are far from being economical. So your customers keep running out of petrol at all the wrong places,and you need a system to inform them about their current range at all times.
You may assume that travelling from one intersection to the next in the grid takes one unit of petrol, no matter if the customer is moving horizontally or vertically, up or down. You may also assume that your customer is located at some intersection where his or her movements are not restricted by the ground or other obstacles, but just by the amount of remaining petrol.
Given the amount of petrol, provide a graphical representation of all the intersections in the range of your customer, along with the amount of petrol that is needed to go there.

### Input

The first line of the input contains the number of scenarios. For each scenario, there is a line containing the units of remaining petrol, i.e an integer u satisfying 0 <= u <= 9. If more than 9 units of petrol remain, the customer will ignore the display anyway.

### Output

Start the output for each scenario with a line containing "Scenario #i:", where i is the number of the scenario starting at 1. Then print a graphical (or rather textual) representation of all intersections that can be reached with the given amount of petrol, along with the units of petrol necessary to go there. In this graphical representation, print the slices of the smallest axis-aligned three-dimensional cube containing all the intersections in the range, and label the slices from the bottom to the top starting at 1. For each slice,start the output with a line containing "slice #s:", where s is the number of the slice. In the lines that follow, print a graphical representation of all the intersections in that slice, using
the digits 0 to 9 for intersections in the range, representing the amount of petrol necessary to go there,
and the dot "." for intersections not in the range.

Print an additional blank line after each scenario.

### Sample Input

2
0
2

## Did Not Finish

## POJ 1799

### Description

#### Background

George B. wants to be more than just a good American. He wants to make his daddy proud and become a western hero. You know, like John Wayne.
But sneaky as he is, he wants a special revolver that will allow him to shoot more often than just the usual six times. This way he can fool and kill the enemy easily (at least that's what he thinks).

#### Problem

George has kidnapped ... uh, I mean ... "invited" you and will only let you go if you help him with the math. The piece of the revolver that contains the bullets looks like this (examples for 6 and 17 bullets):

There is a large circle with radius R and n little circles with radius r that are placed inside on the border of the large circle. George wants his bullets to be as large as possible, so there should be no space between the circles. George will decide how large the whole revolver will be and how many bullets it shall contain.Your job is, given R and n, to compute r.

### Input

The first line contains the number of scenarios. For each scenario follows a line containing a real number R and an integer n, with 1 <= R <= 100 and 2 <= n <= 100.

### Output

The output for every scenario begins with a line containing "Scenario #i:", where i is the number of the scenario starting at 1. Then print the value for r, rounded to three decimal places. Terminate the output for the scenario with a blank line.

### Sample Input

4
4.0 6
4.0 17
3.14159 100
42 2

### Sample Output

Scenario #1:\
1.333\

Scenario #2:\
0.621\

Scenario #3:\
0.096\

Scenario #4:
21.000\

### Conclusion

I am confidednt that I did the problem correctly and their solution is wrong. Moving on.
