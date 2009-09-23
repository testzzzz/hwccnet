
DcomSvrps.dll: dlldata.obj DcomSvr_p.obj DcomSvr_i.obj
	link /dll /out:DcomSvrps.dll /def:DcomSvrps.def /entry:DllMain dlldata.obj DcomSvr_p.obj DcomSvr_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del DcomSvrps.dll
	@del DcomSvrps.lib
	@del DcomSvrps.exp
	@del dlldata.obj
	@del DcomSvr_p.obj
	@del DcomSvr_i.obj
