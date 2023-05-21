# push_swap
In this project I learned about different sort algorithms and implemented 2 stacks using linked lists.

We were supposed to sort the numbers given as input using two stacks and using only following operations: 
- pa/pb (push number to stack a/b)
- rra/rrb (reverse rotate stack a/b)
- ra/rb (rotate stack a/b)

I use a merge-like sort algorithm, which turned out to sort the numbers with a decent number of operations.

## How to run
Use ```make``` and then run the program using ```./push_swap <1st nbr> <2nd nbr> ... <nth nbr>```.

As every operation is printed on the terminal, you can use a pipe and catch the numbers of operations needed with ```wc```.

## This code is capable of
- handeling inputs that look like `"2 1 3 4 5"` or `2 1 3 4 5` or `2 1 "3 4 5"`
- detecting a non-numeric, greater or smaller than integer or double number input
- sorting 5 random integers in 5 to 10 actions<br>
- sorintg 100 random integers with an average of ca. 531 actions
- sorting 500 random integers with an average of ca. 5800 actions
(both average amount of actions where the average of 1000 random tests)
