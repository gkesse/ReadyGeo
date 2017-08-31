GPATH = ../..
GSRC = ../src
GBIN = bin
GBUILD = build
GTARGET = $(GBIN)/GProject.exe

GINCS =\
    /I$(GPATH)/lib
    
GOBJS =\
    $(GBUILD)/main.obj \
    $(GBUILD)/GMat.obj
    
all: $(GOBJS)
	link /OUT:$(GTARGET) $(GOBJS)
$(GBUILD)/main.obj: $(GSRC)/main.cpp
	cl /c /EHsc $(GSRC)/main.cpp /Fo$(GBUILD)/main.obj $(GINCS)
$(GBUILD)/GMat.obj: $(GPATH)/lib/GMat.cpp
	cl /c /EHsc $(GPATH)/lib/GMat.cpp /Fo$(GBUILD)/GMat.obj 
clean:
	del /Q $(GBUILD)\* $(GBIN)\*
