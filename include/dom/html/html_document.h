/*
 * This file is part of libdom.
 * Licensed under the MIT License,
 *                http://www.opensource.org/licenses/mit-license.php
 * Copyright 2009 Bo Yang <struggleyb.nku@gmail.com>
 */

#ifndef dom_html_document_h_
#define dom_html_document_h_

#include <dom/core/document.h>
#include <dom/core/exceptions.h>
#include <dom/functypes.h>
#include <dom/events/document_event.h>

struct dom_element;
struct dom_html_collection;
struct dom_html_element;
struct dom_nodelist;

typedef struct dom_html_document dom_html_document;

typedef struct dom_html_document_vtable {
	struct dom_document_vtable base;
} dom_html_document_vtable;

/* The DOM spec public API */

dom_exception dom_html_document_get_title(dom_html_document *doc,
		dom_string **title);
dom_exception dom_html_document_set_title(dom_html_document *doc,
		dom_string *title);
dom_exception dom_html_document_get_referer(dom_html_document *doc,
		dom_string **referer);
dom_exception dom_html_document_get_domain(dom_html_document *doc,
		dom_string **domain);
dom_exception dom_html_document_get_url(dom_html_document *doc,
		dom_string **url);
dom_exception dom_html_document_get_body(dom_html_document *doc,
		struct dom_html_element **body);
dom_exception dom_html_document_set_body(dom_html_document *doc,
		struct dom_html_element *body);
dom_exception dom_html_document_get_images(dom_html_document *doc,
		struct dom_html_collection **col);
dom_exception dom_html_document_get_applets(dom_html_document *doc,
		struct dom_html_collection **col);
dom_exception dom_html_document_get_links(dom_html_document *doc,
		struct dom_html_collection **col);
dom_exception dom_html_document_get_forms(dom_html_document *doc,
		struct dom_html_collection **col);
dom_exception dom_html_document_get_anchors(dom_html_document *doc,
		struct dom_html_collection **col);
dom_exception dom_html_document_get_cookie(dom_html_document *doc,
		dom_string **cookie);
dom_exception dom_html_document_set_cookie(dom_html_document *doc,
		dom_string *cookie);

dom_exception dom_html_document_open(dom_html_document *doc);
dom_exception dom_html_document_close(dom_html_document *doc);
dom_exception dom_html_document_write(dom_html_document *doc,
		dom_string *text);
dom_exception dom_html_document_writeln(dom_html_document *doc,
		dom_string *text);
dom_exception dom_html_document_get_elements_by_name(dom_html_document *doc,
		dom_string *name, struct dom_nodelist **list);

#endif

