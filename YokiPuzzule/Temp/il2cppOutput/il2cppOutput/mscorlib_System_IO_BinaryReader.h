﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t1052;
// System.Text.Encoding
struct Encoding_t712;
// System.Byte[]
struct ByteU5BU5D_t581;
// System.Text.Decoder
struct Decoder_t1270;
// System.Char[]
struct CharU5BU5D_t34;

#include "mscorlib_System_Object.h"

// System.IO.BinaryReader
struct  BinaryReader_t1269  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1052 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t712 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t581* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t1270 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t34* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;
};
