# ZOJ-4016-Mergeable-Stack
a problem on ZJU acm


	    <div id="content_body">
            <center><span class="bigProblemTitle">Mergeable Stack</span></center>
            <hr>
            <center>
                <font color="green">Time Limit: </font> 2 Seconds
                &nbsp;&nbsp;&nbsp;&nbsp;
                <font color="green">Memory Limit: </font> 65536 KB
            </center>
            <hr>
            <p>Given $$n$$ initially empty stacks, there are three types of operations:</p>

<ul>
  <li><p>1 <var>s</var> <var>v</var>: Push the value \\(v\\) onto the top of the \\(s\\)-th stack.</p></li>
  <li><p>2 <var>s</var>: Pop the topmost value out of the \(s\)-th stack, and print that value. If the \\(s\\)-th stack is empty, pop nothing and print "EMPTY" (without quotes) instead.</p></li>
  <li>
    <p>3 <var>s</var> <var>t</var>: Move every element in the \\(t\\)-th stack onto the top of the \\(s\\)-th stack in order.</p>
    <p>Precisely speaking, denote the original size of the \\(s\\)-th stack by \\(S(s)\\), and the original size of the \\(t\\)-th stack by \\(S(t)\\). Denote the original elements in the \\(s\\)-th stack from bottom to top by \\(E(s,1), E(s,2), \dots, E(s,S(s))\\), and the original elements in the \\(t\\)-th stack from bottom to top by \\(E(t,1), E(t,2), \dots, E(t,S(t))\\).</p>
    <p>After this operation, the \\(t\\)-th stack is emptied, and the elements in the \\(s\\)-th stack from bottom to top becomes \\(E(s,1), E(s,2), \dots, E(s,S(s)), E(t,1), E(t,2), \dots, E(t,S(t))\\). Of course, if \\(S(t) = 0\\), this operation actually does nothing.</p>
  </li>
</ul>

<p>There are \\(q\\) operations in total. Please finish these operations in the input order and print the answer for every operation of the second type.</p>

<h4>Input</h4>

<p>There are multiple test cases. The first line of the input contains an integer \\(T\\), indicating the number of test cases. For each test case:</p>

<p>The first line contains two integers \\(n\\) and \\(q\\) (\\(1 \le n, q \le 3 \times 10^5\\)), indicating the number of stacks and the number of operations.</p>

<p>The first integer of the following \\(q\\) lines will be \\(op\\) (\\(1 \le op \le 3\\)), indicating the type of operation.</p>

<ul>
  <li>If \(op = 1\), two integers \(s\) and \(v\) (\(1 \le s \le n\), \(1 \le v \le 10^9\)) follow, indicating an operation of the first type.</li>
  <li>If \(op = 2\), one integer \(s\) (\(1 \le s \le n\)) follows, indicating an operation of the second type.</li>
  <li>If \(op = 3\), two integers \(s\) and \(t\) (\(1 \le s, t \le n\), \(s \ne t\)) follow, indicating an operation of the third type.</li>
</ul>

<p>It's guaranteed that neither the sum of \(n\) nor the sum of \(q\) over all test cases will exceed \(10^6\).</p>

<h4>Output</h4>

<p>For each operation of the second type output one line, indicating the answer.</p>

<h4>Sample Input</h4>
<pre>2
2 15
1 1 10
1 1 11
1 2 12
1 2 13
3 1 2
1 2 14
2 1
2 1
2 1
2 1
2 1
3 2 1
2 2
2 2
2 2
3 7
3 1 2
3 1 3
3 2 1
2 1
2 2
2 3
2 3
</pre>

<h4>Sample Output</h4>
<pre>13
12
11
10
EMPTY
14
EMPTY
EMPTY
EMPTY
EMPTY
EMPTY
EMPTY
</pre>
    </div>