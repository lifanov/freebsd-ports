--- backend/kvs40xx.h.orig	2012-08-20 05:27:18.000000000 +0900
+++ backend/kvs40xx.h	2012-08-29 17:01:58.000000000 +0900
@@ -10,6 +10,7 @@
 
 #include "../include/sane/config.h"
 #include <semaphore.h>
+#include <pthread.h>
 
 #undef  BACKEND_NAME
 #define BACKEND_NAME kvs40xx
@@ -208,7 +209,7 @@
 SANE_Status kvs40xx_document_exist (struct scanner *s);
 SANE_Status get_buffer_status (struct scanner *s, unsigned *data_avalible);
 SANE_Status kvs40xx_scan (struct scanner *s);
-SANE_Status kvs40xx_sense_handler (int fd, u_char * sense_buffer, void *arg);
+SANE_Status kvs40xx_sense_handler (int fd, unsigned char * sense_buffer, void *arg);
 SANE_Status stop_adf (struct scanner *s);
 SANE_Status hopper_down (struct scanner *s);
 SANE_Status inquiry (struct scanner *s, char *id);
