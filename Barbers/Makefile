CXX = g++
CXXFLAGS = -std=c++17 -Wall -pedantic -O2
FILE = hw1.cpp
OUT = ./a.out


test : $(OUT)
			 @ make check0
			 @ make check1
			 @ make check2
			 @ make check3
			 @ make check4
			 @ make check5
			 @ make ye
			 @ make check6
			 @ make check7

check0 : $(OUT)
			 @ cat test.txt | $(OUT)
			 @ echo "OUTPUT = 0"

check1 : $(OUT)
				@ cat test1.txt | $(OUT)
				@ echo "OUTPUT = 4"

check2 : $(OUT)
				@ cat test2.txt | $(OUT)
				@ echo "OUTPUT = 1"

check3 : $(OUT)
				@ cat test3.txt | $(OUT)
				@ echo "OUTPUT = 0"

check4 : $(OUT)
				 @ cat test4.txt | $(OUT)
				 @ echo "OUTPUT = 0"

check5 : $(OUT)
				 @ cat test5.txt | $(OUT)
				 @ echo "OUTPUT = 1"

ye : $(OUT)
		 @ cat ye.txt | $(OUT)
		 @ echo "OUTPUT = 0"

check6 : $(OUT)
				 @ cat test6.txt | $(OUT)
				 @ echo "OUTPUT = 1"

check7 : $(OUT)
				 @ cat test7.txt | $(OUT)
				 @ echo "OUTPUT = 2"

run : $(OUT)
			$(OUT)

compile : $(OUT)

clean :
				rm $(OUT)

$(OUT) : $(FILE)
				 $(CXX) $(CXXFLAGS) $(FILE)
