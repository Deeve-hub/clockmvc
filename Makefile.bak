# Makefile for the clock project
#
# Darren Provine, 17 July 2009

PROGRAM = clock
SOURCES = clock.c model.c view.c
OBJECTS = clock.o model.o view.o
DRIVERS = LEDisplay.o
INCLUDE = -I/usr/lib/gcc/x86_64-redhat-linux/3.4.6/include
LIBRARY = -lncurses
CFLAGS  = -O -Wall
COMPILER= gcc

.SUFFIXES:
.SUFFIXES: .c .o

.c.o: ; $(COMPILER) $(CFLAGS) -c $< $(INCLUDE)

$(PROGRAM) : $(OBJECTS)
	$(COMPILER) -o $(PROGRAM) $(CFLAGS) $(OBJECTS) $(DRIVERS) $(LIBRARY)

clean: ; /bin/rm -f $(PROGRAM) $(OBJECTS) core

depend: $(SOURCES)
	@ echo
	@ echo "NOTE: Ignore message about byteswap.h"
	@ echo
	makedepend $(INCLUDE) $(SOURCES)


# DO NOT DELETE

clock.o: clock.h /usr/include/sys/time.h /usr/include/features.h
clock.o: /usr/include/stdc-predef.h /usr/include/sys/cdefs.h
clock.o: /usr/include/bits/wordsize.h /usr/include/bits/long-double.h
clock.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
clock.o: /usr/include/bits/typesizes.h /usr/include/bits/types/time_t.h
clock.o: /usr/include/bits/types/struct_timeval.h /usr/include/sys/select.h
clock.o: /usr/include/bits/select.h /usr/include/bits/types/sigset_t.h
clock.o: /usr/include/bits/types/__sigset_t.h /usr/include/time.h
clock.o: /usr/lib/gcc/x86_64-redhat-linux/3.4.6/include/stddef.h
clock.o: /usr/include/bits/time.h /usr/include/bits/types/clock_t.h
clock.o: /usr/include/bits/types/struct_tm.h /usr/include/stdio.h
clock.o: /usr/include/bits/libc-header-start.h
clock.o: /usr/lib/gcc/x86_64-redhat-linux/3.4.6/include/stdarg.h
clock.o: /usr/include/bits/types/__fpos_t.h
clock.o: /usr/include/bits/types/__mbstate_t.h
clock.o: /usr/include/bits/types/__fpos64_t.h
clock.o: /usr/include/bits/types/__FILE.h /usr/include/bits/types/FILE.h
clock.o: /usr/include/bits/types/struct_FILE.h /usr/include/bits/stdio_lim.h
clock.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
clock.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
clock.o: /usr/include/signal.h /usr/include/bits/signum.h
clock.o: /usr/include/bits/signum-generic.h
clock.o: /usr/include/bits/types/sig_atomic_t.h
clock.o: /usr/include/bits/types/sigval_t.h
clock.o: /usr/include/bits/types/__sigval_t.h /usr/include/bits/sigaction.h
clock.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
clock.o: /usr/include/bits/ss_flags.h
clock.o: /usr/include/bits/types/struct_sigstack.h /usr/include/stdlib.h
clock.o: /usr/include/bits/floatn.h /usr/include/bits/floatn-common.h
clock.o: /usr/include/sys/types.h /usr/include/bits/types/clockid_t.h
clock.o: /usr/include/bits/types/timer_t.h /usr/include/bits/stdint-intn.h
clock.o: /usr/include/endian.h /usr/include/bits/endian.h
clock.o: /usr/include/bits/byteswap.h /usr/include/bits/uintn-identity.h
clock.o: /usr/include/alloca.h /usr/include/bits/stdlib-float.h LEDisplay.h
clock.o: /usr/include/strings.h /usr/include/ctype.h /usr/include/ncurses.h
clock.o: /usr/include/ncurses_dll.h /usr/include/stdint.h
clock.o: /usr/include/bits/wchar.h /usr/include/bits/stdint-uintn.h
clock.o: /usr/include/unctrl.h /usr/include/curses.h /usr/include/term.h
clock.o: /usr/include/termios.h /usr/include/bits/termios.h
clock.o: /usr/include/sys/ttydefaults.h
model.o: clock.h /usr/include/sys/time.h /usr/include/features.h
model.o: /usr/include/stdc-predef.h /usr/include/sys/cdefs.h
model.o: /usr/include/bits/wordsize.h /usr/include/bits/long-double.h
model.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
model.o: /usr/include/bits/typesizes.h /usr/include/bits/types/time_t.h
model.o: /usr/include/bits/types/struct_timeval.h /usr/include/sys/select.h
model.o: /usr/include/bits/select.h /usr/include/bits/types/sigset_t.h
model.o: /usr/include/bits/types/__sigset_t.h /usr/include/time.h
model.o: /usr/lib/gcc/x86_64-redhat-linux/3.4.6/include/stddef.h
model.o: /usr/include/bits/time.h /usr/include/bits/types/clock_t.h
model.o: /usr/include/bits/types/struct_tm.h /usr/include/stdio.h
model.o: /usr/include/bits/libc-header-start.h
model.o: /usr/lib/gcc/x86_64-redhat-linux/3.4.6/include/stdarg.h
model.o: /usr/include/bits/types/__fpos_t.h
model.o: /usr/include/bits/types/__mbstate_t.h
model.o: /usr/include/bits/types/__fpos64_t.h
model.o: /usr/include/bits/types/__FILE.h /usr/include/bits/types/FILE.h
model.o: /usr/include/bits/types/struct_FILE.h /usr/include/bits/stdio_lim.h
model.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
model.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
model.o: /usr/include/signal.h /usr/include/bits/signum.h
model.o: /usr/include/bits/signum-generic.h
model.o: /usr/include/bits/types/sig_atomic_t.h
model.o: /usr/include/bits/types/sigval_t.h
model.o: /usr/include/bits/types/__sigval_t.h /usr/include/bits/sigaction.h
model.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
model.o: /usr/include/bits/ss_flags.h
model.o: /usr/include/bits/types/struct_sigstack.h /usr/include/stdlib.h
model.o: /usr/include/bits/floatn.h /usr/include/bits/floatn-common.h
model.o: /usr/include/sys/types.h /usr/include/bits/types/clockid_t.h
model.o: /usr/include/bits/types/timer_t.h /usr/include/bits/stdint-intn.h
model.o: /usr/include/endian.h /usr/include/bits/endian.h
model.o: /usr/include/bits/byteswap.h /usr/include/bits/uintn-identity.h
model.o: /usr/include/alloca.h /usr/include/bits/stdlib-float.h LEDisplay.h
model.o: /usr/include/strings.h /usr/include/ctype.h /usr/include/ncurses.h
model.o: /usr/include/ncurses_dll.h /usr/include/stdint.h
model.o: /usr/include/bits/wchar.h /usr/include/bits/stdint-uintn.h
model.o: /usr/include/unctrl.h /usr/include/curses.h /usr/include/term.h
model.o: /usr/include/termios.h /usr/include/bits/termios.h
model.o: /usr/include/sys/ttydefaults.h
view.o: clock.h /usr/include/sys/time.h /usr/include/features.h
view.o: /usr/include/stdc-predef.h /usr/include/sys/cdefs.h
view.o: /usr/include/bits/wordsize.h /usr/include/bits/long-double.h
view.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
view.o: /usr/include/bits/typesizes.h /usr/include/bits/types/time_t.h
view.o: /usr/include/bits/types/struct_timeval.h /usr/include/sys/select.h
view.o: /usr/include/bits/select.h /usr/include/bits/types/sigset_t.h
view.o: /usr/include/bits/types/__sigset_t.h /usr/include/time.h
view.o: /usr/lib/gcc/x86_64-redhat-linux/3.4.6/include/stddef.h
view.o: /usr/include/bits/time.h /usr/include/bits/types/clock_t.h
view.o: /usr/include/bits/types/struct_tm.h /usr/include/stdio.h
view.o: /usr/include/bits/libc-header-start.h
view.o: /usr/lib/gcc/x86_64-redhat-linux/3.4.6/include/stdarg.h
view.o: /usr/include/bits/types/__fpos_t.h
view.o: /usr/include/bits/types/__mbstate_t.h
view.o: /usr/include/bits/types/__fpos64_t.h /usr/include/bits/types/__FILE.h
view.o: /usr/include/bits/types/FILE.h /usr/include/bits/types/struct_FILE.h
view.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
view.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
view.o: /usr/include/bits/confname.h /usr/include/signal.h
view.o: /usr/include/bits/signum.h /usr/include/bits/signum-generic.h
view.o: /usr/include/bits/types/sig_atomic_t.h
view.o: /usr/include/bits/types/sigval_t.h
view.o: /usr/include/bits/types/__sigval_t.h /usr/include/bits/sigaction.h
view.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
view.o: /usr/include/bits/ss_flags.h
view.o: /usr/include/bits/types/struct_sigstack.h /usr/include/stdlib.h
view.o: /usr/include/bits/floatn.h /usr/include/bits/floatn-common.h
view.o: /usr/include/sys/types.h /usr/include/bits/types/clockid_t.h
view.o: /usr/include/bits/types/timer_t.h /usr/include/bits/stdint-intn.h
view.o: /usr/include/endian.h /usr/include/bits/endian.h
view.o: /usr/include/bits/byteswap.h /usr/include/bits/uintn-identity.h
view.o: /usr/include/alloca.h /usr/include/bits/stdlib-float.h LEDisplay.h
view.o: /usr/include/strings.h /usr/include/ctype.h /usr/include/ncurses.h
view.o: /usr/include/ncurses_dll.h /usr/include/stdint.h
view.o: /usr/include/bits/wchar.h /usr/include/bits/stdint-uintn.h
view.o: /usr/include/unctrl.h /usr/include/curses.h /usr/include/term.h
view.o: /usr/include/termios.h /usr/include/bits/termios.h
view.o: /usr/include/sys/ttydefaults.h
