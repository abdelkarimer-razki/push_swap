# push_swap
# INTRODUCTION :
First of all, we have to explain what this project actually ask us to do.
Well, we have basiclly two stacks, the first is named 'STACK A' and the second is 'STACK B',
and the numbers that we're gonna sort are passed as argument in the object file and our program should show use the instructions he used to sort these numbers.
<img width="371" alt="Screen Shot 2022-04-11 at 2 22 19 AM" src="https://user-images.githubusercontent.com/65429355/162654432-f191b779-094c-4dc2-988a-135de67c3572.png">


in the case showed above i sorted a stack of 5 integers in 10 moves which is pretty good.
but now i gotta go deep into explaining what are these moves "instructions" are doing.

First of all we have
sa : which is an instruction that let use swap the first and the second number on 'STACK A'.
sb : same as 'sa' sb used to swap first to element but this time in 'STACK B'. 
ss : do 'sa' and 'sb' at the same time and it consider as one move.
pa : it takes the first ekement at 'STACK B' and push it ot the top of 'STACK A'.
pb : same as 'pa' but this time we take the first element at 'STACK A' and we push it to the top of 'STAKC B'.
ra : it shifts up all the element of 'STACK A' by 1 so we basiclly make the first element becomes the last.
rb : same as 'ra' it shift upp all the element but this time at 'STACK B' by 1 "first element becomes the last".
rr : do 'ra' and 'rb' at the same time but it counts as one move.
rra : it shifts down all the element of 'STACK A' by 1 so we basiclly make the last element becomes the first.
rrb : same as 'rra' it shift down all the element but this time at 'STACK B' by 1 "first element becomes the last".

but i prefere not to get deep into the algorithm 

Before i even got to start this project i had to make a full review on all the sorting algorithms i possibly could found so i would find it easy to sort my stack.
# ALGORITHM :
