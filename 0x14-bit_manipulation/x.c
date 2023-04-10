#include "main.h"
#include <stdio.h>
int main(){
	printf("%d\n", flip_bits(0, 0));
	printf("%d\n", flip_bits(1, 1));

	printf("%d\n", flip_bits( (1ul << 31), (1ul << 31)));
}
