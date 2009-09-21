@echo off
echo 将Doxygen输出文件编码从utf-8转换到gbk
set path=%path%;%cd%
cd output\html

echo 处理chm输入文件
call utf82gbk.bat index.hhp
call utf82gbk.bat index.hhc
call utf82gbk.bat index.hhk
call html-utf82gbk *.html

echo 生成chm文件
"C:\Program Files\HTML Help Workshop\hhc.exe" index.hhp

if exist index.chm copy index.chm ..\..\refman.chm
del /f /q *.chm
cd ..\..
