GPATH = ../../
GSRC = ../src
GBIN = bin
GBUILD = build
GTARGET = $(GBIN)/GProject.exe

GINCS =\
    /I$(GPATH)/Vecteur/src/manager
    
GOBJS =\
    $(GBUILD)/main.obj \
    $(GBUILD)/GVec2D.obj
    
all: $(GOBJS)
	link /OUT:$(GTARGET) $(GOBJS)
$(GBUILD)/main.obj: $(GSRC)/main.cpp
	cl /c /EHsc $(GSRC)/main.cpp /Fo$(GBUILD)/main.obj $(GINCS)
$(GBUILD)/GVec2D.obj: $(GPATH)/Vecteur/src/manager/GVec2D.cpp
	cl /c /EHsc $(GPATH)/Vecteur/src/manager/GVec2D.cpp /Fo$(GBUILD)/GVec2D.obj
clean:
	del /Q $(GBUILD)\* $(GBIN)\*
