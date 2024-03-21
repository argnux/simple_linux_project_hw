AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = current_time
current_time_SOURCES = main.c func.c
include_HEADERS = header.h

clean-all: distclean uninstall
	ls | egrep -v '*\.(am|ac|c|h|md)$$' | xargs rm -rf

