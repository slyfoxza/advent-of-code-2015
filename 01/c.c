#include <stdio.h>

int main() {
	int basement = -1;
	int floor = 0;
	int i = 0;

	int c;
	while((c = getchar()) != EOF) {
		floor += (c - '(') * -2 + 1;
		if(basement < 0) {
			++i;
			if(floor < 0) basement = i;
		}
	}

	printf("%d %d\n", floor, basement);
	return 0;
}
