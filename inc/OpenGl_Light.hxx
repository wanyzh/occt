// Created on: 2011-07-13
// Created by: Sergey ZERCHANINOV
// Copyright (c) 2011-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef OpenGl_Light_Header
#define OpenGl_Light_Header

#include <Graphic3d_CLight.hxx>
#include <NCollection_List.hxx>

#define OpenGLMaxLights 8

typedef Graphic3d_CLight       OpenGl_Light;
typedef Graphic3d_ListOfCLight OpenGl_ListOfLight;

static inline OpenGl_ListOfLight& OpenGl_NoShadingLight()
{
  static OpenGl_ListOfLight aLights;
  if (aLights.IsEmpty())
  {
    OpenGl_Light       aLight;
    aLight.Type        = Graphic3d_TOLS_AMBIENT;
    aLight.IsHeadlight = Standard_False;
    aLight.Color.r()   = 1.;
    aLight.Color.g()   = 1.;
    aLight.Color.b()   = 1.;
    aLights.Append (aLight);
  }
  return aLights;
}

#endif // OpenGl_Light_Header
