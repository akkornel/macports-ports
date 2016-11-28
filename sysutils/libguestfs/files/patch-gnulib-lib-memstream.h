--- gnulib/lib/memstream.h.orig	2016-11-27 01:56:46.000000000 -0800
+++ gnulib/lib/memstream.h	2016-11-27 01:56:38.000000000 -0800
@@ -0,0 +1,11 @@
+#if defined(__linux__)
+# include <features.h>
+#endif
+
+#include <stdio.h>
+
+#if _POSIX_C_SOURCE < 200809L
+
+FILE *open_memstream(char **ptr, size_t *sizeloc);
+
+#endif /* _POSIX_C_SOURCE < 200809L */
