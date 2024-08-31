build: main.c
	gcc main.c -o a.exe
	gcc -E main.c -o a.i
	gcc -S main.c -o a.s
	gcc -C main.c -o a.o