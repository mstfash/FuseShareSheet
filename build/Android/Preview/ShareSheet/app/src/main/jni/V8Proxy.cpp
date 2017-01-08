#include "V8Proxy.h"
#include <Fuse.Scripting.V8.Simple.String.h>
#include <Fuse.Scripting.V8.Simple.ScriptException.h>
#include <Fuse.Scripting.V8.Simple.UniqueValueVector.h>

#include <Uno.h>

namespace V8Simple
{

//#if !#{Fuse.Scripting.V8.Simple.MessageHandlerImpl:IsStripped}
MessageHandlerProxy::MessageHandlerProxy(::g::Fuse::Scripting::V8::Simple::MessageHandler* unoObject)
	: _unoObject(unoObject)
{
}

void MessageHandlerProxy::Handle(const ::V8Simple::String* message)
{
	auto unoMessage = ::g::Fuse::Scripting::V8::Simple::String::New4(message->Copy());
	_unoObject->Handle(unoMessage);
}
//#endif

//#if !#{Fuse.Scripting.V8.Simple.ScriptExceptionHandler:IsStripped}
ScriptExceptionHandlerProxy::ScriptExceptionHandlerProxy(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* unoObject)
	: _unoObject(unoObject)
{
}

void ScriptExceptionHandlerProxy::Handle(::V8Simple::ScriptException &e)
{
	auto unoException = ::g::Fuse::Scripting::V8::Simple::ScriptException::New1(e.Copy());
	_unoObject->Handle(unoException);
}
//#endif

//#if !#{Fuse.Scripting.V8.Simple.CallbackImpl:IsStripped}
CallbackProxy::CallbackProxy(::g::Fuse::Scripting::V8::Simple::Callback* unoObject)
	: _unoObject(unoObject)
{
}

Value* CallbackProxy::Call(V8Simple::UniqueValueVector* args)
{
	::g::Fuse::Scripting::V8::Simple::UniqueValueVector* vargs
		= ::g::Fuse::Scripting::V8::Simple::UniqueValueVector::New1(args, false);
	::g::Fuse::Scripting::V8::Simple::Value* result = _unoObject->Call(vargs);
	return result == nullptr ? nullptr : result->_valueImpl;
}

void CallbackProxy::Retain()
{
	uRetain(_unoObject);
	_unoObject->Retain();
}

void CallbackProxy::Release()
{
	_unoObject->Release();
	uRelease(_unoObject);
}

void CallbackProxy::Delete()
{
	delete this;
}
//#endif

//#if !#{Fuse.Scripting.V8.Simple.ExternalFreerImpl:IsStripped}
ExternalFreerProxy::ExternalFreerProxy(::g::Fuse::Scripting::V8::Simple::ExternalFreer* unoObject)
	: _unoObject(unoObject)
{
}

void ExternalFreerProxy::Free(void* ptr)
{
	_unoObject->Free(ptr);
}
//#endif

} // namespace V8Simple
