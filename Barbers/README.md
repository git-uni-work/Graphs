# " BARBERS "


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
