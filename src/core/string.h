
/*
 * This file is part of libdom.
 * Licensed under the MIT License,
 *                http://www.opensource.org/licenses/mit-license.php
 * Copyright 2009 Bo Yang <struggleyb.nku@gmail.com>
 */

#ifndef dom_internal_core_string_h_
#define dom_internal_core_string_h_

#include <dom/core/string.h>

/* Create a DOM string from a lwc_string */
dom_exception _dom_string_create_from_lwcstring(struct lwc_string_s *str, 
		dom_string **ret);

/* Map the lwc_error to dom_exception */
dom_exception _dom_exception_from_lwc_error(lwc_error err);

#endif

