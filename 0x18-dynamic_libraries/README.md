# Dynamic Libraries in C

### Static Versus Dynamic Libraries in C (Linux OS)
|Library			|Static			  	   	|Dynamic			    		|
|-------------------------------|---------------------------------------|-----------------------------------------------|
|Compile library files  	|gcc -c part1.c -o part1.o	   	|gcc -c -fpic part1.c -o part1.o  		|
|				|gcc -c part2.c -o part2.o	   	|				    		|
|Create library			|ar rcs libmylib.a part1.o part2.o 	|gcc -shared -o libmylib.so part1.o part2.o  	|
|Compile main program		|gcc -c program.c -o program.o	   	|gcc -c program.c -o program.o			|
|Link library to main program   |gcc -o program program.o -L. -lmylib	|gcc -o program program.o -L. -lmylib		|
|				|					|Add library path to environment variable:	|
|				|					|export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH	|
|Run program			|./program				|./program					|

The above assumes the library is located in the same directory as the executable program
