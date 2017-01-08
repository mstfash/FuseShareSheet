// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{struct Renderer__SharedIndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal static class Renderer.SharedIndexBuffer :1665
// {
uClassType* Renderer__SharedIndexBuffer_typeof();
void Renderer__SharedIndexBuffer__EnsureSize_fn(int* length);
void Renderer__SharedIndexBuffer__Release_fn();
void Renderer__SharedIndexBuffer__Retain_fn();

struct Renderer__SharedIndexBuffer : uObject
{
    static int _length_;
    static int& _length() { return _length_; }
    static int _refCount_;
    static int& _refCount() { return _refCount_; }
    static uSStrong< ::g::Uno::Graphics::IndexBuffer*> IndexBuffer_;
    static uSStrong< ::g::Uno::Graphics::IndexBuffer*>& IndexBuffer() { return IndexBuffer_; }

    static void EnsureSize(int length);
    static void Release();
    static void Retain();
};
// }

}}} // ::g::Fuse::Text
