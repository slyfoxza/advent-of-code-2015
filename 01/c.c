#include <stdio.h>

int main() {
	int basement = -1;
	int floor = 0;
	int i = 0;

	int c;
	while((c = getchar()) != EOF) {
		if(c == '(') ++floor;
		else if(c == ')') --floor;
		if(basement < 0) {
			++i;
			if(floor < 0) basement = i;
		}
	}

	printf("%d %d\n", floor, basement);
	return 0;
}
