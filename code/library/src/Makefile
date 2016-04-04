top_builddir = ../../..
include ${top_builddir}/makeinclude

CPP_SRC = insertion.cxx \
	  fibonacci.cxx \
	  test.cxx

DEP  = ${CPP_SRC:%.cxx=%.dep}
OBJ  = ${CPP_SRC:%.cxx=%.o}
LOBJ = ${CPP_SRC:%.cxx=%.lo}

ifeq (${MAKECMDGOALS}, obj)
include $(DEP)
endif

dep: $(DEP)

obj: $(LOBJ)

lib: liblibrary.la libMPLC++.a

liblibrary.la: $(LOBJ)
	$(LINK) $(LOBJ) -o $@

libMPLC++.a:
	$(LINK) $(LIBS) -o $@

clean:
	$(RM) $(DEP) $(OBJ) $(LOBJ) liblibrary.la libMPLC++.a .libs *~

.PHONY: dep obj lib clean
