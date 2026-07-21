<h2><a href="https://www.geeksforgeeks.org/problems/arrays-game0327/1">Array's Game</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of n integers, two players, A and B, play a game alternately, with A making the first move. </span><span style="font-size: 18px;">In each turn, a player can choose any element except the current maximum element and increase it by 1. </span><span style="font-size: 18px;">The game continues until all elements of the array become equal. </span></p>
<p><span style="font-size: 18px;">The player whose move makes all the elements equal is declared the winner. If the array is already equal initially, no moves can be made and the game ends in a draw. </span></p>
<p><span style="font-size: 18px;">Return: </span><span style="font-size: 18px;">1 if player A wins. </span><span style="font-size: 18px;">2 if player B wins. </span><span style="font-size: 18px;">0 if the game is a draw.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[]<strong> </strong>= [1, 2]
<strong>Output: </strong>1
<strong>Explanation: </strong>The first player adds 1 to the first number making it 2. The array becomes equal, so he is the winner.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [2, 2, 2]
<strong>Output: </strong>0
<strong>Explanation: </strong>No moves can be made as all the elements are already maximum and numbers cannot be added to the maximum numbers.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |arr| ≤ 10<sup>6</sup><br>1 ≤ arr[i] ≤ 10<sup>9</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Game Theory</code>&nbsp;