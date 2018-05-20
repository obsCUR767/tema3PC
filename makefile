build: main.c
	gcc -o tema3.exe main.c
clean: *.o
	rm *.o
	rm *.exe
	rm *.out
run: *.exe
	./tema3.exe

