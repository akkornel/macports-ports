--- gnulib/lib/stdio.in.h.orig	2016-11-27 01:54:51.000000000 -0800
+++ gnulib/lib/stdio.in.h	2016-11-27 01:56:04.000000000 -0800
@@ -1352,6 +1352,11 @@
                       "POSIX compliance");
 #endif
 
+#ifdef __APPLE__
+/* Apple needs the custom memstream.h */
+#include "memstream.h"
+#endif /* __APPLE__ */
+
 #endif /* _@GUARD_PREFIX@_STDIO_H */
 #endif /* _@GUARD_PREFIX@_STDIO_H */
 #endif
