CC=g++
CFLAGS=-I.


%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: roman_to_decimal.o test.o 
	$(CC) -o run_test roman_to_decimal.o test.o -I. -lboost_unit_test_framework
