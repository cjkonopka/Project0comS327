all: iter recursive

iter: proj0iter.c
	gcc -g -Wall -Werror proj0iter.c -o iter
  
recursive: proj0recurs.c
	gcc -g -Wall -Werror proj0recurs.c -o recursive

clean:
	rm -f iter recursive
