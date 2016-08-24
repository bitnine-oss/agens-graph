/*
 * ag_graph_fn.h
 *	  prototypes for functions in backend/catalog/ag_graph.c
 *
 * Copyright (c) 2016 by Bitnine Global, Inc.
 *
 * IDENTIFICATION
 *	  src/include/catalog/ag_graph_fn.h
 */
#ifndef AG_GRAPH_FN_H
#define AG_GRAPH_FN_H

#include "nodes/parsenodes.h"

extern Oid GraphCreate(CreateGraphStmt *stmt, const char *queryString);
extern void graph_drop_with_catalog(Oid graphid);

#endif	/* AG_GRAPH_FN_H */
