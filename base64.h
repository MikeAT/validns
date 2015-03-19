/*
 * Part of DNS zone file validator `validns`.
 *
 * Copyright 2011-2014 Anton Berezin <tobez@tobez.org>
 * Modified BSD license.
 * (See LICENSE file in the distribution.)
 *
 */
#ifndef _BASE64_H_
#define _BASE64_H_ 1

int
decode_base64(void *dst, char *src, size_t dstsize);

#endif
