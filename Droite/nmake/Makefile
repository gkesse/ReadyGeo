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
    $(GBUILD)/GPoint.obj \
    $(GBUILD)/GLine.obj
    
all: $(GOBJS)
	link /OUT:$(GTARGET) $(GOBJS)
$(GBUILD)/main.obj: $(GSRC)/main.cpp
	cl /c /EHsc $(GSRC)/main.cpp /Fo$(GBUILD)/main.obj $(GINCS)
$(GBUILD)/GVec.obj: $(GPATH)/lib/GVec.cpp
	cl /c /EHsc $(GPATH)/lib/GVec.cpp /Fo$(GBUILD)/GVec.obj 
$(GBUILD)/GPoint.obj: $(GPATH)/lib/GPoint.cpp
	cl /c /EHsc $(GPATH)/lib/GPoint.cpp /Fo$(GBUILD)/GPoint.obj 
$(GBUILD)/GLine.obj: $(GPATH)/lib/GLine.cpp
	cl /c /EHsc $(GPATH)/lib/GLine.cpp /Fo$(GBUILD)/GLine.obj 
clean:
	del /Q $(GBUILD)\* $(GBIN)\*
