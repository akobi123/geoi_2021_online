# georgian olympiad in informatics 2021 online stage

## Includes:

statements for problems A and C in georgian

solutions for problems A and C in c++

## Short statements in english:

### A conscubes2

**input**: a single integer _1 < N <= 50_

**output**: a sequence of + and - such that N= ± 1^3 ± 2^3 ± 3^3 ... ± M^3 

you are not required to minimize M but it has to be less than or equal to 30000

for example if N=7 valid answers are -+ (7=-1+8), -++++- (7=-1+8++27+64+125-216), -+--+-++-++-+- and so on

if such representation of N does not exist output *

### C beatle

**statement**: a beatle is climbing from the top of the wall to the bottom by going straight down but it may run into horizontal shelves 

and if it does it either goes to the leftmost or the rightmost edge of the shelf and continoues to go straight down

**input**: _N <= 10^5_ (number of shelves) and N shelves (leftmost edge at coordinates (X,Y) and length L)

_T <= 60000_ (number of the starting positions of the beatle) and T positions (the beatle starts at coordinates (X,100000) )

**output**: for each starting position of the beatle output the minimum number of shelves it will run into
