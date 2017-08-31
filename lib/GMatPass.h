//===============================================
#ifndef _GMatPass_
#define _GMatPass_
//===============================================
#define _USE_MATH_DEFINES
//===============================================
#include "GMat.h"
#include "GVec.h"
//===============================================
class GMatPass {
private:
    GMatPass();
    
public:
    ~GMatPass();
    static GMatPass* Instance();

public:
    void show() const;
    void identity();
    void translate(const GVec& vA);
    void rotate(const GVec& vA, const double& a);
    
private:
    static GMatPass* m_instance;
    GMat mP;
};
//===============================================
#endif
//===============================================
