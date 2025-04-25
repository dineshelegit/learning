#.PHONY: all dinesh 

#//main: -target $(name) -variable

#all: dinesh main

dinesh:
	@echo "DINESHKUMAR"

main: main.o c1.o c2.o c3.o
	gcc main.o c1.o c2.o c3.o -o main

main.o: main.c h1.h h2.h h3.h
	gcc -c main.c -o main.o

c1.o: c1.c h1.h
	gcc -c c1.c -o c1.o

c2.o: c2.c h2.h
	gcc -c c2.c -o c2.o

c3.o: c3.c h3.h
	gcc -c c3.c -o c3.o
	
clean:
	@rm -f main.o c1.o c2.o c3.o main

#different ver to print
some_file:
	@echo "This line will always print"
	@echo "This line too long, so " \
	      "reverse slash used to continue to the next line"	
	#touch some_file
#	@echo "This line too long,so " \ #IF ANY SPACE AFTER LASH IT SYSNTAX ERROR
#		"reverse lash used to use next line in 1 line"      

some_file1: ;	touch some_file1


#it first it finish other_file then it print some_file
dependency: other_file
	@echo "This will run secound"
	touch some_file
	
other_file:
	@echo "This run first"
	touch some_file1

.PHONY: clean
	
clean_dependency:
	@rm some_file some_file1 clean	

#variable 
files = file1 file2
variable: $(files)
	@echo "Look at this variable" $(files)
	touch clean

file1: ; touch some_file

file2: ; touch some_file1


implicit_error:
	#this cause error when target is empty
	
# Wildcard -> *,?,[...]
#* files found in c	
# for variable declaration or function argument 
# := $(wildcard *.c) syntax ":=" must 
wring=*.o # not valid
object := $(wildcard *.c) 
wild1: 
	@echo "c files found:" $(wildcard *.c)
	@echo "c files found using variable:" $(object) 
	@echo "Not valid not printing" $(wrong) 


#include path 
root := /home/dklive7755/cprogram/learning/makefile/practice/make
SRC := $(root)/src
HEADER := $(root)/header
wfiles := $(wildcard $(SRC)/*.c)
vpath %.h $(HEADER)

path:
	@echo "create folders"
	mkdir $(SRC)
	mkdir $(HEADER)	
	@echo "create files"
	touch $(SRC)/f1.c
	touch $(HEADER)/f1.h
	@echo ".C files: $(wildcard $(SRC)/*.c)"
	@echo ".H files: $(wildcard $(HEADER)/*.h)"

.PHONY: clean_path

clean_path:
	@rm -rf $(HEADER)
	@rm -rf $(SRC)
	
	
#Target
all1: one two three
.PHONY: all1

one: ; touch one

two: ; touch two

three: ; touch three

clean_target: ; rm -f one two three

#multiple target
all2: a1.o a2.o
.PHONY: all2
a1.o a2.o:
	echo $@
	
#static Patterns
all3: foo.o bar.o
.PHONY: all3

# The automatic variable $@ matches the target, and $< matches the prerequisite
foo.o: foo.c
	echo "Call gcc to generate $@ from $<"

bar.o: bar.c
	echo "Call gcc to generate bar.o from bar.c"

# Matches all .c files and creates them if they don't exist
%.c:
	touch $@

clean:
	rm -f foo.c bar.c
	


