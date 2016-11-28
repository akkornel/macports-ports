--- src/tsk.c.orig	2016-11-27 02:01:34.000000000 -0800
+++ src/tsk.c	2016-11-27 02:01:42.000000000 -0800
@@ -25,8 +25,8 @@
 #include <sys/stat.h>
 #include <sys/types.h>
 #include <string.h>
-#include <rpc/xdr.h>
 #include <rpc/types.h>
+#include <rpc/xdr.h>
 
 #include "guestfs.h"
 #include "guestfs_protocol.h"
