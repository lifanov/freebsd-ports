--- src/util/sys_defs.h.orig	2014-12-25 22:33:02 UTC
+++ src/util/sys_defs.h
@@ -26,6 +26,7 @@
 #if defined(FREEBSD2) || defined(FREEBSD3) || defined(FREEBSD4) \
     || defined(FREEBSD5) || defined(FREEBSD6) || defined(FREEBSD7) \
     || defined(FREEBSD8) || defined(FREEBSD9) || defined(FREEBSD10) \
+    || defined(FREEBSD11) \
     || defined(BSDI2) || defined(BSDI3) || defined(BSDI4) \
     || defined(OPENBSD2) || defined(OPENBSD3) || defined(OPENBSD4) \
     || defined(OPENBSD5) \
