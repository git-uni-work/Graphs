||
|[ProgTest](https://progtest.fit.cvut.cz/index.php?X=Main)  ►  [BIE-AG1 (19/20 ZS)](https://progtest.fit.cvut.cz/index.php?X=Course&Cou=288)  ►  [Task 1](https://progtest.fit.cvut.cz/index.php?X=TaskGrp&Cou=288&Tgr=1794)  ►  **Canteen queues**|[Logout](https://progtest.fit.cvut.cz/index.php?X=Logout)|

||
|**Canteen queues**|

**Submission deadline:**

**2019-10-23 23:59:59**

 

**Evaluation:**

**10.0200**

**Max. assessment:**

**2.0000** (Without bonus points)

**Submissions:**

13 / 25

**Advices:**

0 / 0

After well spent holidays, you are back at the school. Unfortunately you haven't managed to acquire a decent timetable and so for the most of the week you have almost no time to get a lunch. Nevertheless, you thought you could always pay a quick visit to the school canteen, which shouldn't take more than a few minutes. However, your first lunch in the canteen didn't go as planned. You spent an hour stuck in the queue, because the campus is full of confused first-year students. Luckily, you aren't a rookie anymore, and so you can utilize some of the dirty tricks you learned, in order to get to the canteen counter faster.

You will be situated at the canteen with two queues, which don't move whatsoever. Your task is to get to the canteen counter in the shortest possible time. During a single unit of time, you can perform one of the following actions:

1.  either you can jump the queue you are currently standing in (i.e. move one position in the queue forward),
2.  or you can let the person behind you take your position, and move one position in the queue backwards,
3.  or you can use your connections and switch places with a friend, who is standing in the adjacent queue several positions in front of you (the number of positions will be given in the input).

In both of the queues are inappropriate people for you to switch positions with — e.g. professors, or classmates, who regularly visit a gym. You can't move to these positions in the queue (not even if you were to offer a better position in the queue). On top of that you need to act fast, as the floor in the canteen will soon be cleaned by a cleaning lady. By no means you can appear on a cleaned part of the floor.

You will be given the length of the queues (it is the same for both of them), a specific number of positions, by which you can move to the adjacent queue, and a description of the queues with marked positions of the inappropriate people. The canteen counter is reached after you appear at an arbitrary position beyond the end of any of the two queues. Movement beyond the end of a queue is always possible. Movement to the adjacent queue is possible only by the given number of positions given in the input, never less. That means if it is possible to move to the adjacent queue by `K` positions, you can move from position `X` in one queue to position `X + K` in the other queue. After performing an action, the length of the queues stays the same (there are always two people switching positions) and similarly the positions of the inappropriate people never change (the exchange of positions always takes place between you at a reachable position and a person suitable for exchanging positions). The cleaning lady cleans the floor in such a way, that in time `i` the floor at `i`-th positions from the beginnings of the queues is cleaned. That means in time `i` you can never appear at `i`-th, or lower, position from the beginning of a queue. Time starts at `0` and increases by `1` every time you perform an action. Therefore, first you perform and action and then the cleaning lady cleans the floor at positions `1`. Afterwards you again perform an action and cleaning lady cleans the floor at positions `2` etc... You start in the left queue at the first position (there will never be an inappropriate person standing there). It is possible for the canteen counter to be unreachable by any sequence of steps.

**Input Format:**

-   On the first line there are two numbers; number `N` specifying the length of the queues and number `K` specifying the number of positions by which you can move to the adjacent queue. You can assume that `1 ≤ K ≤ N` holds.
-   On the second and third line are consecutively descriptions of left and right queues (in this order). The description of a queue is a string of length `N` consisting of characters `'.'` (a position you can move to) and `'x'` (a position with an inappropriate person, which you can't move to).
-   The numbering of positions in the queue is one-based; their numbers are thus `1, ..., N`. The canteen counter is thus reached by appearing at an imagined position `N + 1`, or higher, in an arbitrary queue.
-   You can assume the input is valid.

**Output Format:**

-   Output consists of a single row. If there is a way to reach the canteen counter, output the minimal number of actions needed to do so. Should there be no such way, output `-1`.

**Classification Conditions:**

1.  To pass the compulsory tests (basic and small data tests), your solution has to return correct answers for queues of length at most 20.
2.  To pass the test on medium dataset, your solution has to output correct answers within the time and memory limit for queues of length at most 1 000.
3.  To pass the test on large dataset, your solution has to output correct answers within the time and memory limit for queues of length at most 100 000.

**Examples:**

* * * * *

**Input example 1:**

    5 2
    ....x
    .xx.x

**Output example 1:**

    3

* * * * *

**Input example 2:**

    10 4
    .xx.x...xx
    x.x....x..

**Output example 2:**

    4

* * * * *

**Input example 3:**

    5 1
    ..x..
    ..xx.

**Output example 3:**

    -1

 **Reference**

 

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Základní test ukázkovými daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.021 s
        -   Peak mem usage: 14828 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test malými daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.009 s (limit: 2.000 s)
        -   Total run time: 0.420 s (limit: 10.000 s)
        -   Peak mem usage: 14828 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test středními daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.009 s (limit: 2.000 s)
        -   Total run time: 0.204 s (limit: 10.000 s)
        -   Peak mem usage: 14828 KiB (limit: 125570 KiB)
        -   Bonus test - success, evaluation: 300.00 %
    -   Test 'Test velkými daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.018 s (limit: 2.000 s)
        -   Total run time: 0.253 s (limit: 10.000 s)
        -   Peak mem usage: 14828 KiB (limit: 125570 KiB)
        -   Bonus test - success, evaluation: 167.00 %
    -   Overall ratio: 501.00 % (= 1.00 \* 1.00 \* 3.00 \* 1.67)
-   Total percent: 501.00 %
-   Early submission bonus: 0.50
-   Total points: 5.01 \* ( 2.00 + 0.50 ) = 12.53

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**2**|--|--|--|
|Lines of code:|**36**|18.00 ± 14.00|32|`main`|
|Cyclomatic complexity:|**13**|6.50 ± 4.50|11|`main`|

**13**

**2019-10-17 15:00:38**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088877)

**Submission status:**

Evaluated

 

**Evaluation:**

10.0200

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.017 s
        -   Peak mem usage: 13076 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.293 s (limit: 10.000 s)
        -   Peak mem usage: 13076 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on medium dataset': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.152 s (limit: 10.000 s)
        -   Peak mem usage: 13208 KiB (limit: 125570 KiB)
        -   Bonus test - success, evaluation: 300.00 %
    -   Test 'Test on large dataset': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.082 s (limit: 2.000 s)
        -   Total run time: 1.916 s (limit: 10.000 s)
        -   Peak mem usage: 24996 KiB (limit: 125570 KiB)
        -   Bonus test - success, evaluation: 167.00 %
    -   Overall ratio: 501.00 % (= 1.00 \* 1.00 \* 3.00 \* 1.67)
-   Total percent: 501.00 %
-   Total points: 5.01 \* 2.00 = 10.02

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**87**|87.00 ± 0.00|87|`main`|
|Cyclomatic complexity:|**37**|37.00 ± 0.00|37|`main`|

**12**

**2019-10-17 14:57:56**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088876)

**Submission status:**

Evaluated

 

**Evaluation:**

9.0180

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.019 s
        -   Peak mem usage: 13076 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.311 s (limit: 10.000 s)
        -   Peak mem usage: 13076 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on medium dataset': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.135 s (limit: 10.000 s)
        -   Peak mem usage: 13208 KiB (limit: 125570 KiB)
        -   Bonus test - success, evaluation: 300.00 %
    -   Test 'Test on large dataset': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.088 s (limit: 2.000 s)
        -   Total run time: 2.003 s (limit: 10.000 s)
        -   Peak mem usage: 24996 KiB (limit: 125570 KiB)
        -   Bonus test - success, evaluation: 167.00 %
    -   Overall ratio: 450.90 % (= (1.00 \* 1.00 \* 3.00 \* 1.67) \* 0.9)
-   Total percent: 450.90 %
-   Total points: 4.51 \* 2.00 = 9.02

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**87**|87.00 ± 0.00|87|`main`|
|Cyclomatic complexity:|**37**|37.00 ± 0.00|37|`main`|

**11**

**2019-10-17 14:47:57**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088874)

**Submission status:**

Evaluated

 

**Evaluation:**

1.8000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.017 s
        -   Peak mem usage: 13076 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.015 s (limit: 2.000 s)
        -   Total run time: 0.297 s (limit: 10.000 s)
        -   Peak mem usage: 15208 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on medium dataset': Abnormal program termination (Time limit exceeded)
        -   Program was killed after: 2.019 s (limit: 2.000 s)
        -   Peak mem usage: 13076 KiB (limit: 125570 KiB)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Time limit exceeded
    -   Test 'Test on large dataset': Not tested
        -   Bonus test - failed, evaluation: No bonus awarded
    -   Overall ratio: 90.00 % (= (1.00 \* 1.00) \* 0.9)
-   Total percent: 90.00 %
-   Total points: 0.90 \* 2.00 = 1.80

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**85**|85.00 ± 0.00|85|`main`|
|Cyclomatic complexity:|**37**|37.00 ± 0.00|37|`main`|

**10**

**2019-10-14 16:46:11**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088383)

**Submission status:**

Evaluated

 

**Evaluation:**

1.8000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.005 s (limit: 2.000 s)
        -   Total run time: 0.014 s
        -   Peak mem usage: 13152 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.015 s (limit: 2.000 s)
        -   Total run time: 0.268 s (limit: 10.000 s)
        -   Peak mem usage: 15284 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on medium dataset': Abnormal program termination (Time limit exceeded)
        -   Program was killed after: 2.018 s (limit: 2.000 s)
        -   Peak mem usage: 13156 KiB (limit: 125570 KiB)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Time limit exceeded
    -   Test 'Test on large dataset': Not tested
        -   Bonus test - failed, evaluation: No bonus awarded
    -   Overall ratio: 90.00 % (= (1.00 \* 1.00) \* 0.9)
-   Total percent: 90.00 %
-   Total points: 0.90 \* 2.00 = 1.80

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**107**|107.00 ± 0.00|107|`main`|
|Cyclomatic complexity:|**41**|41.00 ± 0.00|41|`main`|

**9**

**2019-10-13 23:49:25**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088250)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.017 s
        -   Peak mem usage: 13152 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 95.08 %, required: 100.00 %
        -   Max. run time: 0.019 s (limit: 2.000 s)
        -   Total run time: 0.296 s (limit: 10.000 s)
        -   Peak mem usage: 15284 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Early submission bonus: 0.50
-   Total points: 0.00 \* ( 2.00 + 0.50 ) = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**107**|107.00 ± 0.00|107|`main`|
|Cyclomatic complexity:|**41**|41.00 ± 0.00|41|`main`|

**8**

**2019-10-13 23:44:01**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088240)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.018 s
        -   Peak mem usage: 13152 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 95.08 %, required: 100.00 %
        -   Max. run time: 0.023 s (limit: 2.000 s)
        -   Total run time: 0.272 s (limit: 10.000 s)
        -   Peak mem usage: 15288 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Early submission bonus: 0.50
-   Total points: 0.00 \* ( 2.00 + 0.50 ) = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**107**|107.00 ± 0.00|107|`main`|
|Cyclomatic complexity:|**41**|41.00 ± 0.00|41|`main`|

**7**

**2019-10-13 23:32:14**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088230)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.017 s
        -   Peak mem usage: 13152 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 98.36 %, required: 100.00 %
        -   Max. run time: 0.018 s (limit: 2.000 s)
        -   Total run time: 0.306 s (limit: 10.000 s)
        -   Peak mem usage: 15288 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Early submission bonus: 0.50
-   Total points: 0.00 \* ( 2.00 + 0.50 ) = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**103**|103.00 ± 0.00|103|`main`|
|Cyclomatic complexity:|**38**|38.00 ± 0.00|38|`main`|

**6**

**2019-10-13 23:26:58**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088225)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.017 s
        -   Peak mem usage: 13152 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 95.08 %, required: 100.00 %
        -   Max. run time: 0.019 s (limit: 2.000 s)
        -   Total run time: 0.275 s (limit: 10.000 s)
        -   Peak mem usage: 15288 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Early submission bonus: 0.50
-   Total points: 0.00 \* ( 2.00 + 0.50 ) = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**103**|103.00 ± 0.00|103|`main`|
|Cyclomatic complexity:|**38**|38.00 ± 0.00|38|`main`|

**5**

**2019-10-13 23:26:27**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088224)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.016 s
        -   Peak mem usage: 13152 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 98.36 %, required: 100.00 %
        -   Max. run time: 0.016 s (limit: 2.000 s)
        -   Total run time: 0.262 s (limit: 10.000 s)
        -   Peak mem usage: 15288 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Early submission bonus: 0.50
-   Total points: 0.00 \* ( 2.00 + 0.50 ) = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**103**|103.00 ± 0.00|103|`main`|
|Cyclomatic complexity:|**38**|38.00 ± 0.00|38|`main`|

**4**

**2019-10-13 22:38:34**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088201)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.016 s
        -   Peak mem usage: 13152 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 98.36 %, required: 100.00 %
        -   Max. run time: 0.013 s (limit: 2.000 s)
        -   Total run time: 0.286 s (limit: 10.000 s)
        -   Peak mem usage: 15288 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Early submission bonus: 0.50
-   Total points: 0.00 \* ( 2.00 + 0.50 ) = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**102**|102.00 ± 0.00|102|`main`|
|Cyclomatic complexity:|**38**|38.00 ± 0.00|38|`main`|

**3**

**2019-10-13 22:36:20**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088199)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.005 s (limit: 2.000 s)
        -   Total run time: 0.015 s
        -   Peak mem usage: 13152 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 98.36 %, required: 100.00 %
        -   Max. run time: 0.019 s (limit: 2.000 s)
        -   Total run time: 0.249 s (limit: 10.000 s)
        -   Peak mem usage: 15280 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Early submission bonus: 0.50
-   Total points: 0.00 \* ( 2.00 + 0.50 ) = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**100**|100.00 ± 0.00|100|`main`|
|Cyclomatic complexity:|**38**|38.00 ± 0.00|38|`main`|

**2**

**2019-10-13 21:10:33**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088136)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.016 s
        -   Peak mem usage: 13156 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 98.36 %, required: 100.00 %
        -   Max. run time: 0.018 s (limit: 2.000 s)
        -   Total run time: 0.302 s (limit: 10.000 s)
        -   Peak mem usage: 15284 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Early submission bonus: 0.50
-   Total points: 0.00 \* ( 2.00 + 0.50 ) = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**95**|95.00 ± 0.00|95|`main`|
|Cyclomatic complexity:|**36**|36.00 ± 0.00|36|`main`|

**1**

**2019-10-13 21:08:35**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=288&Tgr=1794&Tsk=1612&Sub=1088133)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': failed
        -   result: 0.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.017 s
        -   Peak mem usage: 13152 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 %
-   Total percent: 0.00 %
-   Early submission bonus: 0.50
-   Total points: 0.00 \* ( 2.00 + 0.50 ) = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**1**|--|--|--|
|Lines of code:|**95**|95.00 ± 0.00|95|`main`|
|Cyclomatic complexity:|**36**|36.00 ± 0.00|36|`main`|


