#include <stdio.h>

/*
*List of variables
*/
int i = 0;
int j = 0;
int k = 0;
int h = 0;
int l = 0;
int m = 0;
int n = 0;


/*
*List of functions
*/
int bitsTest(int i);
int bitsAdd(int i, int j);
int bitsOr(int i, int j);
int bitsEquals(int i, int j);
int bitsFit(int x, int y);
int conditional(int x, int y, int z);
int reverseBytes(int x);
int bitsMask(int x, int y);
int bitsEven(void);
int bitsReversed(int x);
int tc2sm(int x);

/*
*The main function will consist of practice and examples from learning C
*/
main()
{
	int x;
	int y;
	/*
	for (x = 0; x < 6; x++)
	{
		for (y = 0; y < 6; y++)
		{
			bitsAdd(x, y);
		}
	}
	*/

	
/*	i = 4;
	printf("i = %d\n", i);
	j = ~4;
	printf("~i = %d\n", j);
	h = j & 1;
	printf("-5 & 1 = %d\n", h);
	
	i = -5;
	j = -1;
	//bitsAdd(i, j);
*/

/*
	printf("\n");

	for (x = 0; x < 6; x++)
	{
		for (y = 0; y < 6; y++)
		{
			bitsOr(x, y);
		}
	}
	i = -5;
	j = -1;
	bitsOr(i, j);
	j = -5;
	*/

	/*
	printf("BITSLAB TEST == OPERAND\n");
	i = 5;
	j = 0;
	bitsEquals(i, i);
	i = 5;
	j = 4;
	bitsEquals(i, j);
	i = 5;
	j = 3;
	bitsEquals(i, j);
	i = 5;
	j = -3;
	bitsEquals(i, j);
	i = -5;
	j = 3;
	bitsEquals(i, j);
	i = -5;
	j = 3;
	bitsEquals(j, i);
	i = -5;
	j = -5;
	bitsEquals(i, j);
	*/

/*	
	bitsTest(-1);
	bitsTest(-4);
	bitsTest(0);
	bitsTest(5);
	
	printf("\n");
*/
	/*
	i = 5;
	j = 3;
	bitsFit(i, j);
	i = -4;
	j = 3;
	bitsFit(i, j);
	// i = 28476948;
	i = 2147483647;
	printf("%d\n", i);
	j = 16;
	bitsFit(i, j);
	// i = -28476948;
	i = -2147483648;
	j = 16;
	bitsFit(i, j);
	i = -1;
	j = 32;
	bitsFit(i, j);
	j = 5;
	bitsFit(i, j);
	i = 1; 
	j = 1;
	bitsFit(i, j);
	*/
/*
	conditional(1, 4, 5);
	conditional(0, 4, 5);
	conditional(-2, -3, -5);
	conditional(10385572, 9472382, -3);
*/

/*	
	bitsMask(5, 3);
	bitsMask(25, 14);
	bitsMask(4, 0);
	bitsMask(-1, -5);
*/

	reverseBytes(0x04030201);
	reverseBytes(0x01020304);


	// bitsEven();
/*
	bitsReversed(4);
	bitsReversed(8);
	bitsReversed(84);
	bitsReversed(2147483647);
	*/
/*
	tc2sm(-15);
	tc2sm(-5);
	*/
}



int bitsTest(int x)
{
	return 0;
}

int bitsAdd(int i, int j)
{
	k = i & j;
	printf("GOAL:\t%d & %d = %d\n", i, j, k);
	h = ~(i);
	l = ~(j);
	printf("Not of %d = %d\nNot of %d = %d\n", i, h, j, l);
	i = (h | l);
	printf("%d | %d = %d\n", h, l, i);
	l = ~(i);
	printf("Not of (%d | %d) = %d\n\n", i, k, l);

	return 0;
}

int bitsOr(int x, int y)
{
	
	k = x ^ y;
	printf("GOAL:\t%d ^ %d = %d\n", i, j, k);
	i = x & ~(y);
	j = ~(x) & y;
	h = ~(i) & ~(j);
	l = ~(h);
	printf("\t%d\n", l);
	printf("\n");
	return 0;
}

int bitsEquals(int x, int y)
{
	k = x & y;
	h = k | x;
	l = k | y;

	i = x == y;

	printf("GOAL: %d\n\t%d & %d = %d\n\t%d | %d = %d\n", i, x, y, k, k, x, h);
	printf("\t%d | %d = %d\n\n", k, y, l);

	m = h ^ l;
	printf("\t%d ^ %d = %d\n", k, h, m);
	n = !m;
	printf("ANSWER: %d\n\n", n);

	return 0;
}

int bitsFit(int x, int y)
{
	i = x >> y;
	printf("%d >> %d = %d\n", x, y, i);
	h = !(i | 0);
	printf("%d\n\n", h);
}

int conditional(int x, int y, int z)
{
	printf("x = %d\ny = %d\nz = %d\n", x, y, z);
	i = (!!x << 31 >> 31 & y);
	printf("!!x << 31 >> 31 & y = %d\n", i);
	j = (!x << 31 >> 31 & z);
	printf("!x << 31 >> 31 & z = %d\n", j);
	printf("Result !!x << 31 >> 31 & y | !x << 31 >> 31 & z: %d\n", i | j);
}

int reverseBytes(int x)
{
	printf("x = %x\n", x);
	i = 0xFF; 
	j = (x & i) << 24;
	printf("j = %x\n", j);
	k = (x & (i << 8)) << 16;
	printf("k = %x\n", k);

	return 0;
}

int bitsMask(int x, int y)
{
	printf("x = %d\ny = %d\n", x, y);
	i = (~1 + 1);
	printf("(~1) >> 31 = %d\n", i);
	j = ~(i << x + 1);
	printf("~(i << x) = %d\n", j);
	h = i << y;
	printf("Not of -1 << %d = %d\n", y, h);
	l = j & h;
	printf("Combined product: %d\n", l);
	printf("\n");
}

int bitsEven(void)
{
	i = 5;
	j = i << 4;
	printf("%d << 4 = %d\n", i, j);
	h = j | i;
	printf("%d | 5 = %d\n", j, h);
	j = h << 8;
	printf("%d << 8 = %d\n", i, j);
	l = j | h;
	printf("%d | %d = %d\n", j, h, l);
	j = l << 16;
	printf("%d << 16 = %d\n", i, j);
	m = j | l;
	printf("%d | %d = %d\n", j, l, m);
}

int bitsReversed(int x)
{
	
	/*
	printf("Original 32 bit number: %d\n", x);
	i = x & 0xF;	//32 bit
	printf("%d & 0xF = %d\n", x, i);
	j = j & i;
	x = x >> 4;		//28 bit
	printf("%d\n", x);
	i = x & 0xF;	
	printf("%d & 0xF = %d\n", x, i);
	j = j & i;
	x = x >> 4;		//24 bit
	printf("%d\n", x);
	i = x & 0xF;	//
	printf("%d & 0xF = %d\n", x, i);
	j = j & i;
	x = x >> 4;		//20 bit
	printf("%d\n", x);
	i = x & 0xF;	
	printf("%d & 0xF = %d\n", x, i);
	j = j & i;
	x = x >> 4;		//16 bit
	printf("%d\n", x);
	i = x & 0xF;	//
	printf("%d & 0xF = %d\n", x, i);
	j = j & i;
	x = x >> 4;		//14 bit
	printf("%d\n", x);
	i = x & 0xF;	
	printf("%d & 0xF = %d\n", x, i);
	j = j & i;
	x = x >> 4;		//10 bit
	printf("%d\n", x);
	i = x & 0xF;	//
	printf("%d & 0xF = %d\n", x, i);
	j = j & i;
	x = x >> 4;		//8 bit
	printf("%d\n", x);
	i = x & 0xF;	//
	printf("%d & 0xF = %d\n", x, i);
	j = j & i;
	x = x >> 4;		//4 bit
	printf("%d\n", x);
	i = x & 0xF;	//
	printf("%d & 0xF = %d\n", x, i);
	j = j & i;
	x = x >> 4;		//0 bit
	printf("%d\n", x);
*/
	printf("Reverse bit result: %d\n", j);

	printf("\n");
}

int tc2sm(int x) {
  h = x;
  printf("Original input: %d\n", x);
  i = x >> 31;
  printf("Sign shifted right: %d\n", i);
  l = i << 31;
  printf("The sign back to position: %d\n", l);
  printf("The magnitude: %d\n\n", h);
  j = ~h + 1;
  printf("The manipulated magnitude: %d\n", j);
  h = i ^ j;
  printf("The sign and magnitude: %d\n\n\n", ~h);
  return 0;
}
 	