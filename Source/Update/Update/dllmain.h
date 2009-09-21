// dllmain.h : 模块类的声明。

class CUpdateModule : public CAtlDllModuleT< CUpdateModule >
{
public :
    DECLARE_LIBID(LIBID_UpdateLib)
    DECLARE_REGISTRY_APPID_RESOURCEID(IDR_UPDATE, "{6062D967-1B9A-4B6B-93AC-2E8367280AB1}")
};

extern class CUpdateModule _AtlModule;
