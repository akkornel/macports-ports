--- gnulib/lib/stdlib.in.h.orig	2016-11-27 01:50:08.000000000 -0800
+++ gnulib/lib/stdlib.in.h	2016-11-27 01:51:59.000000000 -0800
@@ -971,6 +971,26 @@
 _GL_CXXALIASWARN (wctomb);
 #endif
 
+/* Endian-conversion code for macOS */
+#ifdef __APPLE__
+#include <machine/endian.h>
+#include <libkern/OSByteOrder.h>
+
+#define htobe16(x) OSSwapHostToBigInt16(x)
+#define htole16(x) OSSwapHostToLittleInt16(x)
+#define be16toh(x) OSSwapBigToHostInt16(x)
+#define le16toh(x) OSSwapLittleToHostInt16(x)
+
+#define htobe32(x) OSSwapHostToBigInt32(x)
+#define htole32(x) OSSwapHostToLittleInt32(x)
+#define be32toh(x) OSSwapBigToHostInt32(x)
+#define le32toh(x) OSSwapLittleToHostInt32(x)
+
+#define htobe64(x) OSSwapHostToBigInt64(x)
+#define htole64(x) OSSwapHostToLittleInt64(x)
+#define be64toh(x) OSSwapBigToHostInt64(x)
+#define le64toh(x) OSSwapLittleToHostInt64(x)
+#endif /* __APPLE__ */
 
 #endif /* _@GUARD_PREFIX@_STDLIB_H */
 #endif /* _@GUARD_PREFIX@_STDLIB_H */
