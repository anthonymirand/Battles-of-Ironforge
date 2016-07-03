#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Math.BigInteger
struct BigInteger_t1_96;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1_99;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C" void BigInteger__ctor_m1_1183 (BigInteger_t1_96 * __this, int32_t ___sign, uint32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C" void BigInteger__ctor_m1_1184 (BigInteger_t1_96 * __this, BigInteger_t1_96 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C" void BigInteger__ctor_m1_1185 (BigInteger_t1_96 * __this, BigInteger_t1_96 * ___bi, uint32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C" void BigInteger__ctor_m1_1186 (BigInteger_t1_96 * __this, ByteU5BU5D_t1_72* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C" void BigInteger__ctor_m1_1187 (BigInteger_t1_96 * __this, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C" void BigInteger__cctor_m1_1188 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C" RandomNumberGenerator_t1_99 * BigInteger_get_Rng_m1_1189 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C" BigInteger_t1_96 * BigInteger_GenerateRandom_m1_1190 (Object_t * __this /* static, unused */, int32_t ___bits, RandomNumberGenerator_t1_99 * ___rng, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C" BigInteger_t1_96 * BigInteger_GenerateRandom_m1_1191 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize(System.Security.Cryptography.RandomNumberGenerator)
extern "C" void BigInteger_Randomize_m1_1192 (BigInteger_t1_96 * __this, RandomNumberGenerator_t1_99 * ___rng, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize()
extern "C" void BigInteger_Randomize_m1_1193 (BigInteger_t1_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C" int32_t BigInteger_BitCount_m1_1194 (BigInteger_t1_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
extern "C" bool BigInteger_TestBit_m1_1195 (BigInteger_t1_96 * __this, uint32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C" bool BigInteger_TestBit_m1_1196 (BigInteger_t1_96 * __this, int32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C" void BigInteger_SetBit_m1_1197 (BigInteger_t1_96 * __this, uint32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C" void BigInteger_SetBit_m1_1198 (BigInteger_t1_96 * __this, uint32_t ___bitNum, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C" int32_t BigInteger_LowestSetBit_m1_1199 (BigInteger_t1_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C" ByteU5BU5D_t1_72* BigInteger_GetBytes_m1_1200 (BigInteger_t1_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C" String_t* BigInteger_ToString_m1_1201 (BigInteger_t1_96 * __this, uint32_t ___radix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C" String_t* BigInteger_ToString_m1_1202 (BigInteger_t1_96 * __this, uint32_t ___radix, String_t* ___characterSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C" void BigInteger_Normalize_m1_1203 (BigInteger_t1_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C" void BigInteger_Clear_m1_1204 (BigInteger_t1_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C" int32_t BigInteger_GetHashCode_m1_1205 (BigInteger_t1_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C" String_t* BigInteger_ToString_m1_1206 (BigInteger_t1_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C" bool BigInteger_Equals_m1_1207 (BigInteger_t1_96 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C" BigInteger_t1_96 * BigInteger_ModInverse_m1_1208 (BigInteger_t1_96 * __this, BigInteger_t1_96 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_96 * BigInteger_ModPow_m1_1209 (BigInteger_t1_96 * __this, BigInteger_t1_96 * ___exp, BigInteger_t1_96 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::IsProbablePrime()
extern "C" bool BigInteger_IsProbablePrime_m1_1210 (BigInteger_t1_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C" BigInteger_t1_96 * BigInteger_GeneratePseudoPrime_m1_1211 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C" void BigInteger_Incr2_m1_1212 (BigInteger_t1_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C" BigInteger_t1_96 * BigInteger_op_Implicit_m1_1213 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C" BigInteger_t1_96 * BigInteger_op_Implicit_m1_1214 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_96 * BigInteger_op_Addition_m1_1215 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_96 * BigInteger_op_Subtraction_m1_1216 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t BigInteger_op_Modulus_m1_1217 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_96 * BigInteger_op_Modulus_m1_1218 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_96 * BigInteger_op_Division_m1_1219 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_96 * BigInteger_op_Multiply_m1_1220 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1_96 * BigInteger_op_Multiply_m1_1221 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1_96 * BigInteger_op_LeftShift_m1_1222 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1_96 * BigInteger_op_RightShift_m1_1223 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C" bool BigInteger_op_Equality_m1_1224 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C" bool BigInteger_op_Inequality_m1_1225 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_Equality_m1_1226 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_Inequality_m1_1227 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_GreaterThan_m1_1228 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_LessThan_m1_1229 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_GreaterThanOrEqual_m1_1230 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_LessThanOrEqual_m1_1231 (Object_t * __this /* static, unused */, BigInteger_t1_96 * ___bi1, BigInteger_t1_96 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
