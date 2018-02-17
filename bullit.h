/*
 Just some
 real fast
 bit hacks.
 Test each
 time when
 switching
 platforms.

 Main goals:
 1. No branching.
 2. No multiplication or division.
 3. No assumed word lengths.

 Contains a few new approaches,
 but most are obtained and adapted
 from the public domain. By Alex Joel Crain.
*/

#ifndef BULLIT_H_
#define BULLIT_H_
#include <limits.h>

inline int nextpow2(int x)
// Get the smallest nonzero integer power of 2 that's not smaller than x.
{
 return (unsigned int)(INT_MIN) >> (__builtin_clz(x) - (x & (x - 1) || x <=0));
}

inline int floorlg(int x)
// Get the floor of the base 2 logarithm of x.
{
 return (sizeof(int) << 3) - (__builtin_clz(x) + 1) | -(x < 0);
}

inline unsigned int litabs(int x)
// Get the absolute value of x without branching.
{
 return (x - (x < 0)) ^ (-(x < 0));
}

inline int litave(int x, int y)
// Get the average of x and y without arithmetic overflow, rounded toward zero.
{
 return (x & y) + ((x ^ y) >> 1);
}

inline int litmax(int x, int y)
// Get the maximum of x and y without branching.
{
 return x ^ (-(x < y) & (x ^ y));
}

inline int litmin(int x, int y)
// Get the minimum of x and y without branching.
{
 return y ^ (-(x < y) & (x ^ y));
}

inline int signum(int x)
// Get the sign of x.
{
 return (x > 0) - (x < 0);
}

inline int signsopp(int x, int y)
// Indicate whether x and y have opposite signs.
{
 return (x ^ y) < 0;
}

inline int ispow2(int x)
// Indicate whether x is a power of two.
{
 return x && !(x & (x - 1));
}

#endif
