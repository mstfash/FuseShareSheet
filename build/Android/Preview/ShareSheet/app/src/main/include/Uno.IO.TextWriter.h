// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct TextWriter;}}}

namespace g{
namespace Uno{
namespace IO{

// public abstract class TextWriter :3561
// {
struct TextWriter_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Close)(::g::Uno::IO::TextWriter*);
    void(*fp_Dispose1)(::g::Uno::IO::TextWriter*, bool*);
    void(*fp_Flush)(::g::Uno::IO::TextWriter*);
    void(*fp_Write1)(::g::Uno::IO::TextWriter*, uChar*);
    void(*fp_Write3)(::g::Uno::IO::TextWriter*, uArray*, int*, int*);
    void(*fp_Write9)(::g::Uno::IO::TextWriter*, uString*);
};

TextWriter_type* TextWriter_typeof();
void TextWriter__ctor__fn(TextWriter* __this);
void TextWriter__Close_fn(TextWriter* __this);
void TextWriter__Dispose_fn(TextWriter* __this);
void TextWriter__Dispose1_fn(TextWriter* __this, bool* disposing);
void TextWriter__Flush_fn(TextWriter* __this);
void TextWriter__Write_fn(TextWriter* __this, bool* value);
void TextWriter__Write1_fn(TextWriter* __this, uChar* value);
void TextWriter__Write2_fn(TextWriter* __this, uArray* buffer);
void TextWriter__Write3_fn(TextWriter* __this, uArray* buffer, int* index, int* count);
void TextWriter__Write4_fn(TextWriter* __this, double* value);
void TextWriter__Write5_fn(TextWriter* __this, float* value);
void TextWriter__Write6_fn(TextWriter* __this, int* value);
void TextWriter__Write7_fn(TextWriter* __this, int64_t* value);
void TextWriter__Write8_fn(TextWriter* __this, uObject* value);
void TextWriter__Write9_fn(TextWriter* __this, uString* value);
void TextWriter__Write10_fn(TextWriter* __this, uString* format, uArray* args);
void TextWriter__Write11_fn(TextWriter* __this, uint32_t* value);
void TextWriter__Write12_fn(TextWriter* __this, uint64_t* value);
void TextWriter__WriteLine_fn(TextWriter* __this);
void TextWriter__WriteLine1_fn(TextWriter* __this, bool* value);
void TextWriter__WriteLine2_fn(TextWriter* __this, uChar* value);
void TextWriter__WriteLine3_fn(TextWriter* __this, uArray* buffer);
void TextWriter__WriteLine4_fn(TextWriter* __this, uArray* buffer, int* index, int* count);
void TextWriter__WriteLine5_fn(TextWriter* __this, double* value);
void TextWriter__WriteLine6_fn(TextWriter* __this, float* value);
void TextWriter__WriteLine7_fn(TextWriter* __this, int* value);
void TextWriter__WriteLine8_fn(TextWriter* __this, int64_t* value);
void TextWriter__WriteLine9_fn(TextWriter* __this, uObject* value);
void TextWriter__WriteLine10_fn(TextWriter* __this, uString* value);
void TextWriter__WriteLine11_fn(TextWriter* __this, uString* format, uArray* args);
void TextWriter__WriteLine12_fn(TextWriter* __this, uint32_t* value);
void TextWriter__WriteLine13_fn(TextWriter* __this, uint64_t* value);

struct TextWriter : uObject
{
    void ctor_();
    void Close() { (((TextWriter_type*)__type)->fp_Close)(this); }
    void Dispose();
    void Dispose1(bool disposing) { (((TextWriter_type*)__type)->fp_Dispose1)(this, &disposing); }
    void Flush() { (((TextWriter_type*)__type)->fp_Flush)(this); }
    void Write(bool value);
    void Write1(uChar value) { (((TextWriter_type*)__type)->fp_Write1)(this, &value); }
    void Write2(uArray* buffer);
    void Write3(uArray* buffer, int index, int count) { (((TextWriter_type*)__type)->fp_Write3)(this, buffer, &index, &count); }
    void Write4(double value);
    void Write5(float value);
    void Write6(int value);
    void Write7(int64_t value);
    void Write8(uObject* value);
    void Write9(uString* value) { (((TextWriter_type*)__type)->fp_Write9)(this, value); }
    void Write10(uString* format, uArray* args);
    void Write11(uint32_t value);
    void Write12(uint64_t value);
    void WriteLine();
    void WriteLine1(bool value);
    void WriteLine2(uChar value);
    void WriteLine3(uArray* buffer);
    void WriteLine4(uArray* buffer, int index, int count);
    void WriteLine5(double value);
    void WriteLine6(float value);
    void WriteLine7(int value);
    void WriteLine8(int64_t value);
    void WriteLine9(uObject* value);
    void WriteLine10(uString* value);
    void WriteLine11(uString* format, uArray* args);
    void WriteLine12(uint32_t value);
    void WriteLine13(uint64_t value);
    static void Close(TextWriter* __this) { TextWriter__Close_fn(__this); }
    static void Dispose1(TextWriter* __this, bool disposing) { TextWriter__Dispose1_fn(__this, &disposing); }
    static void Flush(TextWriter* __this) { TextWriter__Flush_fn(__this); }
    static void Write1(TextWriter* __this, uChar value) { TextWriter__Write1_fn(__this, &value); }
    static void Write3(TextWriter* __this, uArray* buffer, int index, int count) { TextWriter__Write3_fn(__this, buffer, &index, &count); }
    static void Write9(TextWriter* __this, uString* value) { TextWriter__Write9_fn(__this, value); }
};
// }

}}} // ::g::Uno::IO
