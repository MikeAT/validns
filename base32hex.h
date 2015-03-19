/*
 * Part of DNS zone file validator `validns`.
 *
 * Copyright 2011-2014 Anton Berezin <tobez@tobez.org>
 * Modified BSD license.
 * (See LICENSE file in the distribution.)
 *
 */
#ifndef _BASE32HEX_H_
#define _BASE32HEX_H_ 1

int
decode_base32hex(void *dst, char *src, size_t dstsize);
int
encode_base32hex(void *dest, size_t dstsize, void *source, size_t srclength);

#endif
