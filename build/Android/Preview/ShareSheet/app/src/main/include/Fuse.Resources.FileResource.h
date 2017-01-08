// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
namespace g{namespace Fuse{namespace Resources{struct FileResource;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class FileResource :163
// {
::g::Uno::UX::FileSource_type* FileResource_typeof();
void FileResource__ctor_1_fn(FileResource* __this, ::g::Uno::UX::FileSource* file);
void FileResource__New1_fn(::g::Uno::UX::FileSource* file, FileResource** __retval);
void FileResource__OpenRead_fn(FileResource* __this, ::g::Uno::IO::Stream** __retval);

struct FileResource : ::g::Uno::UX::FileSource
{
    uStrong< ::g::Uno::UX::FileSource*> _file;

    void ctor_1(::g::Uno::UX::FileSource* file);
    static FileResource* New1(::g::Uno::UX::FileSource* file);
};
// }

}}} // ::g::Fuse::Resources
