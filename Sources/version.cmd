@rem Create version.h.
@echo>version.h.new #define NSSM_VERSION _T("Non-Sucking Service Manager")
@echo>>version.h.new #define NSSM_VERSIONINFO 2,25,0,75
@echo>>version.h.new #define NSSM_DATE _T("%DATE%")
@echo>>version.h.new #define NSSM_FILEFLAGS 0L
@echo>>version.h.new #define NSSM_COPYRIGHT _T("Custom Build by milokz@gmail.com")

fc version.h version.h.new >NUL: 2>NUL:
if %ERRORLEVEL% == 0 (del version.h.new) else (move /y version.h.new version.h)
