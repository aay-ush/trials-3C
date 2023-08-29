#!/bin/bash

3c \
-dump-stats \
--perptrstats-output=out.checked/perptrstats \
--constraint-output=out.checked/constraints \
--wildptrstats-output=out.checked/wildstats \
-alltypes \
-p \
compile_commands.json \
-extra-arg=-w \
-output-dir=out.checked \
src/*.c \
#src/simple-pointers.c

#cgi-src/ssi.c \
#mmc.c \
#cgi-src/redirect.c \
#thttpd.c \
#timers.c \
#match.c \
#fdwatch.c \
#extras/htpasswd.c \
#extras/makeweb.c \
#tdate_parse.c \
#libhttpd.c \
#cgi-src/phf.c

