#include <stdio.h>

int isEven(int num) {
    	return num % 2 == 0;
}

int main() {
    	int a = 5, b = 5;
    	int x = 75;
    	char ch = 'M';
    	int flag = 1;
    	int number = 8;

    	if (a == b) {
    	    printf("a is equal to b\n");
    	}

    	if (!(a == b)) {
    	    printf("a is not equal to b\n");
    	}

    	if (x >= 50 && x <= 100) {
    	    printf("x is in the range 50 to 100\n");
    	}

    	if (ch >= 'A' && ch <= 'Z') {
    	    printf("ch is an uppercase letter\n");
    	}

    	if (flag) {
    	    printf("flag is true\n");
    	}

    	if (isEven(number)) {
    	    printf("number is even\n");
    	}

return 0;
}

