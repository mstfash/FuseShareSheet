// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct FrustumMatrix;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static class FrustumMatrix :956
// {
uClassType* FrustumMatrix_typeof();
void FrustumMatrix__OrthoLH_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__OrthoLHInverse_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__OrthoRH_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__OrthoRHInverse_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__PerspectiveProjection_fn(::g::Uno::Float2* viewSize, float* znear, float* zfar, float* distance, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__PerspectiveProjectionInverse_fn(::g::Uno::Float2* viewSize, float* znear, float* zfar, float* distance, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__PerspectiveView_fn(::g::Uno::Float2* viewSize, float* distance, ::g::Uno::Float2* relOrigin, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__PerspectiveViewInverse_fn(::g::Uno::Float2* viewSize, float* distance, ::g::Uno::Float2* relOrigin, ::g::Uno::Float4x4* __retval);

struct FrustumMatrix : uObject
{
    static ::g::Uno::Float4x4 OrthoLH(float width, float height, float near, float far);
    static ::g::Uno::Float4x4 OrthoLHInverse(float width, float height, float near, float far);
    static ::g::Uno::Float4x4 OrthoRH(float width, float height, float zNear, float zFar);
    static ::g::Uno::Float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar);
    static ::g::Uno::Float4x4 PerspectiveProjection(::g::Uno::Float2 viewSize, float znear, float zfar, float distance);
    static ::g::Uno::Float4x4 PerspectiveProjectionInverse(::g::Uno::Float2 viewSize, float znear, float zfar, float distance);
    static ::g::Uno::Float4x4 PerspectiveView(::g::Uno::Float2 viewSize, float distance, ::g::Uno::Float2 relOrigin);
    static ::g::Uno::Float4x4 PerspectiveViewInverse(::g::Uno::Float2 viewSize, float distance, ::g::Uno::Float2 relOrigin);
};
// }

}}} // ::g::Fuse::Internal
