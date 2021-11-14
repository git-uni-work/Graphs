||
|[ProgTest](https://progtest.fit.cvut.cz/index.php?X=Main)  ►  [BIE-AG2 (20/21 LS)](https://progtest.fit.cvut.cz/index.php?X=Course&Cou=332)  ►  [Task 1](https://progtest.fit.cvut.cz/index.php?X=TaskGrp&Cou=332&Tgr=2111)  ►  **Beard**|[Logout](https://progtest.fit.cvut.cz/index.php?X=Logout)|

||
|**Beard**|

**Submission deadline:**

**2021-03-24 23:59:59**

 

**Evaluation:**

**1.0000**

**Max. assessment:**

**1.0000** (Without bonus points)

**Submissions:**

24 / 25

**Advices:**

0 / 0

After almost a year spent in the lockdown there is finally summer – part of the year when the coronavirus is getting much weaker. Due to all the restrictions the current establishment have very low support. To get voters on their side, the goverment decided to open pubs and restaurants. But the situation is not so easy. After a couple of months spend in the bed, all persons have long hairs and beards which prevents them from enjoying opened pubs.

The solution is obvious. All the barbers must be opened as soon as possible. But there is almost nothing to open – after months without customers, most hairdressers and barbers went bankrupt. This is problem especially in small towns.

Your uncle is major in the small village somewhere in the forrests. He is planning to organize a celebration. To avert a disaster, which the German media call *Armageddondurcheinenlangenbartverursacht*, your uncle decided to pay for two barbers just before the celebration.

Barbers works in pair and are paid for every hour which at least one of them spent with scissors in their hands. The major really want to decrease the spendings as much as possible. To do this, he must split all applicants into two queues and balance this queues. But, some of the persons have conflict with some other persons. Such a conflict pair cannot part of the same queue.

Your goal is to divide persons into two queues such that there are no conflict pair in the same queue. Moreover, there is a need to minimize the length of the longer queue to save the major’s spendings.

Input format
------------

-   The input starts with numbers N and M, where N stands for number of persons, and M stands for number of following confilt pairs.
-   Then follows M conflict pairs x y, 0 ≤ x,y \< N.
-   Persons in depresion can have conflict with themselves. Single conflict pair can occur multiple times in the list.
-   The input is always valid.

Output format
-------------

-   The output consists out of the single line. The line contains the difference D (non-negative integer) between number of persons in the first queue and number of persons in the second queue. If there is no possibility to divide villagers into two queues without conflicts, then you have to print -1.

Classification conditions
-------------------------

-   To obtain 1 point you must properly recognize whether instance with at most N ≤ 1000 persons can be divided into two queues without conflicts. The difference between lengths of queues will not be checked.
-   To obtain 5 points you must solve instances with 1 ≤ N ≤ 200.
-   To obtain 10 points you must solve instances with 1 ≤ N ≤ 1000.
-   To obtain 15 points you must solve instances with 1 ≤ N ≤ 10000.

Examples
--------

#### Example input 1

    3 3
    0 1
    1 2
    2 0

#### Example output 1

    -1

* * * * *

#### Example input 2

    6 4
    0 1
    0 2
    1 3
    3 4

#### Example output 2

    0

* * * * *

 **Reference**

 

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Základní test na rozpoznání řešitelné instance': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.021 s (limit: 2.000 s)
        -   Total run time: 0.670 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Test malými daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 1.406 s (limit: 5.000 s)
        -   Bonus test - success, evaluation: 500.00 %
    -   Test 'Test středními daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.021 s (limit: 2.000 s)
        -   Total run time: 0.606 s (limit: 5.000 s)
        -   Bonus test - success, evaluation: 200.00 %
    -   Test 'Test velkými daty': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.746 s (limit: 2.000 s)
        -   Total run time: 5.757 s (limit: 15.000 s)
        -   Bonus test - success, evaluation: 150.00 %
    -   Overall ratio: 1500.00 % (= 1.00 \* 5.00 \* 2.00 \* 1.50)
-   Retries penalty: 0.00 % (= (73 - 25) \* 0 %)
-   Total percent: 1500.00 %
-   Early submission bonus: 0.25
-   Total points: 15.00 \* ( 1.00 + 0.25 ) = 18.75

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**3**|--|--|--|
|Lines of code:|**67**|22.33 ± 5.31|29|`bi`|
|Cyclomatic complexity:|**21**|7.00 ± 1.63|9|`ag2`|

**24**

**2021-03-24 23:58:18**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267833)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.022 s (limit: 2.000 s)
        -   Total run time: 0.531 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 70.80 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.921 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 83.00 %, required: 100.00 %
        -   Max. run time: 0.013 s (limit: 2.000 s)
        -   Total run time: 0.511 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 73.00 %, required: 100.00 %
        -   Max. run time: 0.107 s (limit: 2.000 s)
        -   Total run time: 2.130 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**157**|26.17 ± 12.31|45|`Graph::calc`|
|Cyclomatic complexity:|**39**|6.50 ± 4.57|15|`Graph::calc`|

**23**

**2021-03-24 23:56:59**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267832)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.017 s (limit: 2.000 s)
        -   Total run time: 0.630 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 73.20 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.929 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 82.00 %, required: 100.00 %
        -   Max. run time: 0.009 s (limit: 2.000 s)
        -   Total run time: 0.486 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 72.00 %, required: 100.00 %
        -   Max. run time: 0.058 s (limit: 2.000 s)
        -   Total run time: 2.091 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**157**|26.17 ± 12.31|45|`Graph::calc`|
|Cyclomatic complexity:|**39**|6.50 ± 4.57|15|`Graph::calc`|

**22**

**2021-03-24 23:54:12**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267831)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.026 s (limit: 2.000 s)
        -   Total run time: 0.790 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 60.40 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 1.486 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 82.00 %, required: 100.00 %
        -   Max. run time: 0.016 s (limit: 2.000 s)
        -   Total run time: 0.763 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 80.00 %, required: 100.00 %
        -   Max. run time: 0.059 s (limit: 2.000 s)
        -   Total run time: 2.502 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**157**|26.17 ± 12.31|45|`Graph::calc`|
|Cyclomatic complexity:|**36**|6.00 ± 3.70|12|`Graph::calc`|

**21**

**2021-03-24 23:51:58**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267829)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.024 s (limit: 2.000 s)
        -   Total run time: 0.636 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 64.80 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.976 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 88.00 %, required: 100.00 %
        -   Max. run time: 0.013 s (limit: 2.000 s)
        -   Total run time: 0.599 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 79.00 %, required: 100.00 %
        -   Max. run time: 0.058 s (limit: 2.000 s)
        -   Total run time: 2.107 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**157**|26.17 ± 12.31|45|`Graph::calc`|
|Cyclomatic complexity:|**37**|6.17 ± 3.98|13|`Graph::calc`|

**20**

**2021-03-24 23:47:54**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267828)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.024 s (limit: 2.000 s)
        -   Total run time: 0.593 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 76.40 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 1.052 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 83.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.526 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 76.00 %, required: 100.00 %
        -   Max. run time: 0.063 s (limit: 2.000 s)
        -   Total run time: 2.278 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**157**|26.17 ± 12.31|45|`Graph::calc`|
|Cyclomatic complexity:|**39**|6.50 ± 4.57|15|`Graph::calc`|

**19**

**2021-03-24 23:42:36**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267827)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.049 s (limit: 2.000 s)
        -   Total run time: 0.657 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 72.40 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.989 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 82.00 %, required: 100.00 %
        -   Max. run time: 0.016 s (limit: 2.000 s)
        -   Total run time: 0.560 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 71.00 %, required: 100.00 %
        -   Max. run time: 0.058 s (limit: 2.000 s)
        -   Total run time: 2.296 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**157**|26.17 ± 12.31|45|`Graph::calc`|
|Cyclomatic complexity:|**38**|6.33 ± 4.27|14|`Graph::calc`|

**18**

**2021-03-24 23:13:07**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267824)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.043 s (limit: 2.000 s)
        -   Total run time: 0.837 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 63.20 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 1.424 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 79.00 %, required: 100.00 %
        -   Max. run time: 0.073 s (limit: 2.000 s)
        -   Total run time: 0.870 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 62.00 %, required: 100.00 %
        -   Max. run time: 0.387 s (limit: 2.000 s)
        -   Total run time: 2.865 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**148**|24.67 ± 11.47|40|`Graph::calc`|
|Cyclomatic complexity:|**38**|6.33 ± 4.27|14|`Graph::calc`|

**17**

**2021-03-21 23:59:30**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267154)

**Submission status:**

Evaluated

 

**Evaluation:**

0.9000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.035 s (limit: 2.000 s)
        -   Total run time: 0.754 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 68.80 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 1.604 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 75.00 %, required: 100.00 %
        -   Max. run time: 0.017 s (limit: 2.000 s)
        -   Total run time: 0.912 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 52.00 %, required: 100.00 %
        -   Max. run time: 1.122 s (limit: 2.000 s)
        -   Total run time: 3.400 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 90.00 %
-   Total percent: 90.00 %
-   Total points: 0.90 \* 1.00 = 0.90

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**155**|25.83 ± 14.10|49|`Graph::calc`|
|Cyclomatic complexity:|**42**|7.00 ± 5.54|18|`Graph::calc`|

**16**

**2021-03-21 23:52:03**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267100)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.021 s (limit: 2.000 s)
        -   Total run time: 0.656 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 67.60 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 1.474 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 80.00 %, required: 100.00 %
        -   Max. run time: 0.013 s (limit: 2.000 s)
        -   Total run time: 0.618 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 64.00 %, required: 100.00 %
        -   Max. run time: 0.069 s (limit: 2.000 s)
        -   Total run time: 2.273 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**146**|24.33 ± 11.86|40|`Graph::calc`|
|Cyclomatic complexity:|**37**|6.17 ± 3.98|13|`Graph::calc`|

**15**

**2021-03-21 23:48:30**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267082)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.037 s (limit: 2.000 s)
        -   Total run time: 0.906 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 71.20 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 1.414 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 73.00 %, required: 100.00 %
        -   Max. run time: 0.012 s (limit: 2.000 s)
        -   Total run time: 0.595 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 52.00 %, required: 100.00 %
        -   Max. run time: 1.049 s (limit: 2.000 s)
        -   Total run time: 3.700 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**146**|24.33 ± 11.86|40|`Graph::calc`|
|Cyclomatic complexity:|**37**|6.17 ± 3.98|13|`Graph::calc`|

**14**

**2021-03-21 23:38:56**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267036)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.023 s (limit: 2.000 s)
        -   Total run time: 0.634 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 70.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 1.575 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 74.00 %, required: 100.00 %
        -   Max. run time: 0.018 s (limit: 2.000 s)
        -   Total run time: 0.884 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 54.00 %, required: 100.00 %
        -   Max. run time: 0.200 s (limit: 2.000 s)
        -   Total run time: 2.632 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**146**|24.33 ± 11.86|40|`Graph::calc`|
|Cyclomatic complexity:|**37**|6.17 ± 3.98|13|`Graph::calc`|

**13**

**2021-03-21 23:32:57**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1267020)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.026 s (limit: 2.000 s)
        -   Total run time: 0.680 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 67.20 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 1.734 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 75.00 %, required: 100.00 %
        -   Max. run time: 0.016 s (limit: 2.000 s)
        -   Total run time: 0.862 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 47.00 %, required: 100.00 %
        -   Max. run time: 0.118 s (limit: 2.000 s)
        -   Total run time: 2.249 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**144**|24.00 ± 11.43|38|`Graph::calc`|
|Cyclomatic complexity:|**34**|5.67 ± 3.20|10|`Graph::calc`|

**12**

**2021-03-21 22:25:42**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1266789)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.032 s (limit: 2.000 s)
        -   Total run time: 0.645 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 63.60 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 1.688 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 78.00 %, required: 100.00 %
        -   Max. run time: 0.016 s (limit: 2.000 s)
        -   Total run time: 0.856 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 69.00 %, required: 100.00 %
        -   Max. run time: 0.073 s (limit: 2.000 s)
        -   Total run time: 2.484 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**146**|24.33 ± 11.86|40|`Graph::calc`|
|Cyclomatic complexity:|**36**|6.00 ± 3.70|12|`Graph::calc`|

**11**

**2021-03-21 21:44:21**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1266647)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.171 s (limit: 2.000 s)
        -   Total run time: 0.824 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 64.40 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 1.545 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 76.00 %, required: 100.00 %
        -   Max. run time: 0.021 s (limit: 2.000 s)
        -   Total run time: 0.886 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 62.00 %, required: 100.00 %
        -   Max. run time: 0.075 s (limit: 2.000 s)
        -   Total run time: 2.701 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**148**|24.67 ± 12.31|42|`Graph::calc`|
|Cyclomatic complexity:|**34**|5.67 ± 3.20|10|`Graph::calc`|

**10**

**2021-03-21 21:31:12**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1266610)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': Abnormal program termination (Time limit exceeded)
        -   Cumulative test time exceeded, killed after:: 5.004 s (limit: 5.000 s)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Time limit exceeded
    -   Overall ratio: 0.00 %
-   Total percent: 0.00 %
-   Total points: 0.00 \* 1.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**8**|--|--|--|
|Lines of code:|**140**|17.50 ± 11.98|43|`Graph::bfs`|
|Cyclomatic complexity:|**30**|3.75 ± 2.63|8|`Graph::bfs`|

**9**

**2021-03-21 21:22:24**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1266589)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': Abnormal program termination (Time limit exceeded)
        -   Cumulative test time exceeded, killed after:: 5.004 s (limit: 5.000 s)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Time limit exceeded
    -   Overall ratio: 0.00 %
-   Total percent: 0.00 %
-   Total points: 0.00 \* 1.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**8**|--|--|--|
|Lines of code:|**140**|17.50 ± 11.98|43|`Graph::bfs`|
|Cyclomatic complexity:|**30**|3.75 ± 2.63|8|`Graph::bfs`|

**8**

**2021-03-21 20:56:55**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1266524)

**Submission status:**

Evaluated

 

**Evaluation:**

0.0000

-   **Evaluator: computer**
    -   Compile in 'pedantic' mode failed (10 % penalty).
    -   Test 'Solvable instance recognition test': Abnormal program termination (Segmentation fault/Bus error/Memory limit exceeded/Stack limit exceeded)
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.008 s (limit: 5.000 s)
        -   Mandatory test failed, evaluation: 0.00 %
        -   Seggmentation fault
    -   Overall ratio: 0.00 %
-   Total percent: 0.00 %
-   Total points: 0.00 \* 1.00 = 0.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**7**|--|--|--|
|Lines of code:|**155**|22.14 ± 12.94|43|`Graph::bfs`|
|Cyclomatic complexity:|**35**|5.00 ± 3.38|10|`Graph::calc`|

**7**

**2021-03-21 16:05:19**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1265783)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.023 s (limit: 2.000 s)
        -   Total run time: 0.663 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 58.80 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 1.444 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 80.00 %, required: 100.00 %
        -   Max. run time: 0.028 s (limit: 2.000 s)
        -   Total run time: 0.653 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 53.00 %, required: 100.00 %
        -   Max. run time: 0.118 s (limit: 2.000 s)
        -   Total run time: 2.588 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**156**|26.00 ± 14.38|50|`Graph::calc`|
|Cyclomatic complexity:|**37**|6.17 ± 3.98|13|`Graph::calc`|

**6**

**2021-03-21 15:47:49**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1265758)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.019 s (limit: 2.000 s)
        -   Total run time: 0.719 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 62.40 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 1.091 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 81.00 %, required: 100.00 %
        -   Max. run time: 0.015 s (limit: 2.000 s)
        -   Total run time: 0.686 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 54.00 %, required: 100.00 %
        -   Max. run time: 0.102 s (limit: 2.000 s)
        -   Total run time: 2.071 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**156**|26.00 ± 14.38|50|`Graph::calc`|
|Cyclomatic complexity:|**36**|6.00 ± 3.70|12|`Graph::calc`|

**5**

**2021-03-21 15:06:02**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1265671)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.021 s (limit: 2.000 s)
        -   Total run time: 0.729 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 66.40 %, required: 100.00 %
        -   Max. run time: 0.006 s (limit: 2.000 s)
        -   Total run time: 0.967 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 68.00 %, required: 100.00 %
        -   Max. run time: 0.013 s (limit: 2.000 s)
        -   Total run time: 0.557 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 59.00 %, required: 100.00 %
        -   Max. run time: 0.085 s (limit: 2.000 s)
        -   Total run time: 2.168 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**158**|26.33 ± 14.94|52|`Graph::calc`|
|Cyclomatic complexity:|**35**|5.83 ± 3.44|11|`Graph::calc`|

**4**

**2021-03-20 17:08:08**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1264468)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.040 s (limit: 2.000 s)
        -   Total run time: 0.698 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 68.40 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 1.356 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 75.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 0.525 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 43.00 %, required: 100.00 %
        -   Max. run time: 0.055 s (limit: 2.000 s)
        -   Total run time: 2.291 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**141**|23.50 ± 10.86|37|`Graph::bfs`|
|Cyclomatic complexity:|**32**|5.33 ± 2.81|8|`Graph::bfs`|

**3**

**2021-03-20 16:11:12**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1264364)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.041 s (limit: 2.000 s)
        -   Total run time: 0.944 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 14.00 %, required: 100.00 %
        -   Max. run time: 0.008 s (limit: 2.000 s)
        -   Total run time: 1.735 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 70.00 %, required: 100.00 %
        -   Max. run time: 0.022 s (limit: 2.000 s)
        -   Total run time: 0.920 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 40.00 %, required: 100.00 %
        -   Max. run time: 0.201 s (limit: 2.000 s)
        -   Total run time: 2.706 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**148**|24.67 ± 13.65|50|`Graph::calc`|
|Cyclomatic complexity:|**36**|6.00 ± 3.92|13|`Graph::calc`|

**2**

**2021-03-20 15:14:19**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1264262)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.026 s (limit: 2.000 s)
        -   Total run time: 0.617 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 14.00 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 1.373 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 70.00 %, required: 100.00 %
        -   Max. run time: 0.013 s (limit: 2.000 s)
        -   Total run time: 0.809 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 40.00 %, required: 100.00 %
        -   Max. run time: 0.332 s (limit: 2.000 s)
        -   Total run time: 2.865 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**6**|--|--|--|
|Lines of code:|**131**|21.83 ± 9.10|33|`Graph::calc`|
|Cyclomatic complexity:|**32**|5.33 ± 2.87|9|`Graph::calc`|

**1**

**2021-03-18 19:02:59**

[Download](https://progtest.fit.cvut.cz/index.php?X=TaskD&Cou=332&Tgr=2111&Tsk=1682&Sub=1262770)

**Submission status:**

Evaluated

 

**Evaluation:**

1.0000

-   **Evaluator: computer**
    -   Program compiled
    -   Test 'Solvable instance recognition test': success
        -   result: 100.00 %, required: 100.00 %
        -   Max. run time: 0.034 s (limit: 2.000 s)
        -   Total run time: 0.919 s (limit: 5.000 s)
        -   Mandatory test success, evaluation: 100.00 %
    -   Test 'Small data': failed
        -   result: 36.40 %, required: 100.00 %
        -   Max. run time: 0.007 s (limit: 2.000 s)
        -   Total run time: 1.483 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Medium data': failed
        -   result: 72.00 %, required: 100.00 %
        -   Max. run time: 0.022 s (limit: 2.000 s)
        -   Total run time: 0.678 s (limit: 5.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Test 'Larga data': failed
        -   result: 69.00 %, required: 100.00 %
        -   Max. run time: 0.250 s (limit: 2.000 s)
        -   Total run time: 2.537 s (limit: 15.000 s)
        -   Bonus test - failed, evaluation: No bonus awarded
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
        -   Failed (invalid output)
    -   Overall ratio: 100.00 %
-   Total percent: 100.00 %
-   Total points: 1.00 \* 1.00 = 1.00

**SW metrics:**

||
| |Total|Average|Maximum|Function name|
|Functions:|**5**|--|--|--|
|Lines of code:|**99**|19.80 ± 10.94|39|`Graph::print`|
|Cyclomatic complexity:|**24**|4.80 ± 3.37|11|`Graph::print`|


