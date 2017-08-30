//===============================================
#ifndef _GSmartRef_
#define _GSmartRef_
//===============================================
#include <iostream>
//===============================================
using namespace std;
//===============================================
class GSmartRef {
public:
    GSmartRef();
    GSmartRef(const GSmartRef<T>& sRef);
    GSmartRef(const int& ref);
    ~GSmartRef();

public:
    int get() const;
    void reset(const int& ref);
    
public:
    friend ostream& operator<<(ostream& s, const GSmartRef<T>& sRef);

private:
    int m_ref;
};
//===============================================
#include "GSmartRef.cpp"
//===============================================
#endif
//===============================================
