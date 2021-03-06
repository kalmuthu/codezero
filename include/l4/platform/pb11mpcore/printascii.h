#ifndef __PLATFORM__PB11MPCORE__PRINTASCII__H__
#define __PLATFORM__PB11MPCORE__PRINTASCII__H__

#define	dprintk(str, val)		\
{					\
	printascii(str);		\
	printascii("0x");		\
	printhex8((val));		\
	printascii("\n");		\
}

void printascii(char *str);
void printhex8(unsigned int);

#endif /* __PLATFORM__PB11MPCORE__PRINTASCII__H__ */
