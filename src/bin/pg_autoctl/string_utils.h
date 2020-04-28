/*
 * src/bin/pg_autoctl/string_utils.h
 *   Utility functions for string handling
 *
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the PostgreSQL License.
 *
 */
#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stdbool.h>

/* that defines the streq() macro */
#include "commandline.h"

#define strneq(a, b) (a != NULL && b != NULL && strcmp(a, b) != 0)

/* maximum decimal int64 length with minus and NUL */
#define INTSTRING_MAX_DIGITS 21
typedef struct IntString
{
	int64_t intValue;
	char strValue[INTSTRING_MAX_DIGITS];
} IntString;

IntString intToString(int64_t number);

bool stringToInt(const char *str, int *number);
bool stringToUInt(const char *str, unsigned int *number);

bool stringToInt64(const char *str, int64_t *number);
bool stringToUInt64(const char *str, uint64_t *number);

bool stringToShort(const char *str, short *number);
bool stringToUShort(const char *str, unsigned short *number);

bool stringToInt32(const char *str, int32_t *number);
bool stringToUInt32(const char *str, uint32_t *number);

int splitLines(char *errorMessage, char **linesArray, int size);

#endif /* STRING_UTILS_h */
