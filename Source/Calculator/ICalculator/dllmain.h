// dllmain.h : 模块类的声明。

class CLWCalculatorModule : public CAtlDllModuleT< CLWCalculatorModule >
{
public :
    DECLARE_LIBID(LIBID_LWCalculatorLib)
    DECLARE_REGISTRY_APPID_RESOURCEID(IDR_LWCALCULATOR, "{996E0694-042B-40D8-B189-2D0FA6E064C0}")
};

extern class CLWCalculatorModule _AtlModule;
