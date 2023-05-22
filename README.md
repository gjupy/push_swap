# push_swap
In this project I learned about different sort algorithms and implemented 2 stacks using linked lists.

We were supposed to sort the numbers given as input using two stacks and using only following operations: 
- pa/pb (push number to stack a/b)
- rra/rrb (reverse rotate stack a/b)
- ra/rb (rotate stack a/b)

I use a merge-like sort algorithm.

This program takes a list of numbers and ouputs a list of the commands that can be used to sort them.

## How to run
Use ```make``` and then run the program using ```./push_swap <1st nbr> <2nd nbr> ... <nth nbr>```.

As every operation is printed on the terminal, you can use a pipe and catch the numbers of operations needed with ```wc```.
You can use the [push_swap_visualizer](https://github.com/o-reo/push_swap_visualizer) and [push_swap_tester](https://github.com/louisabricot/push_swap_tester) to test my algorithm and see it in action.

## This code is capable of
- handeling inputs that look like `"2 1 3 4 5"` or `2 1 3 4 5` or `2 1 "3 4 5"`
- detecting a non-numeric, greater or smaller than integer or double number input
- sorting 5 random integers in 5 to 10 actions<br>
- sorting 100 random integers with an average of ca. 632 actions
- sorting 500 random integers with an average of ca. 5211 actions

(both average amount of actions were the average of 1000 random tests)

## visualization of my algorithm sorting 300 random integers
![example](https://github.com/gjupy/push_swap/assets/94360193/6bc7ae45-66b1-4d0a-afa7-31aaaa841cc2)
