folder=..

all:  simple_sum.o simple_mse.o simple_log.o main.o
	gcc -g main.o simple_sum.o simple_mse.o simple_log.o -o simple_math

simple_sum.o: 
	gcc -g -c $(folder)/simple_sum.c

simple_log.o:  $(folder)/simple_log.c
	gcc -g -c $(folder)/simple_log.c

simple_mse.o: 
	gcc -g -c $(folder)/simple_mse.c

main.o: 
	gcc -g -c $(folder)/main.c

clean:
	rm *.o simple_math 
