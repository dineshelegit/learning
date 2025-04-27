//Data segment
//A. BSS uninitialized

/*#include <stdio.h>
int main() 
{
    return 0;
}

memory of memory_layout
   text	   data	    bss	    dec	    hex	filename
   1228	    544	      8	   1780	    6f4	memory_layout
 // bss 8 byte came beacuse of 64byte machine 1 word cycle to cause padding
*/
/*
#include <stdio.h>

// Uninitialized variable stored in bss
int global,a,b,c;
//static int t,h;
int main()
{	static int y,u;
	printf("global = %d\n",global);
    return 0;
}
// int global a,b,c; size data
//   text	   data	    bss	    dec	    hex	filename
//  1390	    600	     24	   2014	    7de	memory_layout

// global and static
//  text	   data	    bss	    dec	    hex	filename
//   1390	    600	     32	   2022	    7e6	memory_layout
*/
/*
// Initialized Data segment

#include <stdio.h>

// Uninitialized variable stored in bss
int a,b,c;
int main(void) {
  	
  	// Initialized static variable stored in DS
    static int i = 100,k=300;
    return 0;
}
static int i get comment size 
   text	   data	    bss	    dec	    hex	filename
   1228	    544	     16	   1788	    6fc	memory_layout
static int i size            // bss increased beacuse of padding of static 
   text	   data	    bss	    dec	    hex	filename
   1228	    548	     20	   1796	    704	memory_layout
static int i,k
   text	   data	    bss	    dec	    hex	filename
   1228	    552	     16	   1796	    704	memory_layout

*/
/*
#include <stdio.h>

// initialized global variable stored in DS
int global = 10;
int main() {
  
  	// Initialized static variable stored in DS
    static int i = 100;
    return 0;
}
//global and static are commented
   text	   data	    bss	    dec	    hex	filename
   1228	    544	      8	   1780	    6f4	memory_layout
//uncommented both
   text	   data	    bss	    dec	    hex	filename
   1228	    552	      8	   1788	    6fc	memory_layout
*/

