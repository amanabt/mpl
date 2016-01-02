top_builddir = ../..
include ${top_builddir}/makeinclude

all:
	${MAKE} -C src dep
	${MAKE} -C src obj
	${MAKE} -C src lib

install: all
	mkdir -p $(INSTALL_INCLUDE_DIR)/sorting
	cp -r ./include $(INSTALL_INCLUDE_DIR)/sorting

	mkdir -p $(INSTALL_LIB_DIR)
	cp -r ./src/libMPLC++.a $(INSTALL_LIB_DIR)

clean:
	${MAKE} -C src clean
	rm -rfv *~ */*~
