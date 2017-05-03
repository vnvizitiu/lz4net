#include "stdafx.h"

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;
using namespace System::Runtime::InteropServices;
using namespace System::Security::Permissions;

//
// General Information about an assembly is controlled through the following
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.
//
[assembly:AssemblyTitleAttribute("LZ4mm")];
[assembly:AssemblyDescriptionAttribute("LZ4 compression codec (MixedMode)")];
[assembly:AssemblyConfigurationAttribute("")];
[assembly:AssemblyCompanyAttribute("Milosz Krajewski")];
[assembly:AssemblyProductAttribute("LZ4mm")];
[assembly:AssemblyCopyrightAttribute("Copyright (c) 2014, Milosz Krajewski")];
[assembly:AssemblyTrademarkAttribute("")];
[assembly:AssemblyCultureAttribute("")];
#if !_DEBUG
[assembly:AssemblyKeyFileAttribute("..\\..\\LZ4.snk")]
#endif

//
// Version information for an assembly consists of the following four values:
//
//      Major Version
//      Minor Version
//      Build Number
//      Revision
//
// You can specify all the value or you can default the Revision and Build Numbers
// by using the '*' as shown below:

[assembly:AssemblyVersionAttribute("1.0.15.93")];
[assembly:ComVisible(false)];
[assembly:CLSCompliantAttribute(true)];
