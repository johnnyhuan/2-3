## P3 Hunting in another world ##
The valuable monster in the forest consists of two types: unicorn and dragon, each with different profits. A skilled sniper with two rifles, SVT40 and TOZ8, is in the hunting game. The rifles have different ranges (x and y) and bullet prices (a and b). TOZ8 has a longer range and more expensive bullets.<br>

When hunting, if the monster is within the rifle's range, the base hit rate is 90%. If the monster is outside the range, the base hit rate is (90 - range exceeded * 1)%. However, SVT40 is particularly effective for shooting unicorn, with a 10% increase in hit rate (eg:from 90% to 100%), while TOZ8 is not suitable for shooting dragon, with a 10% decrease in hit rate (eg:from 90% to 80%). (If the hit rate drops below 0%, it's considered as 0%.)<br>

Because the two rifles have different bullet prices, the sniper wants to maximize his profit by calculating the expected profit of each shot, which is the monster's profit multiplied by the hit rate minus the bullet price. He will give up on hunting if both rifles' expected profits are less than or equal to 0.<br>

Today, the sniper spotted a monster. Can you help him determine which rifle has the highest expected profit? Also, calculate what his expected profit is. If both rifles have the same expected profit, he will choose the rifle with the higher hit rate.<br>
## Input Format ##
The first line consists of two integers, the ranges of SVT40 and TOZ8: `x y`.<br>
The second line consists of two integers, the price per bullet for SVT40 and TOZ8: `a b`<br>
The third line consists of three integers: the type of monster `t` (where t=1 represents a unicorn and t=2 represents a dragon), the profit of the monster `q`, and the linear distance from the sniper to the monster `d`. <br>
## Output Format ##
If there is at least one rifle with an expected profit greater than 0, then output the name of the rifle with the higher expected profit and its corresponding expected profit as:<br>

`string` (Rifle Name)`integer` (Expected Profit)

If both rifles have the same expected profit, choose the rifle with the <br>higher hit rate.

If there are no rifles with an expected profit greater than 0, then output`giveup`.<br>
## Constraints ##
x<y, a<b, q=100n (n belongs to the set of integers)<br>
0<all input int<10^6<br>
## Sample Input ##
```
400 500
100 200
1 200 300
```
## Sample Output ##
```
SVT40 100
```