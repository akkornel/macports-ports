--- src/fuse.c.orig	2016-11-27 01:45:01.000000000 -0800
+++ src/fuse.c	2016-11-27 01:45:09.000000000 -0800
@@ -26,7 +26,6 @@
 #include <sys/wait.h>
 #include <string.h>
 #include <libintl.h>
-#include <sys/sysmacros.h>
 
 #if HAVE_FUSE
 /* See <attr/xattr.h> */
