
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	unsigned char bit;
} e;

e *AND(e *a, e *b)
{
	e *c = (e*)malloc(sizeof(e));
	c->bit = (a->bit == 1 && b->bit == 1) ? 1 : 0;
	return c;
}

e *AND3(e *a, e *b, e *c)
{
	e *d = (e*)malloc(sizeof(e));
	d->bit = (a->bit == 1 && b->bit == 1 && c->bit == 1) ? 1 : 0;
	return d;
}

e *NAND(e *a, e *b)
{
	e *c = (e*)malloc(sizeof(e));
	c->bit = (a->bit == 1 && b->bit == 1) ? 0 : 1;
	return c;
}

e *OR(e *a, e *b)
{
	e *c = (e*)malloc(sizeof(e));
	c->bit = (a->bit == 1 || b->bit == 1) ? 1 : 0;
	return c;
}

e *OR3(e *a, e *b, e *c)
{
	e *d = (e*)malloc(sizeof(e));
	d->bit = (a->bit == 1 || b->bit == 1 || c->bit == 1) ? 1 : 0;
	return c;
}

e *XOR(e *a, e *b)
{
	e *c = (e*)malloc(sizeof(e));
	c->bit = ((a->bit == 1 || b->bit == 1) && (a->bit == 0 || b->bit == 0)) ? 1 : 0;
	return c;
}

e *NOR(e *a, e *b)
{
	e *c = (e*)malloc(sizeof(e));
	c->bit = (a->bit == 1 || b->bit == 1) ? 0 : 1;
	return c;
}

e *XNOR(e *a, e *b)
{
	e *c = (e*)malloc(sizeof(e));
	c->bit = ((a->bit == 1 || b->bit == 1) && (a->bit == 0 || b->bit == 0)) ? 0 : 1;
	return c;
}

e *NOT(e *a)
{
	e *b = (e*)malloc(sizeof(e));
	b->bit = (a->bit == 1) ? 0 : 1;
	return b;
}
