/*
 * This file is part of libdom test suite.
 * Licensed under the MIT License,
 *                http://www.opensource.org/licenses/mit-license.php
 * Copyright 2009 Bo Yang <struggleyb.nku@gmail.com>
 */

#ifndef domtsasserts_h_
#define domtsasserts_h_

#include <stdbool.h>

#include <dom/dom.h>

#include "list.h"


/* Redefine assert, so we can simply use the standard assert mechanism
 * within testcases and exit with the right output for the testrunner
 * to do the right thing. */
void __assert2(const char *expr, const char *function,
		const char *file, int line);

#define assert(expr) \
  ((void) ((expr) || (__assert2 (#expr, __func__, __FILE__, __LINE__), 0)))

bool is_true(bool arg);

bool is_null(void *arg);

bool is_same(void *excepted, void *actual);
bool is_same_int(int excepted, int actual);
bool is_same_unsigned_long(unsigned long excepted, unsigned long actual);

bool is_equals_int(int excepted, int actual, bool dummy);
bool is_equals_unsigned_long(unsigned long excepted, unsigned long actual, bool dummy);
bool is_equals_bool(bool excepted, bool actual, bool dummy);
bool is_equals_string(const char *excepted, dom_string *actual, 
		bool ignoreCase);
bool is_equals_domstring(dom_string *excepted, dom_string *actual, bool ignoreCase);

/* We may use two different string types in libDOM, but the expected string type is 
   always "char *" */
bool is_equals_list(list *expected, list *actual, bool ignoreCase);

bool is_instanceof(const char *type, dom_node *node);

bool is_size_domnamednodemap(unsigned long size, dom_namednodemap *map);
bool is_size_domnodelist(unsigned long size, dom_nodelist *list);
bool is_size_list(unsigned long size, list *list);

bool is_uri_equals(char *scheme, char *path, char *host, 
		char *file, char *query, char *fragment, 
		bool isAbsolute, dom_string *actual);

bool is_contenttype(const char *type);

bool has_feature(char *feature, char *version);

bool implementation_attribute(char *name, bool value);

#endif
