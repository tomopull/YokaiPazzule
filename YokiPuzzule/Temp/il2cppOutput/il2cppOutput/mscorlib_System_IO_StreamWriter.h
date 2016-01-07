#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t712;
// System.IO.Stream
struct Stream_t1052;
// System.Byte[]
struct ByteU5BU5D_t581;
// System.Char[]
struct CharU5BU5D_t34;
// System.IO.StreamWriter
struct StreamWriter_t1296;

#include "mscorlib_System_IO_TextWriter.h"

// System.IO.StreamWriter
struct  StreamWriter_t1296  : public TextWriter_t72
{
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t712 * ___internalEncoding_3;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t1052 * ___internalStream_4;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_5;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t581* ___byte_buf_6;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_7;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t34* ___decode_buf_8;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_9;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_10;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_11;
};
struct StreamWriter_t1296_StaticFields{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1296 * ___Null_12;
};
