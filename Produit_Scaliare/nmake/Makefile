GPATH = ../..
GSRC = ../src
GBIN = bin
GBUILD = build
GTARGET = $(GBIN)/GProject.exe

GINCS =\
    /I$(GPATH)/lib
    
GOBJS =\
    $(GBUILD)/main.obj \
    $(GBUILD)/GVec.obj \
    $(GBUILD)/GGlobal.obj
    
all: $(GOBJS)
	link /OUT:$(GTARGET) $(GOBJS)
$(GBUILD)/main.obj: $(GSRC)/main.cpp
	cl /c /EHsc $(GSRC)/main.cpp /Fo$(GBUILD)/main.obj $(GINCS)
$(GBUILD)/GVec.obj: $(GPATH)/lib/GVec.cpp
	cl /c /EHsc $(GPATH)/lib/GVec.cpp /Fo$(GBUILD)/GVec.obj 
$(GBUILD)/GGlobal.obj: $(GPATH)/lib/GGlobal.cpp
	cl /c /EHsc $(GPATH)/lib/GGlobal.cpp /Fo$(GBUILD)/GGlobal.obj 
clean:
	del /Q $(GBUILD)\* $(GBIN)\*
