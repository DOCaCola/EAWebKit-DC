/*
 * Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies)
 * Copyright (C) 2011, 2012, 2013, 2014, 2015 Electronic Arts, Inc. All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef EAWEBKIT_EA_INSTANCE_H
#define EAWEBKIT_EA_INSTANCE_H

#include "BridgeJSC.h"
#include "runtime_root.h"
#include "ea_class.h"
#include "ea_utility.h"
#include <EASTL/fixed_string.h>
#include <EASTL/fixed_vector.h>

namespace EA
{
namespace WebKit
{
class IJSBoundObject;
}
}

namespace JSC { namespace Bindings {

// The EAInstance acts as the glue between the object in the JavaScript land and native land. It executes runtime method calls etc.
// The field read/write are done via a different path though. 

class EAInstance : public Instance {
	WTF_MAKE_NONCOPYABLE(EAInstance);
public:
    static Ref<EAInstance> create(EA::WebKit::IJSBoundObject* object, RefPtr<RootObject>&& rootObject)
    {
        return adoptRef(*new EAInstance(object, WTFMove(rootObject)));
    }

	~EAInstance(void) override;

    Class *getClass() const override;

	//virtual bool setValueOfUndefinedField(ExecState*, PropertyName, JSValue) { return false; }
	
	JSValue getMethod(ExecState*, PropertyName) override;
	JSValue invokeMethod(ExecState*, RuntimeMethod*) override;
	
	bool supportsInvokeDefaultMethod() const override;
	JSValue invokeDefaultMethod(ExecState*) override;

	//EAWebKitTODO: Implement these to support bound object as constructor. 
	//bool supportsConstruct() const { return false; }
	//JSValue invokeConstruct(ExecState*, const ArgList&) { return JSValue(); }
	
	//EAWebKitTODO: We currently don't support methods, only fields.
	void getPropertyNames(ExecState*, PropertyNameArray&) override;
	
    JSValue defaultValue(ExecState*, PreferredPrimitiveType) const override;

	JSValue valueOf(ExecState*) const override;

	//EAWebKitTODO: Implement these to support dynamic object member addition.
	//virtual bool getOwnPropertySlot(JSObject*, ExecState*, PropertyName, PropertySlot&) { return false; }
	//virtual void put(JSObject*, ExecState*, PropertyName, JSValue, PutPropertySlot&) { }

    EA::WebKit::IJSBoundObject* getBoundObject(void) const { return mBoundObject; }

private:
	// Invoke the method identified by the name. If name is NULL, invoke self as a function.
	JSValue invokeMethodPriv(ExecState*, const char8_t* methodName);
	
	EAInstance(EA::WebKit::IJSBoundObject*, RefPtr<RootObject>&&);
    mutable EAClass *mClass;
    EA::WebKit::IJSBoundObject *mBoundObject;
};

}}

#endif
