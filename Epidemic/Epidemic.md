||
|[ProgTest](https://progtest.fit.cvut.cz/index.php?X=Main)  ►  [BIE-AG2 (19/20 LS)](https://progtest.fit.cvut.cz/index.php?X=Course&Cou=302)  ►  [Task 2](https://progtest.fit.cvut.cz/index.php?X=TaskGrp&Cou=302&Tgr=1896)  ►  **Programavirus epidemic**|[Logout](https://progtest.fit.cvut.cz/index.php?X=Logout)|

||
|**Programavirus epidemic**|

**Submission deadline:**

**2020-04-26 23:59:59**

 

**Evaluation:**

**15.0000**

**Max. assessment:**

**15.0000** (Without bonus points)

**Submissions:**

21 / 25

**Advices:**

0 / 0

Even though the use of programavirus antidote was relatively successful, we did not manage to prevent the virus from further spreading. The virus is now not only uncontrollably spreading between FIT students, but it has also mutated and now affects also teachers and employees. Current government measurements reduced the spread rate, but it has been shown, that one can also become infected by remote collaboration with colleagues. FIT doesn't want to stop the teaching and function of its important parts altogether. Given the amount of infected people, to stop the virus from spreading, it might suffice to stop only some of the collaboration. Of course, it would be best to stop as little collaboration as possible. Can you help FIT to analyze and solve this situation?

You were given precise information about the situation at crisis meeting in the dean's office. To analyze the situation, you will be given a plan of collaboration at FIT. A plan of collaboration contains students and employees of FIT altogether with collaborations inbetween them, i.e. it is given, who collaborates with whom. On top of that, each collaboration has its intensity specified by a positive integer number. Given collaborations are mutual and have same intensity in both ways of collaboration. You will be also given a classified information about infected people (set `A`) and also the list of critically important people, that must be protected from the virus (set `B`). Programavirus can spread between two people if these people either collaborate directly, or indirectly via sequence of other people and collaborations. Your task is to stop some collaborations in a way programavirus can not spread from people in set `A` to people in set `B`. At the same time is needed to minimize the sum of stopped collaborations. Collaboration at FIT is fruitful, and therefore you may assume that before your intervention there is possibility of virus spreading between an arbitrary pair of people.

**Input Format:**

-   On the first line there are two integer numbers `N` and `M` specifying number of people on FIT and number of collaborations inbetween them, respectively.
-   The numbering of people is zero-based, their identifiers are thus `0, 1, ..., N-1`.
-   After that `M` lines follow, each containing three integer numbers `X`, `Y` and `I`, where `X` and `Y` are identifiers of pairs of people, that collaborate together (`0 ≤ X,Y < N`, `X ≠ Y`) and `I` is the intensity of the collaboration (`1 ≤ I ≤ 10`).
-   The numbering of collaborations is zero-based (their identifiers are thus `0, 1,..., M-1`) in the order they appear on the input.
-   On the next line there is a single integer `P` (`1 ≤ P < N`), specifying the number of infected people.
-   After that follows a line with `P` integers `p1, p2, ..., pP`, that specify the identifiers of infected people (`0 ≤ pi < N`).
-   On the next line there is a single integer `L` (`1 ≤ L < N`), specifying the number of important people to be protected from programavirus.
-   After that follows a line with `L` integers `l1, l2, ..., lL`, that specify the identifiers of important people (`0 ≤ li < N`).
-   No person is infected and critically important at the same time (i.e. the intersection of sets `A` a `B` is empty).
-   You can assume the input is valid.

**Output Format:**

-   Output consists of 2 lines.
-   On the first line output the minimal possible sum of stopped collaborations.
-   On the second line output the list of stopped collaborations.
-   Should there be multiple solutions, output an arbitrary one.

**Classification Conditions:**

1.  To pass the compulsory tests, your solution has to return correct answers for collaboration plan with at most 300 people and 1 000 collaborations.

**Examples:**

* * * * *

**Input example 1:**

    3 3
    0 1 7
    0 2 5
    1 2 1
    1
    0
    1
    2

**Output example 1:**

    6
    2 1

* * * * *

**Input example 2:**

    3 3
    0 1 7
    0 2 5
    1 2 1
    1
    0
    2
    2 1

**Output example 2:**

    12
    0 1

* * * * *

**Input example 3:**

    6 7
    0 1 1
    0 2 1
    1 2 1
    3 4 1
    3 5 1
    5 4 1
    2 3 1
    1
    1
    1
    4

**Output example 3:**

    1
    6

* * * * *

**Input example 4:**

    9 11
    0 2 1
    0 1 2
    1 2 3
    2 3 4
    3 4 5
    4 6 6
    3 6 7
    3 5 8
    5 8 9
    6 7 10
    6 5 10
    3
    2 3 8
    2
    6 4

**Output example 4:**

    22
    4 6 10

* * * * *

 **Reference**

 

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Základní test ukázkovými daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.007 s
        -   Peak mem usage: 5584 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test velkými daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.014 s (limit: 2.000 s)
        -   Total run time: 0.675 s (limit: 20.000 s)
        -   Peak mem usage: 5884 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Overall ratio: 100.00 % (= 1.00 \* 1.00)
-   Total percent: 100.00 %
-   Early submission bonus: 3.75
-   Total points: 1.00 \* ( 15.00 + 3.75 ) = 18.75

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**4**|--|--|--|
|Lines of code:|**100**|25.00 ± 3.39|29|`main`|
|Cyclomatic complexity:|**15**|3.75 ± 1.79|6|`fp`|

**21**

**2020-04-25 19:21:58**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1163183)

**Submission status:**

Evaluated

 

**Evaluation:**

15.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.026 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 1.700 s (limit: 2.000 s)
        -   Total run time: 15.567 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Overall ratio: 100.00 % (= 1.00 \* 1.00)
-   Total percent: 100.00 %
-   Total points: 1.00 \* 15.00 = 15.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**16**|--|--|--|
|Lines of code:|**337**|21.06 ± 20.06|75|`Graph::modifygraph`|
|Cyclomatic complexity:|**118**|7.38 ± 9.51|39|`Graph::modifygraph`|

**20**

**2020-04-23 23:32:12**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162816)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.025 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 98.17 %, required: 100.00 %
        -   Max. run time: 1.737 s (limit: 2.000 s)
        -   Total run time: 16.819 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**339**|19.94 ± 20.25|75|`Graph::modifygraph`|
|Cyclomatic complexity:|**119**|7.00 ± 9.34|39|`Graph::modifygraph`|

**19**

**2020-04-23 21:50:51**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162789)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.025 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 98.17 %, required: 100.00 %
        -   Max. run time: 1.616 s (limit: 2.000 s)
        -   Total run time: 14.619 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**332**|19.53 ± 19.17|68|`Graph::modifygraph`|
|Cyclomatic complexity:|**115**|6.76 ± 8.55|35|`Graph::modifygraph`|

**18**

**2020-04-22 19:39:26**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162630)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.023 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 93.58 %, required: 100.00 %
        -   Max. run time: 1.707 s (limit: 2.000 s)
        -   Total run time: 14.874 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**327**|19.24 ± 18.45|63|`Graph::modifygraph`|
|Cyclomatic complexity:|**110**|6.47 ± 7.61|30|`Graph::modifygraph`|

**17**

**2020-04-22 18:49:19**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162624)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.023 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 93.58 %, required: 100.00 %
        -   Max. run time: 1.824 s (limit: 2.000 s)
        -   Total run time: 16.783 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**325**|19.12 ± 18.18|61|`Graph::modifygraph`|
|Cyclomatic complexity:|**105**|6.18 ± 6.91|26|`Graph::modifygraph`|

**16**

**2020-04-22 11:19:59**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162547)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.024 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 93.58 %, required: 100.00 %
        -   Max. run time: 1.640 s (limit: 2.000 s)
        -   Total run time: 16.762 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**323**|19.00 ± 17.91|59|`Graph::modifygraph`|
|Cyclomatic complexity:|**102**|6.00 ± 6.43|23|`Graph::modifygraph`|

**15**

**2020-04-22 10:57:49**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162545)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.024 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 91.74 %, required: 100.00 %
        -   Max. run time: 1.845 s (limit: 2.000 s)
        -   Total run time: 17.573 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**322**|18.94 ± 17.78|58|`Graph::modifygraph`|
|Cyclomatic complexity:|**101**|5.94 ± 6.27|22|`Graph::modifygraph`|

**14**

**2020-04-22 10:53:18**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162544)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.023 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 91.74 %, required: 100.00 %
        -   Max. run time: 1.880 s (limit: 2.000 s)
        -   Total run time: 17.039 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**322**|18.94 ± 17.78|58|`Graph::modifygraph`|
|Cyclomatic complexity:|**105**|6.18 ± 6.91|26|`Graph::modifygraph`|

**13**

**2020-04-22 10:16:06**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162540)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.026 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 89.91 %, required: 100.00 %
        -   Max. run time: 1.841 s (limit: 2.000 s)
        -   Total run time: 17.563 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**321**|18.88 ± 17.65|57|`Graph::modifygraph`|
|Cyclomatic complexity:|**101**|5.94 ± 6.27|22|`Graph::modifygraph`|

**12**

**2020-04-22 08:47:11**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162537)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.026 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 87.16 %, required: 100.00 %
        -   Max. run time: 1.991 s (limit: 2.000 s)
        -   Total run time: 18.651 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**321**|18.88 ± 17.37|53|`Graph::modifygraph`|
|Cyclomatic complexity:|**106**|6.24 ± 6.38|18|`Graph::maxflow`|

**11**

**2020-04-22 05:07:41**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162533)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.026 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': Abnormal program termination (Time limit exceeded)
        -   Program was killed after: 2.006 s (limit: 2.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Time limit exceeded
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**321**|18.88 ± 17.37|53|`Graph::modifygraph`|
|Cyclomatic complexity:|**103**|6.06 ± 6.08|18|`Graph::maxflow`|

**10**

**2020-04-22 03:01:04**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162531)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.027 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 87.16 %, required: 100.00 %
        -   Max. run time: 1.898 s (limit: 2.000 s)
        -   Total run time: 17.642 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**317**|18.65 ± 17.16|53|`Graph::modifygraph`|
|Cyclomatic complexity:|**97**|5.71 ± 5.72|18|`Graph::maxflow`|

**9**

**2020-04-22 02:39:58**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162529)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.023 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 84.40 %, required: 100.00 %
        -   Max. run time: 1.737 s (limit: 2.000 s)
        -   Total run time: 17.154 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**315**|18.53 ± 16.93|51|`Graph::modifygraph`|
|Cyclomatic complexity:|**95**|5.59 ± 5.48|18|`Graph::maxflow`|

**8**

**2020-04-22 02:08:17**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162527)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.028 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 84.40 %, required: 100.00 %
        -   Max. run time: 1.860 s (limit: 2.000 s)
        -   Total run time: 18.808 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**317**|18.65 ± 17.16|53|`Graph::modifygraph`|
|Cyclomatic complexity:|**99**|5.82 ± 5.98|20|`Graph::modifygraph`|

**7**

**2020-04-22 01:58:31**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162526)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.025 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 84.40 %, required: 100.00 %
        -   Max. run time: 1.874 s (limit: 2.000 s)
        -   Total run time: 17.786 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**315**|18.53 ± 16.93|51|`Graph::modifygraph`|
|Cyclomatic complexity:|**95**|5.59 ± 5.48|18|`Graph::maxflow`|

**6**

**2020-04-22 01:33:19**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162524)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.027 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': Abnormal program termination (Time limit exceeded)
        -   Program was killed after: 2.006 s (limit: 2.000 s)
        -   Peak mem usage: 5644 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Time limit exceeded
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**307**|18.06 ± 16.11|50|`Graph::maxflow`|
|Cyclomatic complexity:|**92**|5.41 ± 5.18|18|`Graph::maxflow`|

**5**

**2020-04-20 06:36:31**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1162189)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.023 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 67.89 %, required: 100.00 %
        -   Max. run time: 1.741 s (limit: 2.000 s)
        -   Total run time: 16.759 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**17**|--|--|--|
|Lines of code:|**303**|17.82 ± 15.77|50|`Graph::maxflow`|
|Cyclomatic complexity:|**90**|5.29 ± 5.03|18|`Graph::maxflow`|

**4**

**2020-04-19 20:16:53**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1161734)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.026 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 8.26 %, required: 100.00 %
        -   Max. run time: 1.805 s (limit: 2.000 s)
        -   Total run time: 15.721 s (limit: 20.000 s)
        -   Peak mem usage: 5780 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**16**|--|--|--|
|Lines of code:|**298**|18.63 ± 21.55|78|`Graph::mincut`|
|Cyclomatic complexity:|**87**|5.44 ± 7.09|27|`Graph::mincut`|

**3**

**2020-04-19 06:20:14**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1161020)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.030 s (limit: 2.000 s)
        -   Total run time: 0.050 s
        -   Peak mem usage: 5504 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': Abnormal program termination (Segmentation fault/Bus error/Memory limit exceeded/Stack limit exceeded)
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.008 s (limit: 20.000 s)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Seggmentation fault
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**20**|--|--|--|
|Lines of code:|**323**|16.15 ± 19.78|78|`Graph::mincut`|
|Cyclomatic complexity:|**97**|4.85 ± 6.49|27|`Graph::mincut`|

**2**

**2020-04-19 00:38:14**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1160967)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.023 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': Abnormal program termination (Time limit exceeded)
        -   Program was killed after: 2.004 s (limit: 2.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Time limit exceeded
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**15**|--|--|--|
|Lines of code:|**307**|20.47 ± 21.71|78|`Graph::mincut`|
|Cyclomatic complexity:|**91**|6.07 ± 7.25|27|`Graph::mincut`|

**1**

**2020-04-18 02:30:29**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1896&Tsk=1642&Sub=1160378)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.028 s
        -   Peak mem usage: 5512 KiB (limit: 125570 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on large dataset': failed
        -   result: 47.71 %, required: 100.00 %
        -   Max. run time: 1.781 s (limit: 2.000 s)
        -   Total run time: 16.840 s (limit: 20.000 s)
        -   Peak mem usage: 5776 KiB (limit: 125570 KiB)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 15.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**15**|--|--|--|
|Lines of code:|**279**|18.60 ± 18.93|74|`Graph::mincut`|
|Cyclomatic complexity:|**79**|5.27 ± 6.19|26|`Graph::mincut`|


