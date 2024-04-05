CC = gcc -Wall -Werror -Wextra
SRC= $(wildcard s21_*.c)
OBJ= $(patsubst %.c, %.o, ${SRC})
LFLAGS= -lcheck -lm -lpthread 
GCF= -ftest-coverage -fprofile-arcs --coverage

ifeq ($(shell uname -s), Linux)
	LFLAGS += -lrt -lsubunit
endif

all: s21_math.a

rebuild: clean s21_math.a


clean:
	rm -f s21_math
	rm -f *.o
	rm -f gcov_report
	rm -f test
	rm -f gcov_report.info
	rm -f *.gcda
	rm -f *.gcno
	rm -f *.a
	rm -f -R test_output 

s21_math.o:
	$(CC) -c ${SRC}

s21_math.a: s21_math.o
	ar rcs s21_math.a ${OBJ}
	ranlib s21_math.a

test: unit_tests.c s21_math.a
	$(CC) -o test $^ ${LFLAGS}
	./test

gcov_report: clean
	# $(CC) $(GCF) -c unit_tests.c
	$(CC) $(GCF) $(SRC) unit_tests.c $(LFLAGS) -o gcov_report
	./gcov_report
	lcov -t "test" -o gcov_report.info -c -d .
	genhtml -o test_output gcov_report.info
	open ./test_output/index.html

style: clean
	cp ../materials/linters/.clang-format ./
	clang-format -n *.c
	clang-format -n *.h
	rm -rf .clang-format
clang: clean
	cp ../materials/linters/.clang-format ./
	clang-format -i *.c
	clang-format -i *.h
	rm -rf .clang-format