# " PROGRAMA VIRUS EPIDEMIC "


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
