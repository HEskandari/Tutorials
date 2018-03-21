////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#include "App.xaml.h"

#include <NsCore/ReflectionImplement.h>


using namespace Localization;
using namespace Noesis;


////////////////////////////////////////////////////////////////////////////////////////////////////
const char* App::GetTitleOverride(UIElement*) const
{
    return "NoesisGUI - Localization";
}

////////////////////////////////////////////////////////////////////////////////////////////////////
NS_IMPLEMENT_REFLECTION(Localization::App)
{
    NsMeta<TypeId>("Localization.App");
}
