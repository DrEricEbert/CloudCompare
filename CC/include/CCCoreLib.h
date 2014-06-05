//##########################################################################
//#                                                                        #
//#                               CCLIB                                    #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU Library General Public License as       #
//#  published by the Free Software Foundation; version 2 of the License.  #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

#ifdef _MSC_VER
//To get rid of the really annoying warnings about template class exportation
#pragma warning( disable: 4251 )
#pragma warning( disable: 4530 )
#endif

#ifdef CC_USE_AS_DLL
// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CC_CORE_LIB_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CC_CORE_LIB_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
#ifdef CC_CORE_LIB_EXPORTS
#define CC_CORE_LIB_API __declspec(dllexport)
#else
#define CC_CORE_LIB_API __declspec(dllimport)
#endif
#else
#define CC_CORE_LIB_API
#endif