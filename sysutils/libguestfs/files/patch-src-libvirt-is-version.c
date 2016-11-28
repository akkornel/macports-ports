--- src/libvirt-is-version.c.orig	2016-11-27 01:32:09.000000000 -0800
+++ src/libvirt-is-version.c	2016-11-27 01:39:35.000000000 -0800
@@ -23,7 +23,6 @@
 #include <string.h>
 #include <unistd.h>
 #include <errno.h>
-#include <error.h>
 #include <locale.h>
 #include <libintl.h>
 
@@ -52,7 +51,8 @@
     major = argtoint (argv[0], argv[1]);
     break;
   case 1:
-    error (EXIT_FAILURE, 0, "not enough arguments: MAJOR [MINOR [PATCH]]");
+    printf("not enough arguments: MAJOR [MINOR [PATCH]]");
+    return EXIT_FAILURE;
   }
 
   virInitialize ();
@@ -72,8 +72,10 @@
 
   errno = 0;
   res = strtol (arg, &endptr, 10);
-  if (errno || *endptr)
-    error (EXIT_FAILURE, 0, "cannot parse integer argument '%s'", arg);
+  if (errno || *endptr) {
+    printf("cannot parse integer argument '%s'", arg);
+    return EXIT_FAILURE;
+  }
 
   return (unsigned int) res;
 }
