@echo off
echo ��Doxygen����ļ������utf-8ת����gbk
set path=%path%;%cd%
cd output\html

echo ����chm�����ļ�
call utf82gbk.bat index.hhp
call utf82gbk.bat index.hhc
call utf82gbk.bat index.hhk
call html-utf82gbk *.html

echo ����chm�ļ�
"C:\Program Files\HTML Help Workshop\hhc.exe" index.hhp

if exist index.chm copy index.chm ..\..\refman.chm
del /f /q *.chm
cd ..\..
