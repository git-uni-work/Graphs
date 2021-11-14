||
|[ProgTest](https://progtest.fit.cvut.cz/index.php?X=Main)  ►  [BIE-AG2 (19/20 LS)](https://progtest.fit.cvut.cz/index.php?X=Course&Cou=302)  ►  [Task 1](https://progtest.fit.cvut.cz/index.php?X=TaskGrp&Cou=302&Tgr=1895)  ►  **Programavirus**|[Logout](https://progtest.fit.cvut.cz/index.php?X=Logout)|

||
|**Programavirus**|

**Submission deadline:**

**2020-03-22 23:59:59**

 

**Evaluation:**

**0.0000**

**Max. assessment:**

**5.0000** (Without bonus points)

**Submissions:**

15 / 30

**Advices:**

0 / 0

Attention! There have been reports of a new, highly infectious, virus, which can even endanger students' lives! It is a virus, that after a very brief incubation period severely impacts one's routine. Infected people show signs of irresistible desire to code Progtest tasks. That alone may seem harmless at first sight, but there have been cases of people, that for several days utterly forgot to eat, or even to sleep! Virus spreads from dirty keyboards, which implies high risk of infection for people that study at FIT. For that reason, the dean of faculty announced that it is necessary to wash hands after each coding session and he also forbid students to log to Progtest. Pharmacy below red canteen even began to sell surgical masks for keyboards ...

Luckily, our colleagues from UCT university quickly discovered an antidote. Said antidote cures the virus with 100% success rate and it also can be used as a vaccination. However, for this antidote to be effective, it is needed to inject it into a precise place in a cellular structure of a patient. A cellular structure of a person consists of cells and bonds between cells. The place, which is to be the target of an antidote injection, is a cluster of cells. A cluster of cells consist of cells and bonds from a cellular structure. In order to achieve 100% success rate of the antidote, it is needed to identify a maximal possible cluster of cells, which meets specific requirements.

The choice of the right cell cluster consists of two phases. In the first phase, it is needed to identify so called robust clusters. Robust clusters are required to meet the following criteria:

1.  Each cell of a robust cluster is connected with every other cell of the robust cluster either directly by a bond, or indirectly via a sequence of bonds,
2.  after deleting any cell and its bonds from a robust cluster, the requirement 1) still holds for the rest of the cells and bonds of the robust cluster,
3.  and a robust cluster is not a part of any other cluster, which also meets the requirements 1) and 2) - we say a robust cluster is inclusion-wise maximal.

Robust clusters are perfect candidates for antidote injection, because they ensure space for the antidote to spread even after possible necrosis of a cell of the cluster. In the second phase, the largest possible cluster (cell-wise), which allows an ideal spread of the antidote, is chosen from the set of robust clusters. We say a robust cluster allows an ideal spread of the antidote, if among cells of the cluster, there is no sequence of bonds of odd length starting and ending in the same cell.

It is needed to apply the antidote to all of FIT students as soon as possible. To find the largest possible cluster (which is also robust and allows the antidote to spread well) for each student, is however a very time consuming task. Can you help the faculty optimize this process?

At the input, you are given a cellular scan of a student. A cellular scan contains the information about student's cellular structure, i.e. describes which cells are connected by a bond. There is at most a single bond between two particular cells. Bonds are not connected in any other places but cells. No bond connects a cell with itself. The goal is to find the largest possible cluster (cell-wise) which meets the above criteria.

**Input Format:**

-   On the first line there are two numbers `N` and `M`, which specify the number of cells and number of bonds in the cellular structure of a student.
-   The numbering of cells is zero-based, their numbers are thus `0, 1, ..., N-1`, respectively.
-   After that `M` lines follow, each containing two numbers `X` and `Y`, `0 ≤ X,Y < N`, `X ≠ Y`, identifiers of pairs of cells, that are connected by a bond.
-   Cellular structure always contains at least a single cell, but it might not contain any bond.
-   You can assume the input is valid.

**Output Format:**

-   Output consists of either 1 or 2 lines.
-   On the first line output the number of cells `B` in the largest cluster, which meets the above criteria. If such cluster does not exist, output `0`. If the result cluster exists (`B > 0`), on the second line output `B` space-separated numbers, the identifier of cells in the largest cluster.
-   Should there be multiple solutions, output an arbitrary one.

**Classification Conditions:**

1.  To pass the compulsory tests (basic and small data tests), your solution has to return correct answers for cellular structures with at most 100 cells and 1 000 bonds.
2.  To pass the test on large dataset, your solution has to return correct answers for cellular structures with at most 50 000 cells and 1 000 000 bonds.

**Examples:**

* * * * *

**Input example 1:**

    9 10
    0 1
    1 2
    2 3
    3 4
    4 0
    2 5
    6 5
    8 5
    7 8
    6 7

**Output example 1:**

    4
    5 7 8 6

* * * * *

**Input example 2:**

    4 6
    0 1
    2 0
    0 3
    2 1
    3 2
    1 3

**Output example 2:**

    0

* * * * *

**Input example 3:**

    10 11
    0 1
    1 2
    2 3
    2 5
    8 2
    3 5
    7 5
    3 4
    6 7
    7 8
    9 8

**Output example 3:**

    2
    6 7

* * * * *

 **Reference**

 

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Základní test ukázkovými daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.022 s
        -   Peak mem usage: 15656 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test malými daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.009 s (limit: 2.000 s)
        -   Total run time: 0.268 s (limit: 20.000 s)
        -   Peak mem usage: 15656 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test velkými daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.464 s (limit: 2.500 s)
        -   Total run time: 3.389 s (limit: 20.000 s)
        -   Peak mem usage: 42936 KiB (limit: 223227 KiB)
        -   Bonus test - success, evaluation: 300.00 %
    -   Overall ratio: 300.00 % (= 1.00 \* 1.00 \* 3.00)
-   Total percent: 300.00 %
-   Early submission bonus: 1.25
-   Total points: 3.00 \* ( 5.00 + 1.25 ) = 18.75

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**123**|20.50 ± 16.45|46|`main`|
|Cyclomatic complexity:|**30**|5.00 ± 3.16|10|`go`|

**15**

**2020-03-22 23:50:41**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1147077)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.020 s
        -   Peak mem usage: 5528 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 76.74 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.306 s (limit: 20.000 s)
        -   Peak mem usage: 5664 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**11**|--|--|--|
|Lines of code:|**186**|16.91 ± 14.38|46|`Graph::CC`|
|Cyclomatic complexity:|**50**|4.55 ± 4.48|16|`Graph::DFS`|

**14**

**2020-03-22 18:59:22**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1146645)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.018 s
        -   Peak mem usage: 5524 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 60.47 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.233 s (limit: 20.000 s)
        -   Peak mem usage: 5924 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**13**|--|--|--|
|Lines of code:|**248**|19.08 ± 15.64|50|`Graph::CC`|
|Cyclomatic complexity:|**64**|4.92 ± 4.50|16|`Graph::DFS`|

**13**

**2020-03-22 18:10:08**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1146598)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.021 s
        -   Peak mem usage: 5528 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 53.49 %, required: 100.00 %
        -   Max. run time: 0.009 s (limit: 2.000 s)
        -   Total run time: 0.291 s (limit: 20.000 s)
        -   Peak mem usage: 5792 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**13**|--|--|--|
|Lines of code:|**238**|18.31 ± 14.24|48|`Graph::CC`|
|Cyclomatic complexity:|**63**|4.85 ± 4.38|16|`Graph::DFS`|

**12**

**2020-03-22 00:37:31**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1146160)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.017 s
        -   Peak mem usage: 5528 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 76.74 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.184 s (limit: 20.000 s)
        -   Peak mem usage: 5664 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**11**|--|--|--|
|Lines of code:|**186**|16.91 ± 14.38|46|`Graph::CC`|
|Cyclomatic complexity:|**50**|4.55 ± 4.48|16|`Graph::DFS`|

**11**

**2020-03-21 04:55:49**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1145523)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.019 s
        -   Peak mem usage: 5524 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 74.42 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.212 s (limit: 20.000 s)
        -   Peak mem usage: 5656 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**11**|--|--|--|
|Lines of code:|**178**|16.18 ± 13.03|40|`Graph::DFS`|
|Cyclomatic complexity:|**46**|4.18 ± 3.86|14|`Graph::DFS`|

**10**

**2020-03-21 04:50:58**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1145522)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.019 s
        -   Peak mem usage: 5524 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 74.42 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.208 s (limit: 20.000 s)
        -   Peak mem usage: 5656 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**11**|--|--|--|
|Lines of code:|**177**|16.09 ± 12.87|39|`Graph::DFS`|
|Cyclomatic complexity:|**45**|4.09 ± 3.63|13|`Graph::DFS`|

**9**

**2020-03-21 03:10:46**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1145520)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.020 s
        -   Peak mem usage: 5524 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 58.14 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.249 s (limit: 20.000 s)
        -   Peak mem usage: 5656 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**11**|--|--|--|
|Lines of code:|**175**|15.91 ± 12.55|38|`Graph::CC`|
|Cyclomatic complexity:|**43**|3.91 ± 3.20|11|`Graph::DFS`|

**8**

**2020-03-21 02:25:55**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1145511)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.019 s
        -   Peak mem usage: 5528 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 48.84 %, required: 100.00 %
        -   Max. run time: 0.009 s (limit: 2.000 s)
        -   Total run time: 0.230 s (limit: 20.000 s)
        -   Peak mem usage: 7248 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**11**|--|--|--|
|Lines of code:|**181**|16.45 ± 13.55|43|`Graph::DFS`|
|Cyclomatic complexity:|**42**|3.82 ± 3.13|11|`Graph::DFS`|

**7**

**2020-03-20 03:27:37**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1144939)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.020 s
        -   Peak mem usage: 5524 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 48.84 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.201 s (limit: 20.000 s)
        -   Peak mem usage: 5656 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**11**|--|--|--|
|Lines of code:|**175**|15.91 ± 12.55|38|`Graph::CC`|
|Cyclomatic complexity:|**43**|3.91 ± 3.20|11|`Graph::DFS`|

**6**

**2020-03-20 02:32:40**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1144936)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.018 s
        -   Peak mem usage: 5524 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 11.63 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.238 s (limit: 20.000 s)
        -   Peak mem usage: 5656 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**11**|--|--|--|
|Lines of code:|**171**|15.55 ± 12.19|38|`Graph::CC`|
|Cyclomatic complexity:|**43**|3.91 ± 3.20|11|`Graph::DFS`|

**5**

**2020-03-20 02:15:42**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1144933)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.009 s (limit: 2.000 s)
        -   Total run time: 0.022 s
        -   Peak mem usage: 5524 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 11.63 %, required: 100.00 %
        -   Max. run time: 0.009 s (limit: 2.000 s)
        -   Total run time: 0.314 s (limit: 20.000 s)
        -   Peak mem usage: 5660 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**10**|--|--|--|
|Lines of code:|**153**|15.30 ± 12.60|37|`Graph::CC`|
|Cyclomatic complexity:|**36**|3.60 ± 3.20|11|`Graph::DFS`|

**4**

**2020-03-20 00:18:33**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1144904)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.021 s
        -   Peak mem usage: 5524 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 11.63 %, required: 100.00 %
        -   Max. run time: 0.009 s (limit: 2.000 s)
        -   Total run time: 0.285 s (limit: 20.000 s)
        -   Peak mem usage: 5660 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**10**|--|--|--|
|Lines of code:|**156**|15.60 ± 12.93|37|`Graph::CC`|
|Cyclomatic complexity:|**37**|3.70 ± 3.26|11|`Graph::DFS`|

**3**

**2020-03-20 00:06:33**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1144895)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.019 s
        -   Peak mem usage: 5524 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 11.63 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.198 s (limit: 20.000 s)
        -   Peak mem usage: 5660 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**10**|--|--|--|
|Lines of code:|**144**|14.40 ± 11.97|37|`Graph::CC`|
|Cyclomatic complexity:|**35**|3.50 ± 3.17|11|`Graph::DFS`|

**2**

**2020-03-19 23:23:47**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1144880)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.018 s
        -   Peak mem usage: 5520 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 11.63 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.222 s (limit: 20.000 s)
        -   Peak mem usage: 5788 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= 1.00 \* 0.00)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**10**|--|--|--|
|Lines of code:|**139**|13.90 ± 11.43|37|`Graph::DFS`|
|Cyclomatic complexity:|**32**|3.20 ± 3.06|11|`Graph::DFS`|

**1**

**2020-03-19 05:11:04**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=302&Tgr=1895&Tsk=1639&Sub=1144503)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Basic test using example data': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 0.018 s
        -   Peak mem usage: 5520 KiB (limit: 66977 KiB)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test on small dataset': failed
        -   result: 11.63 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.208 s (limit: 20.000 s)
        -   Peak mem usage: 5652 KiB (limit: 66977 KiB)
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
    -   Overall ratio: 0.00 % (= (1.00 \* 0.00) \* 0.9)
-   Total percent: 0.00 %
-   Total points: 0.00 \* 5.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**10**|--|--|--|
|Lines of code:|**136**|13.60 ± 10.85|34|`Graph::DFS`|
|Cyclomatic complexity:|**31**|3.10 ± 3.05|11|`Graph::DFS`|


