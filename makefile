all:
	gcc main.c matrix.c -o main
run:
	./main
clean:
	$(RM) main