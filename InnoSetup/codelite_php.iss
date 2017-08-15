; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

[Setup]
AppName=CodeLite
AppVerName=CodeLite
AppPublisherURL=http://codelite.org
AppSupportURL=http://codelite.org
AppUpdatesURL=http://codelite.org
DefaultDirName={reg:HKLM\Software\codelite\settings,InstalPath|{pf}\CodeLite}
DefaultGroupName=CodeLite
LicenseFile=license.txt
OutputDir=output
OutputBaseFilename=codelite-php-7.0-BETA
ChangesEnvironment=yes
FlatComponentsList=yes
SetupIconFile=box_software.ico
Compression=lzma/ultra
SolidCompression=true
InternalCompressLevel=ultra
PrivilegesRequired=none

[Languages]
Name: "eng"; MessagesFile: "compiler:Default.isl"

[Components]
Name: "Editor";     Description: "codelite IDE (Optimized for PHP)";             Types: full custom;

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked
Name: "quicklaunchicon"; Description: "{cm:CreateQuickLaunchIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "..\Runtime\codelite.exe"; DestDir: "{app}"; Flags: ignoreversion; Components: Editor
Source: "..\Runtime\codelite-echo.exe"; DestDir: "{app}"; Flags: ignoreversion; Components: Editor
Source: "..\Runtime\codelite-make.exe"; DestDir: "{app}"; Flags: ignoreversion; Components: Editor
Source: "..\Runtime\codelite-terminal.exe"; DestDir: "{app}"; Flags: ignoreversion; Components: Editor
Source: "..\LICENSE"; DestDir: "{app}"; Flags: ignoreversion; Components: Editor

;; ---- wxWidgets DLLs
Source: "D:\src\wxWidgets\lib\gcc_dll\wxmsw310u_gcc_cl.dll";         DestDir: "{app}"; Flags: ignoreversion; Components: Editor

Source: "..\InnoSetup\license.txt"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\sdk\wxconfig\wx-config.exe"; DestDir: "{app}"; Components: Editor
Source: "..\Runtime\config\codelite.xml.default"; DestDir: "{app}\config"; Components: Editor;
Source: "..\Runtime\config\plugins.xml.default"; DestDir: "{app}\config";  Components: Editor;
Source: "..\Runtime\config\accelerators.conf.default"; DestDir: "{app}\config"; Components: Editor;
Source: "..\Runtime\config\debuggers.xml.default"; DestDir: "{app}\config"; Components: Editor;
Source: "..\Runtime\config\build_settings.xml.default.win"; DestDir: "{app}\config"; DestName: "build_settings.xml.default"; Components: Editor
Source: "..\Runtime\rc\*"; DestDir: "{app}\rc"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\astyle.sample"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\php.sample"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\config\codelite.layout.default"; DestDir: "{app}\config"; DestName: codelite.layout; Flags: ignoreversion ; Components: Editor
Source: "..\sdk\codelite_cppcheck\cfg\*.cfg"; DestDir: "{app}\config\cppcheck"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\templates\*"; DestDir: "{app}\templates"; Flags: recursesubdirs ; Components: Editor
Source: "..\SpellChecker\dics\*"; DestDir: "{app}\dics"; Flags: recursesubdirs ; Components: Editor

; Override with Windows specific files
Source: "..\Runtime\templates\projects\dynamic-library\dynamic-library.project.windows"; DestName: dynamic-library.project; DestDir: "{app}\templates\projects\dynamic-library"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\templates\projects\dynamic-library-wx-enabled\dynamic-library-wx-enabled.project.windows"; DestName: dynamic-library-wx-enabled.project; DestDir: "{app}\templates\projects\dynamic-library-wx-enabled"; Flags: ignoreversion ; Components: Editor

; XML settings
Source: "..\Runtime\lexers\*.xml"; DestDir: "{app}\lexers\"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\debuggers\DebuggerGDB.dll"; DestDir: "{app}\debuggers"; Flags: ignoreversion ; Components: Editor

; Copy the plugins (by name)
Source: "..\Runtime\plugins\abbreviation.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\CodeFormatter.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\Copyright.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\DatabaseExplorer.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\ExternalTools.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\git.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\Outline.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\snipwiz.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\Subversion2.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\ZoomNavigator.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\SFTP.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\Tweaks.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\CodeLiteDiff.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\WordCompletion.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\SpellCheck.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\PHP.dll"; DestDir: "{app}\plugins"; Flags: ignoreversion ; Components: Editor

Source: "..\lib\gcc_lib\libwxsqlite3u.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\lib\gcc_lib\libcodeliteu.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\lib\gcc_lib\libplugin_sdku.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\lib\gcc_lib\libdatabaselayersqliteu.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\lib\gcc_lib\libwxshapeframeworku.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\sdk\clang\lib\libclang.dll"; DestDir: "{app}\"; Flags: ignoreversion ; Components: Editor
Source: "..\sdk\libssh\lib\libssh.dll"; DestDir: "{app}\"; Flags: ignoreversion ; Components: Editor
Source: "..\sdk\clang\lib\clang-format.exe"; DestDir: "{app}\"; DestName: "codelite-clang-format.exe"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\plugins\resources\*"; DestDir: "{app}\plugins\resources\"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\codelite_indexer.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\codelite_launcher.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\codelite_cppcheck.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\codelite-cc.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\codelite-make.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\le_exec.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\makedir.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\patch.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\*.html"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\images\*"; DestDir: "{app}\images"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\*.zip"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "C:\MinGW-4.8.1\bin\mingwm10.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "C:\MinGW-4.8.1\bin\libgcc_s_sjlj-1.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "C:\MinGW-4.8.1\bin\exchndl.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "C:\MinGW-4.8.1\bin\which.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "C:\MinGW-4.8.1\bin\rm.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "C:\MinGW-4.8.1\bin\cscope.exe"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "C:\MinGW-4.8.1\bin\cygncurses-8.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "C:\MinGW-4.8.1\bin\cygwin1.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "C:\MinGW-4.8.1\bin\libintl3.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "C:\MinGW-4.8.1\bin\pthreadGC2.dll"; DestDir: "{app}"; Flags: ignoreversion ; Components: Editor
Source: "..\Runtime\locale\*"; DestDir: "{app}\locale"; Flags: recursesubdirs ; Components: Editor
Source: "..\Runtime\gdb_printers\*"; DestDir: "{app}\gdb_printers"; Flags: recursesubdirs ; Components: Editor
Source: "..\Runtime\PHP.zip";  DestDir: "{app}"; Flags: ignoreversion; Components: Editor

[Icons]
Name: "{group}\CodeLite "; Filename: "{app}\codelite.exe"; WorkingDir: "{app}"
Name: "{group}\{cm:UninstallProgram, CodeLite}"; Filename: "{uninstallexe}"
Name: "{userdesktop}\CodeLite "; Filename: "{app}\codelite.exe"; WorkingDir: "{app}" ;Tasks: desktopicon
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\CodeLite"; WorkingDir: "{app}"; Filename: "{app}\codelite.exe"; Tasks: quicklaunchicon

[INI]

[Registry]
Root: HKLM; Subkey: "Software\codelite\settings"; ValueType: string; ValueName: "InstallPath"; ValueData: "{app}"
Root: HKLM; Subkey: "Software\codelite\settings"; ValueType: string; ValueName: "PluginsDir";  ValueData: "{app}\plugins"
Root: HKLM; Subkey: "Software\codelite\settings"; ValueType: string; ValueName: "MinGW_Version"; ValueData: "4.8.1"

[UninstallDelete]
Type: filesandordirs; Name: "{app}"

[Code]
var
  MinGW_Page:      TInputDirWizardPage;
  UnitTestPP_Page: TInputDirWizardPage;

procedure CreateMinGWPage();
begin
  MinGW_Page := CreateInputDirPage(wpSelectComponents,
          'Select MinGW Installation Folder', 'Where should setup place MinGW?',
          'MinGW will be stored in the following folder.'#13#10#13#10 +
          'To continue, click Next. If you would like to select a different folder, click Browse.',
          False, 'New Folder');

  // Add item (with an empty caption)
  MinGW_Page.Add('');

  // Set initial value (optional)
  MinGW_Page.Values[0] := ExpandConstant('{sd}\MinGW-4.8.1\');
end;


procedure InitializeWizard();
begin
  //CreateMinGWPage();
  //CreateUnitTestPPPage();
end;

procedure DeleteFolder(ADirName: string);
var
  FindRec: TFindRec;
begin
  if FindFirst(ADirName + '\*', FindRec) then begin
    try
      repeat
        if FindRec.Attributes and FILE_ATTRIBUTE_DIRECTORY <> 0 then begin
          if (FindRec.Name <> '.') and (FindRec.Name <> '..') then begin
            DeleteFolder(ADirName + '\' + FindRec.Name);
            RemoveDir(ADirName + '\' + FindRec.Name);
          end;
        end else
          DeleteFile(ADirName + '\' + FindRec.Name);
      until not FindNext(FindRec);
    finally
      FindClose(FindRec);
    end;
  end;
  // Remove the folder itself
  RemoveDir(ADirName);
end;

// Uninstall
procedure CurUninstallStepChanged(CurUninstallStep: TUninstallStep);
begin
  case CurUninstallStep of
    usUninstall:
      begin
        RegDeleteKeyIncludingSubkeys(HKCR, '*\shell\Open With CodeLite');
        // Prompt the user to delete all his settings, default to "No"
        if MsgBox('Do you want to delete all user settings as well?', mbConfirmation, MB_YESNO or MB_DEFBUTTON2) = IDYES 
        then begin
            DeleteFolder(ExpandConstant('{userappdata}') + '\codelite');
        end;
      end;
    usPostUninstall:
      begin
      end;
  end;
end;


//--------------------
// Uninstall
//--------------------

function GetUninstallString(): String;
var
  sUnInstPath: String;
  sUnInstallString: String;
begin
  sUnInstPath := 'Software\Microsoft\Windows\CurrentVersion\Uninstall\CodeLite_is1';
  sUnInstallString := '';
  if not RegQueryStringValue(HKLM, sUnInstPath, 'UninstallString', sUnInstallString) then
    RegQueryStringValue(HKCU, sUnInstPath, 'UninstallString', sUnInstallString);
  Result := sUnInstallString;
end;

function UnInstallOldVersion(): Integer;
var
  sUnInstallString: String;
  sUnInstallStringOld: String;
  iResultCode: Integer;
begin
    // Return Values:
    // 1 - uninstall string is empty
    // 2 - error executing the UnInstallString
    // 3 - successfully executed the UnInstallString

  // default return value
  Result := 0;
  sUnInstallString    := GetUninstallString();
  if sUnInstallString <> '' then begin
    sUnInstallString := RemoveQuotes(sUnInstallString);
    if Exec(sUnInstallString, '/SILENT /NORESTART /SUPPRESSMSGBOXES','', SW_HIDE, ewWaitUntilTerminated, iResultCode) then
      Result := 3
    else
      Result := 2;
  end else
    Result := 1;
end;

function IsUpgrade(): Boolean;
begin
  Result := (GetUninstallString() <> '');
end;

procedure CurStepChanged(CurStep: TSetupStep);
var
  ResultCode: Integer;
begin
    case CurStep of
    ssInstall:
        begin
          if (IsUpgrade()) then
            begin
              UnInstallOldVersion();
            end;
        end;
    end;
end;
