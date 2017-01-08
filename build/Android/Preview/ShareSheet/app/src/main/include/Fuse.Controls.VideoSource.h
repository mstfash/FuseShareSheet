// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Video/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct VideoSource;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class VideoSource :84
// {
uType* VideoSource_typeof();
void VideoSource__ctor__fn(VideoSource* __this);
void VideoSource__OnSourceChanged_fn(VideoSource* __this);
void VideoSource__add_SourceChanged_fn(VideoSource* __this, uDelegate* value);
void VideoSource__remove_SourceChanged_fn(VideoSource* __this, uDelegate* value);

struct VideoSource : uObject
{
    uStrong<uDelegate*> SourceChanged1;

    void ctor_();
    void OnSourceChanged();
    void add_SourceChanged(uDelegate* value);
    void remove_SourceChanged(uDelegate* value);
};
// }

}}} // ::g::Fuse::Controls
