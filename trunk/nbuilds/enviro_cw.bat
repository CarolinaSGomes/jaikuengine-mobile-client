@REM Copyright (c) 2007-2009 Google Inc.
@REM Copyright (c) 2006-2007 Jaiku Ltd.
@REM Copyright (c) 2002-2006 Mika Raento and Renaud Petit
@REM
@REM This software is licensed at your choice under either 1 or 2 below.
@REM
@REM 1. MIT License
@REM
@REM Permission is hereby granted, free of charge, to any person obtaining a copy
@REM of this software and associated documentation files (the "Software"), to deal
@REM in the Software without restriction, including without limitation the rights
@REM to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
@REM copies of the Software, and to permit persons to whom the Software is
@REM furnished to do so, subject to the following conditions:
@REM
@REM The above copyright notice and this permission notice shall be included in
@REM all copies or substantial portions of the Software.
@REM
@REM THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
@REM IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
@REM FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
@REM AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
@REM LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
@REM OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
@REM THE SOFTWARE.
@REM
@REM 2. Gnu General Public license 2.0
@REM
@REM This program is free software; you can redistribute it and/or
@REM modify it under the terms of the GNU General Public License
@REM as published by the Free Software Foundation; either version 2
@REM of the License, or (at your option) any later version.
@REM
@REM This program is distributed in the hope that it will be useful,
@REM but WITHOUT ANY WARRANTY; without even the implied warranty of
@REM MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
@REM GNU General Public License for more details.
@REM
@REM You should have received a copy of the GNU General Public License
@REM along with this program; if not, write to the Free Software
@REM Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
@REM
@REM
@REM This file is part of the JaikuEngine mobile client.

set ARMDLL=C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Bin
set MWCSym2Includes=C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Symbian_Support\MSL\MSL_C\MSL_Common\Include;C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Symbian_Support\MSL\MSL_C\MSL_Win32\Include;C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Symbian_Support\MSL\MSL_C\MSL_X86;C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Symbian_Support\MSL\MSL_C++\MSL_Common\Include;C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Symbian_Support\MSL\MSL_Extras\MSL_Common\Include;C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Symbian_Support\MSL\MSL_Extras\MSL_Win32\Include;C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Symbian_Support\Win32-x86 Support\Headers\Win32 SDK
set MWSym2Libraries=C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Symbian_Support\Win32-x86 Support\Libraries\Win32 SDK;C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Symbian_Support\Runtime\Runtime_x86\Runtime_Win32\Libs
set MWSym2LibraryFiles=MSL_ALL_MSE_Symbian_D.lib;gdi32.lib;user32.lib;kernel32.lib;
set NOKIA_LICENSE_FILE=C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\license.dat
set Path=%EPOCROOT%\Epoc32\tools;%EPOCROOT%\epoc32\gcc\bin;c:\Perl\bin;C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Bin;C:\Program Files\Nokia\CodeWarrior for Symbian v3.1\Symbian_Tools\Command_Line_Tools;C:\Program Files\CSL Arm Toolchain\bin;C:\Program Files\Common Files\Symbian\Tools;C:\Program Files\CSL Arm Toolchain\bin;C:\Program Files\Common Files\Symbian\Tools;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\tools\;c:\python25
set PATH=%PATH%;C:\Program Files\Microsoft Visual Studio .NET 2003\Common7\IDE;C:\Program Files\Microsoft Visual Studio .NET 2003\VC7\BIN;C:\Program Files\Microsoft Visual Studio .NET 2003\Common7\Tools
set CPATH=%EPOCROOT%\epoc32\include
set CW_SYMBIAN_VERSION=3.1
