#include <stdio.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	
	while(T--) {
	    int a, b;
	    scanf("%d%d", &a, &b);
	    printf("%d\n", a + b);
	}
	return 0;
}