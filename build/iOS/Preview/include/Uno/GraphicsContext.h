// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/backends/cplusplus/Uno/GraphicsContext.h'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <XliPlatform/GLContext.h>
#include <XliPlatform/GL.h>
#include <Uno/Support.h>

extern ::Xli::GLContext *_XliGLContextPtr;

struct uGraphicsContext
{
    static uGraphicsContext GetInstance()
    {
        return uGraphicsContext(_XliGLContextPtr);
    }

    uGraphicsContext()
    {
        this->context = NULL;
    }

    GLuint GetBackbufferGLHandle()
    {
#if IOS
        return 1;
#else
        return 0;
#endif
    }

    ::g::Uno::Int2 GetBackbufferSize()
    {
        return uInt2FromXliVector2i(context->GetDrawableSize());
    }

private:
    uGraphicsContext(Xli::GLContext *context)
    {
        this->context = context;
    }

    ::Xli::GLContext *context;
};
