#define _H5P_filters
#ifdef _H5P_filters

#include <R.h>
#include <Rdefines.h>
#include <R_ext/Rdynload.h>
#include <R_ext/Error.h>
#include "hdf5.h"

#define H5PY_FILTER_LZF_VERSION 4
#define H5PY_FILTER_LZF 32000
#define H5Z_FILTER_BLOSC 32001
#define H5Z_FILTER_LZ4 32004

//int register_lzf(void);

SEXP _H5Pset_lzf( SEXP _plist_id );
SEXP _H5Pset_blosc( SEXP _plist_id );
SEXP _H5Pset_lz4( SEXP _plist_id );

#endif