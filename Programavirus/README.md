# " PROGRAMAVIRUS "


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
