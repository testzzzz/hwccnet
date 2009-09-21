// dllmain.h : 模块类的声明。

class CRSSPluginModule : public CAtlDllModuleT< CRSSPluginModule >
{
public :
    DECLARE_LIBID(LIBID_RSSPluginLib)
    DECLARE_REGISTRY_APPID_RESOURCEID(IDR_RSSPLUGIN, "{88E4F6E8-EB30-427E-BC1A-DA8CB67C09C6}")
};

extern class CRSSPluginModule _AtlModule;
