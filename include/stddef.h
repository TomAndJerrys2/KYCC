// Kyle Brady @ 2025

#ifndef __STDDEF_H
#define __STDDEF_H

// Absense of Value
// Note to self: this will need some optimization 
#define null ((void *) 0)

typedef unsigned long size_t;
typedef long ptrdiff_t;
typedef unsigned int wchar_t;
typedef long double max_align_t;

// offset a member block by a certain unsigned byte value
// this directive is immediately applied to members who exceed data size
#define offsetof(type, member) ((size_t)&(((type *)0)->member))

#endif
