GPATH = ../..
GSRC = ../src
GBIN = bin
GBUILD = build
GTARGET = $(GBIN)/GProject.exe

GINCS =\
    /I$(GPATH)/lib
    
GOBJS =\
    $(GBUILD)/main.obj \
    $(GBUILD)/GMat.obj \
    $(GBUILD)/GVec.obj \
    $(GBUILD)/GMatPass.obj
    
all: $(GOBJS)
	link /OUT:$(GTARGET) $(GOBJS)
$(GBUILD)/main.obj: $(GSRC)/main.cpp
	cl /c /EHsc $(GSRC)/main.cpp /Fo$(GBUILD)/main.obj $(GINCS)
$(GBUILD)/GMat.obj: $(GPATH)/lib/GMat.cpp
	cl /c /EHsc $(GPATH)/lib/GMat.cpp /Fo$(GBUILD)/GMat.obj 
$(GBUILD)/GVec.obj: $(GPATH)/lib/GVec.cpp
	cl /c /EHsc $(GPATH)/lib/GVec.cpp /Fo$(GBUILD)/GVec.obj 
$(GBUILD)/GMatPass.obj: $(GPATH)/lib/GMatPass.cpp
	cl /c /EHsc $(GPATH)/lib/GMatPass.cpp /Fo$(GBUILD)/GMatPass.obj 
clean:
	del /Q $(GBUILD)\* $(GBIN)\*
