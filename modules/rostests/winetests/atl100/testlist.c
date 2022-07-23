/* Automatically generated file; DO NOT EDIT!! */

#define STANDALONE
#include <wine/test.h>

extern void func_atl(void);

const struct test winetest_testlist[] =
{
#ifndef _M_AMD64 // kernel crash
    { "atl", func_atl },
#endif
    { 0, 0 }
};
