/*
   $Id: PgSPI.h,v 1.18 1999/09/29 20:30:23 mergl Exp $

   Copyright (c) 1997,1998,1999 Edmund Mergl
   Portions Copyright (c) 1994,1995,1996,1997 Tim Bunce

   You may distribute under the terms of either the GNU General Public
   License or the Artistic License, as specified in the Perl README file.

*/

#define NEED_DBIXS_VERSION 0

/* PgSPI shouldn't, hopefully, need either of these */
/* #include "postgres.h" */
#include "executor/spi.h"
#undef DEBUG
/* #include "commands/trigger.h"
#include "fmgr.h" */

#include <DBIXS.h>		/* installed by the DBI module	*/

#include "dbdimp.h"		/* read in our implementation details */



#include <dbd_xsh.h>		/* installed by the DBI module	*/


/* end of PgSPI.h */
