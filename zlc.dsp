# Microsoft Developer Studio Project File - Name="zlc" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=zlc - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "zlc.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "zlc.mak" CFG="zlc - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "zlc - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "zlc - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "zlc - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /FD /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386

!ELSEIF  "$(CFG)" == "zlc - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /FR /FD /GZ /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE RSC /l 0x419 /d "_DEBUG"
# ADD RSC /l 0x419 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "zlc - Win32 Release"
# Name "zlc - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\strtod.cpp
# End Source File
# Begin Source File

SOURCE=.\zl.cpp
# End Source File
# Begin Source File

SOURCE=.\zl_compiler.cpp
# End Source File
# Begin Source File

SOURCE=.\zl_lexer.l

!IF  "$(CFG)" == "zlc - Win32 Release"

# Begin Custom Build
InputPath=.\zl_lexer.l

"zl_lexer.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	c:\cygwin\bin\flex.exe -L -ozl_lexer.cpp $(InputPath)

# End Custom Build

!ELSEIF  "$(CFG)" == "zlc - Win32 Debug"

# Begin Custom Build
InputPath=.\zl_lexer.l

"zl_lexer.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	c:\cygwin\bin\flex.exe -ozl_lexer.cpp $(InputPath)

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\zl_parser.y

!IF  "$(CFG)" == "zlc - Win32 Release"

# Begin Custom Build
InputPath=.\zl_parser.y

BuildCmds= \
	bison.exe -r all -dl -o zl_parser.cpp $(InputPath)

"zl_parser.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

"zl_parser.hpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)
# End Custom Build

!ELSEIF  "$(CFG)" == "zlc - Win32 Debug"

# Begin Custom Build
InputPath=.\zl_parser.y

BuildCmds= \
	bison.exe -r all -d -o zl_parser.cpp $(InputPath)

"zl_parser.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

"zl_parser.hpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\zl_vars.cpp
# End Source File
# Begin Source File

SOURCE=.\zlc.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\autobuild.h
# End Source File
# Begin Source File

SOURCE=.\strtod.h
# End Source File
# Begin Source File

SOURCE=.\zl.h
# End Source File
# Begin Source File

SOURCE=.\zl_compiler.h
# End Source File
# Begin Source File

SOURCE=.\zl_opcodes.h
# End Source File
# Begin Source File

SOURCE=.\zl_parser.h
# End Source File
# Begin Source File

SOURCE=.\zl_vars.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\info.txt
# End Source File
# Begin Source File

SOURCE=.\test.pzl
# End Source File
# Begin Source File

SOURCE=.\zl_lexer.cpp
# End Source File
# Begin Source File

SOURCE=.\zl_parser.cpp
# End Source File
# Begin Source File

SOURCE=.\zl_parser.hpp
# End Source File
# End Group
# Begin Group "zinc"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\Exemples\zinc\base64.cpp
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\base64.h
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\snprintf.cpp
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\snprintf.h
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\utstrings.cpp
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\utstrings.h
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\zalloc.cpp
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\zalloc.h
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\zcommon.cpp
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\zcommon.h
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\zdbg.cpp
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\zdbg.h
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\zibuffer.cpp
# End Source File
# Begin Source File

SOURCE=..\..\Exemples\zinc\zibuffer.h
# End Source File
# End Group
# End Target
# End Project
