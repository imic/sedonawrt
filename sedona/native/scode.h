//
// Copyright (c) 2007 Tridium, Inc.
// Licensed under the Academic Free License version 3.0
//
// History:
//   5 Mar 07  Brian Frank  Creation
//
// NOTE: this file is auto-generated by SCodeGen!!!
//

#ifndef __SCODE_H
#define __SCODE_H

//////////////////////////////////////////////////////////////////////////
// Opcodes
//////////////////////////////////////////////////////////////////////////

#ifndef COMPUTED_GOTO


// literals
#define Nop                 0
#define LoadIM1             1
#define LoadI0              2
#define LoadI1              3
#define LoadI2              4
#define LoadI3              5
#define LoadI4              6
#define LoadI5              7
#define LoadIntU1           8
#define LoadIntU2           9
#define LoadL0              10
#define LoadL1              11
#define LoadF0              12
#define LoadF1              13
#define LoadD0              14
#define LoadD1              15
#define LoadNull            16
#define LoadNullBool        17
#define LoadNullFloat       18
#define LoadNullDouble      19
#define LoadInt             20
#define LoadFloat           21
#define LoadLong            22
#define LoadDouble          23
#define LoadStr             24
#define LoadBuf             25
#define LoadType            26
#define LoadSlot            27
#define LoadDefine          28

// load params
#define LoadParam0          29
#define LoadParam1          30
#define LoadParam2          31
#define LoadParam3          32
#define LoadParam           33
#define LoadParamWide       34

// store params
#define StoreParam          35
#define StoreParamWide      36

// load locals
#define LoadLocal0          37
#define LoadLocal1          38
#define LoadLocal2          39
#define LoadLocal3          40
#define LoadLocal4          41
#define LoadLocal5          42
#define LoadLocal6          43
#define LoadLocal7          44
#define LoadLocal           45
#define LoadLocalWide       46

// store locals
#define StoreLocal0         47
#define StoreLocal1         48
#define StoreLocal2         49
#define StoreLocal3         50
#define StoreLocal4         51
#define StoreLocal5         52
#define StoreLocal6         53
#define StoreLocal7         54
#define StoreLocal          55
#define StoreLocalWide      56

// int compare
#define IntEq               57
#define IntNotEq            58
#define IntGt               59
#define IntGtEq             60
#define IntLt               61
#define IntLtEq             62

// int math
#define IntMul              63
#define IntDiv              64
#define IntMod              65
#define IntAdd              66
#define IntSub              67
#define IntOr               68
#define IntXor              69
#define IntAnd              70
#define IntNot              71
#define IntNeg              72
#define IntShiftL           73
#define IntShiftR           74
#define IntInc              75
#define IntDec              76

// long compare
#define LongEq              77
#define LongNotEq           78
#define LongGt              79
#define LongGtEq            80
#define LongLt              81
#define LongLtEq            82

// long math
#define LongMul             83
#define LongDiv             84
#define LongMod             85
#define LongAdd             86
#define LongSub             87
#define LongOr              88
#define LongXor             89
#define LongAnd             90
#define LongNot             91
#define LongNeg             92
#define LongShiftL          93
#define LongShiftR          94

// float compare
#define FloatEq             95
#define FloatNotEq          96
#define FloatGt             97
#define FloatGtEq           98
#define FloatLt             99
#define FloatLtEq           100

// float math
#define FloatMul            101
#define FloatDiv            102
#define FloatAdd            103
#define FloatSub            104
#define FloatNeg            105

// double compare
#define DoubleEq            106
#define DoubleNotEq         107
#define DoubleGt            108
#define DoubleGtEq          109
#define DoubleLt            110
#define DoubleLtEq          111

// double math
#define DoubleMul           112
#define DoubleDiv           113
#define DoubleAdd           114
#define DoubleSub           115
#define DoubleNeg           116

// casts
#define IntToFloat          117
#define IntToLong           118
#define IntToDouble         119
#define LongToInt           120
#define LongToFloat         121
#define LongToDouble        122
#define FloatToInt          123
#define FloatToLong         124
#define FloatToDouble       125
#define DoubleToInt         126
#define DoubleToLong        127
#define DoubleToFloat       128

// object compare
#define ObjEq               129
#define ObjNotEq            130

// general purpose compare
#define EqZero              131
#define NotEqZero           132

// stack manipulation
#define Pop                 133
#define Pop2                134
#define Pop3                135
#define Dup                 136
#define Dup2                137
#define DupDown2            138
#define DupDown3            139
#define Dup2Down2           140
#define Dup2Down3           141

// branching
#define Jump                142
#define JumpNonZero         143
#define JumpZero            144
#define Foreach             145
#define JumpFar             146
#define JumpFarNonZero      147
#define JumpFarZero         148
#define ForeachFar          149

// int compare branching
#define JumpIntEq           150
#define JumpIntNotEq        151
#define JumpIntGt           152
#define JumpIntGtEq         153
#define JumpIntLt           154
#define JumpIntLtEq         155
#define JumpFarIntEq        156
#define JumpFarIntNotEq     157
#define JumpFarIntGt        158
#define JumpFarIntGtEq      159
#define JumpFarIntLt        160
#define JumpFarIntLtEq      161

// storage
#define LoadDataAddr        162

// 8 bit storage (bytes, bools)
#define Load8BitFieldU1     163
#define Load8BitFieldU2     164
#define Load8BitFieldU4     165
#define Load8BitArray       166
#define Store8BitFieldU1    167
#define Store8BitFieldU2    168
#define Store8BitFieldU4    169
#define Store8BitArray      170
#define Add8BitArray        171

// 16 bit storage (shorts)
#define Load16BitFieldU1    172
#define Load16BitFieldU2    173
#define Load16BitFieldU4    174
#define Load16BitArray      175
#define Store16BitFieldU1   176
#define Store16BitFieldU2   177
#define Store16BitFieldU4   178
#define Store16BitArray     179
#define Add16BitArray       180

// 32 bit storage (int/float)
#define Load32BitFieldU1    181
#define Load32BitFieldU2    182
#define Load32BitFieldU4    183
#define Load32BitArray      184
#define Store32BitFieldU1   185
#define Store32BitFieldU2   186
#define Store32BitFieldU4   187
#define Store32BitArray     188
#define Add32BitArray       189

// 64 bit storage (long/double)
#define Load64BitFieldU1    190
#define Load64BitFieldU2    191
#define Load64BitFieldU4    192
#define Load64BitArray      193
#define Store64BitFieldU1   194
#define Store64BitFieldU2   195
#define Store64BitFieldU4   196
#define Store64BitArray     197
#define Add64BitArray       198

// ref storage (pointers - variable width)
#define LoadRefFieldU1      199
#define LoadRefFieldU2      200
#define LoadRefFieldU4      201
#define LoadRefArray        202
#define StoreRefFieldU1     203
#define StoreRefFieldU2     204
#define StoreRefFieldU4     205
#define StoreRefArray       206
#define AddRefArray         207

// const storage (block index)
#define LoadConstFieldU1    208
#define LoadConstFieldU2    209
#define LoadConstStatic     210
#define LoadConstArray      211

// inline storage (pointer addition)
#define LoadInlineFieldU1   212
#define LoadInlineFieldU2   213
#define LoadInlineFieldU4   214

// param0 + inline storage
#define LoadParam0InlineFieldU1  215
#define LoadParam0InlineFieldU2  216
#define LoadParam0InlineFieldU4  217

// static + inline storage
#define LoadDataInlineFieldU1  218
#define LoadDataInlineFieldU2  219
#define LoadDataInlineFieldU4  220

// call control
#define Call                221
#define CallVirtual         222
#define CallNative          223
#define CallNativeWide      224
#define CallNativeVoid      225
#define ReturnVoid          226
#define ReturnPop           227
#define ReturnPopWide       228
#define LoadParam0Call      229

// misc
#define InitArray           230
#define InitVirt            231
#define InitComp            232
#define SizeOf              233
#define Assert              234
#define Switch              235
#define MetaSlot            236
#define Cast                237
#define LoadArrayLiteral    238

#define NumOpcodes          239

#endif

//////////////////////////////////////////////////////////////////////////
// Opcodes Labels (computed goto)
//////////////////////////////////////////////////////////////////////////

#define OpcodeLabelsArray \
{ \
&&Nop, \
&&LoadIM1, \
&&LoadI0, \
&&LoadI1, \
&&LoadI2, \
&&LoadI3, \
&&LoadI4, \
&&LoadI5, \
&&LoadIntU1, \
&&LoadIntU2, \
&&LoadL0, \
&&LoadL1, \
&&LoadF0, \
&&LoadF1, \
&&LoadD0, \
&&LoadD1, \
&&LoadNull, \
&&LoadNullBool, \
&&LoadNullFloat, \
&&LoadNullDouble, \
&&LoadInt, \
&&LoadFloat, \
&&LoadLong, \
&&LoadDouble, \
&&LoadStr, \
&&LoadBuf, \
&&LoadType, \
&&LoadSlot, \
&&LoadDefine, \
&&LoadParam0, \
&&LoadParam1, \
&&LoadParam2, \
&&LoadParam3, \
&&LoadParam, \
&&LoadParamWide, \
&&StoreParam, \
&&StoreParamWide, \
&&LoadLocal0, \
&&LoadLocal1, \
&&LoadLocal2, \
&&LoadLocal3, \
&&LoadLocal4, \
&&LoadLocal5, \
&&LoadLocal6, \
&&LoadLocal7, \
&&LoadLocal, \
&&LoadLocalWide, \
&&StoreLocal0, \
&&StoreLocal1, \
&&StoreLocal2, \
&&StoreLocal3, \
&&StoreLocal4, \
&&StoreLocal5, \
&&StoreLocal6, \
&&StoreLocal7, \
&&StoreLocal, \
&&StoreLocalWide, \
&&IntEq, \
&&IntNotEq, \
&&IntGt, \
&&IntGtEq, \
&&IntLt, \
&&IntLtEq, \
&&IntMul, \
&&IntDiv, \
&&IntMod, \
&&IntAdd, \
&&IntSub, \
&&IntOr, \
&&IntXor, \
&&IntAnd, \
&&IntNot, \
&&IntNeg, \
&&IntShiftL, \
&&IntShiftR, \
&&IntInc, \
&&IntDec, \
&&LongEq, \
&&LongNotEq, \
&&LongGt, \
&&LongGtEq, \
&&LongLt, \
&&LongLtEq, \
&&LongMul, \
&&LongDiv, \
&&LongMod, \
&&LongAdd, \
&&LongSub, \
&&LongOr, \
&&LongXor, \
&&LongAnd, \
&&LongNot, \
&&LongNeg, \
&&LongShiftL, \
&&LongShiftR, \
&&FloatEq, \
&&FloatNotEq, \
&&FloatGt, \
&&FloatGtEq, \
&&FloatLt, \
&&FloatLtEq, \
&&FloatMul, \
&&FloatDiv, \
&&FloatAdd, \
&&FloatSub, \
&&FloatNeg, \
&&DoubleEq, \
&&DoubleNotEq, \
&&DoubleGt, \
&&DoubleGtEq, \
&&DoubleLt, \
&&DoubleLtEq, \
&&DoubleMul, \
&&DoubleDiv, \
&&DoubleAdd, \
&&DoubleSub, \
&&DoubleNeg, \
&&IntToFloat, \
&&IntToLong, \
&&IntToDouble, \
&&LongToInt, \
&&LongToFloat, \
&&LongToDouble, \
&&FloatToInt, \
&&FloatToLong, \
&&FloatToDouble, \
&&DoubleToInt, \
&&DoubleToLong, \
&&DoubleToFloat, \
&&ObjEq, \
&&ObjNotEq, \
&&EqZero, \
&&NotEqZero, \
&&Pop, \
&&Pop2, \
&&Pop3, \
&&Dup, \
&&Dup2, \
&&DupDown2, \
&&DupDown3, \
&&Dup2Down2, \
&&Dup2Down3, \
&&Jump, \
&&JumpNonZero, \
&&JumpZero, \
&&Foreach, \
&&JumpFar, \
&&JumpFarNonZero, \
&&JumpFarZero, \
&&ForeachFar, \
&&JumpIntEq, \
&&JumpIntNotEq, \
&&JumpIntGt, \
&&JumpIntGtEq, \
&&JumpIntLt, \
&&JumpIntLtEq, \
&&JumpFarIntEq, \
&&JumpFarIntNotEq, \
&&JumpFarIntGt, \
&&JumpFarIntGtEq, \
&&JumpFarIntLt, \
&&JumpFarIntLtEq, \
&&LoadDataAddr, \
&&Load8BitFieldU1, \
&&Load8BitFieldU2, \
&&Load8BitFieldU4, \
&&Load8BitArray, \
&&Store8BitFieldU1, \
&&Store8BitFieldU2, \
&&Store8BitFieldU4, \
&&Store8BitArray, \
&&Add8BitArray, \
&&Load16BitFieldU1, \
&&Load16BitFieldU2, \
&&Load16BitFieldU4, \
&&Load16BitArray, \
&&Store16BitFieldU1, \
&&Store16BitFieldU2, \
&&Store16BitFieldU4, \
&&Store16BitArray, \
&&Add16BitArray, \
&&Load32BitFieldU1, \
&&Load32BitFieldU2, \
&&Load32BitFieldU4, \
&&Load32BitArray, \
&&Store32BitFieldU1, \
&&Store32BitFieldU2, \
&&Store32BitFieldU4, \
&&Store32BitArray, \
&&Add32BitArray, \
&&Load64BitFieldU1, \
&&Load64BitFieldU2, \
&&Load64BitFieldU4, \
&&Load64BitArray, \
&&Store64BitFieldU1, \
&&Store64BitFieldU2, \
&&Store64BitFieldU4, \
&&Store64BitArray, \
&&Add64BitArray, \
&&LoadRefFieldU1, \
&&LoadRefFieldU2, \
&&LoadRefFieldU4, \
&&LoadRefArray, \
&&StoreRefFieldU1, \
&&StoreRefFieldU2, \
&&StoreRefFieldU4, \
&&StoreRefArray, \
&&AddRefArray, \
&&LoadConstFieldU1, \
&&LoadConstFieldU2, \
&&LoadConstStatic, \
&&LoadConstArray, \
&&LoadInlineFieldU1, \
&&LoadInlineFieldU2, \
&&LoadInlineFieldU4, \
&&LoadParam0InlineFieldU1, \
&&LoadParam0InlineFieldU2, \
&&LoadParam0InlineFieldU4, \
&&LoadDataInlineFieldU1, \
&&LoadDataInlineFieldU2, \
&&LoadDataInlineFieldU4, \
&&Call, \
&&CallVirtual, \
&&CallNative, \
&&CallNativeWide, \
&&CallNativeVoid, \
&&ReturnVoid, \
&&ReturnPop, \
&&ReturnPopWide, \
&&LoadParam0Call, \
&&InitArray, \
&&InitVirt, \
&&InitComp, \
&&SizeOf, \
&&Assert, \
&&Switch, \
&&MetaSlot, \
&&Cast, \
&&LoadArrayLiteral, \
}

//////////////////////////////////////////////////////////////////////////
// Debug
//////////////////////////////////////////////////////////////////////////

#ifdef SCODE_DEBUG

// OpCodes by name
const char* OpcodeNames[] =
{
  "Nop",                // 0
  "LoadIM1",            // 1
  "LoadI0",             // 2
  "LoadI1",             // 3
  "LoadI2",             // 4
  "LoadI3",             // 5
  "LoadI4",             // 6
  "LoadI5",             // 7
  "LoadIntU1",          // 8
  "LoadIntU2",          // 9
  "LoadL0",             // 10
  "LoadL1",             // 11
  "LoadF0",             // 12
  "LoadF1",             // 13
  "LoadD0",             // 14
  "LoadD1",             // 15
  "LoadNull",           // 16
  "LoadNullBool",       // 17
  "LoadNullFloat",      // 18
  "LoadNullDouble",     // 19
  "LoadInt",            // 20
  "LoadFloat",          // 21
  "LoadLong",           // 22
  "LoadDouble",         // 23
  "LoadStr",            // 24
  "LoadBuf",            // 25
  "LoadType",           // 26
  "LoadSlot",           // 27
  "LoadDefine",         // 28
  "LoadParam0",         // 29
  "LoadParam1",         // 30
  "LoadParam2",         // 31
  "LoadParam3",         // 32
  "LoadParam",          // 33
  "LoadParamWide",      // 34
  "StoreParam",         // 35
  "StoreParamWide",     // 36
  "LoadLocal0",         // 37
  "LoadLocal1",         // 38
  "LoadLocal2",         // 39
  "LoadLocal3",         // 40
  "LoadLocal4",         // 41
  "LoadLocal5",         // 42
  "LoadLocal6",         // 43
  "LoadLocal7",         // 44
  "LoadLocal",          // 45
  "LoadLocalWide",      // 46
  "StoreLocal0",        // 47
  "StoreLocal1",        // 48
  "StoreLocal2",        // 49
  "StoreLocal3",        // 50
  "StoreLocal4",        // 51
  "StoreLocal5",        // 52
  "StoreLocal6",        // 53
  "StoreLocal7",        // 54
  "StoreLocal",         // 55
  "StoreLocalWide",     // 56
  "IntEq",              // 57
  "IntNotEq",           // 58
  "IntGt",              // 59
  "IntGtEq",            // 60
  "IntLt",              // 61
  "IntLtEq",            // 62
  "IntMul",             // 63
  "IntDiv",             // 64
  "IntMod",             // 65
  "IntAdd",             // 66
  "IntSub",             // 67
  "IntOr",              // 68
  "IntXor",             // 69
  "IntAnd",             // 70
  "IntNot",             // 71
  "IntNeg",             // 72
  "IntShiftL",          // 73
  "IntShiftR",          // 74
  "IntInc",             // 75
  "IntDec",             // 76
  "LongEq",             // 77
  "LongNotEq",          // 78
  "LongGt",             // 79
  "LongGtEq",           // 80
  "LongLt",             // 81
  "LongLtEq",           // 82
  "LongMul",            // 83
  "LongDiv",            // 84
  "LongMod",            // 85
  "LongAdd",            // 86
  "LongSub",            // 87
  "LongOr",             // 88
  "LongXor",            // 89
  "LongAnd",            // 90
  "LongNot",            // 91
  "LongNeg",            // 92
  "LongShiftL",         // 93
  "LongShiftR",         // 94
  "FloatEq",            // 95
  "FloatNotEq",         // 96
  "FloatGt",            // 97
  "FloatGtEq",          // 98
  "FloatLt",            // 99
  "FloatLtEq",          // 100
  "FloatMul",           // 101
  "FloatDiv",           // 102
  "FloatAdd",           // 103
  "FloatSub",           // 104
  "FloatNeg",           // 105
  "DoubleEq",           // 106
  "DoubleNotEq",        // 107
  "DoubleGt",           // 108
  "DoubleGtEq",         // 109
  "DoubleLt",           // 110
  "DoubleLtEq",         // 111
  "DoubleMul",          // 112
  "DoubleDiv",          // 113
  "DoubleAdd",          // 114
  "DoubleSub",          // 115
  "DoubleNeg",          // 116
  "IntToFloat",         // 117
  "IntToLong",          // 118
  "IntToDouble",        // 119
  "LongToInt",          // 120
  "LongToFloat",        // 121
  "LongToDouble",       // 122
  "FloatToInt",         // 123
  "FloatToLong",        // 124
  "FloatToDouble",      // 125
  "DoubleToInt",        // 126
  "DoubleToLong",       // 127
  "DoubleToFloat",      // 128
  "ObjEq",              // 129
  "ObjNotEq",           // 130
  "EqZero",             // 131
  "NotEqZero",          // 132
  "Pop",                // 133
  "Pop2",               // 134
  "Pop3",               // 135
  "Dup",                // 136
  "Dup2",               // 137
  "DupDown2",           // 138
  "DupDown3",           // 139
  "Dup2Down2",          // 140
  "Dup2Down3",          // 141
  "Jump",               // 142
  "JumpNonZero",        // 143
  "JumpZero",           // 144
  "Foreach",            // 145
  "JumpFar",            // 146
  "JumpFarNonZero",     // 147
  "JumpFarZero",        // 148
  "ForeachFar",         // 149
  "JumpIntEq",          // 150
  "JumpIntNotEq",       // 151
  "JumpIntGt",          // 152
  "JumpIntGtEq",        // 153
  "JumpIntLt",          // 154
  "JumpIntLtEq",        // 155
  "JumpFarIntEq",       // 156
  "JumpFarIntNotEq",    // 157
  "JumpFarIntGt",       // 158
  "JumpFarIntGtEq",     // 159
  "JumpFarIntLt",       // 160
  "JumpFarIntLtEq",     // 161
  "LoadDataAddr",       // 162
  "Load8BitFieldU1",    // 163
  "Load8BitFieldU2",    // 164
  "Load8BitFieldU4",    // 165
  "Load8BitArray",      // 166
  "Store8BitFieldU1",   // 167
  "Store8BitFieldU2",   // 168
  "Store8BitFieldU4",   // 169
  "Store8BitArray",     // 170
  "Add8BitArray",       // 171
  "Load16BitFieldU1",   // 172
  "Load16BitFieldU2",   // 173
  "Load16BitFieldU4",   // 174
  "Load16BitArray",     // 175
  "Store16BitFieldU1",  // 176
  "Store16BitFieldU2",  // 177
  "Store16BitFieldU4",  // 178
  "Store16BitArray",    // 179
  "Add16BitArray",      // 180
  "Load32BitFieldU1",   // 181
  "Load32BitFieldU2",   // 182
  "Load32BitFieldU4",   // 183
  "Load32BitArray",     // 184
  "Store32BitFieldU1",  // 185
  "Store32BitFieldU2",  // 186
  "Store32BitFieldU4",  // 187
  "Store32BitArray",    // 188
  "Add32BitArray",      // 189
  "Load64BitFieldU1",   // 190
  "Load64BitFieldU2",   // 191
  "Load64BitFieldU4",   // 192
  "Load64BitArray",     // 193
  "Store64BitFieldU1",  // 194
  "Store64BitFieldU2",  // 195
  "Store64BitFieldU4",  // 196
  "Store64BitArray",    // 197
  "Add64BitArray",      // 198
  "LoadRefFieldU1",     // 199
  "LoadRefFieldU2",     // 200
  "LoadRefFieldU4",     // 201
  "LoadRefArray",       // 202
  "StoreRefFieldU1",    // 203
  "StoreRefFieldU2",    // 204
  "StoreRefFieldU4",    // 205
  "StoreRefArray",      // 206
  "AddRefArray",        // 207
  "LoadConstFieldU1",   // 208
  "LoadConstFieldU2",   // 209
  "LoadConstStatic",    // 210
  "LoadConstArray",     // 211
  "LoadInlineFieldU1",  // 212
  "LoadInlineFieldU2",  // 213
  "LoadInlineFieldU4",  // 214
  "LoadParam0InlineFieldU1", // 215
  "LoadParam0InlineFieldU2", // 216
  "LoadParam0InlineFieldU4", // 217
  "LoadDataInlineFieldU1", // 218
  "LoadDataInlineFieldU2", // 219
  "LoadDataInlineFieldU4", // 220
  "Call",               // 221
  "CallVirtual",        // 222
  "CallNative",         // 223
  "CallNativeWide",     // 224
  "CallNativeVoid",     // 225
  "ReturnVoid",         // 226
  "ReturnPop",          // 227
  "ReturnPopWide",      // 228
  "LoadParam0Call",     // 229
  "InitArray",          // 230
  "InitVirt",           // 231
  "InitComp",           // 232
  "SizeOf",             // 233
  "Assert",             // 234
  "Switch",             // 235
  "MetaSlot",           // 236
  "Cast",               // 237
  "LoadArrayLiteral",   // 238
};

// pointer offset used for null pointer check
const int8_t OpcodePointerOffsets[] =
{
   -1,   // 0 Nop
   -1,   // 1 LoadIM1
   -1,   // 2 LoadI0
   -1,   // 3 LoadI1
   -1,   // 4 LoadI2
   -1,   // 5 LoadI3
   -1,   // 6 LoadI4
   -1,   // 7 LoadI5
   -1,   // 8 LoadIntU1
   -1,   // 9 LoadIntU2
   -1,   // 10 LoadL0
   -1,   // 11 LoadL1
   -1,   // 12 LoadF0
   -1,   // 13 LoadF1
   -1,   // 14 LoadD0
   -1,   // 15 LoadD1
   -1,   // 16 LoadNull
   -1,   // 17 LoadNullBool
   -1,   // 18 LoadNullFloat
   -1,   // 19 LoadNullDouble
   -1,   // 20 LoadInt
   -1,   // 21 LoadFloat
   -1,   // 22 LoadLong
   -1,   // 23 LoadDouble
   -1,   // 24 LoadStr
   -1,   // 25 LoadBuf
   -1,   // 26 LoadType
   -1,   // 27 LoadSlot
   -1,   // 28 LoadDefine
   -1,   // 29 LoadParam0
   -1,   // 30 LoadParam1
   -1,   // 31 LoadParam2
   -1,   // 32 LoadParam3
   -1,   // 33 LoadParam
   -1,   // 34 LoadParamWide
   -1,   // 35 StoreParam
   -1,   // 36 StoreParamWide
   -1,   // 37 LoadLocal0
   -1,   // 38 LoadLocal1
   -1,   // 39 LoadLocal2
   -1,   // 40 LoadLocal3
   -1,   // 41 LoadLocal4
   -1,   // 42 LoadLocal5
   -1,   // 43 LoadLocal6
   -1,   // 44 LoadLocal7
   -1,   // 45 LoadLocal
   -1,   // 46 LoadLocalWide
   -1,   // 47 StoreLocal0
   -1,   // 48 StoreLocal1
   -1,   // 49 StoreLocal2
   -1,   // 50 StoreLocal3
   -1,   // 51 StoreLocal4
   -1,   // 52 StoreLocal5
   -1,   // 53 StoreLocal6
   -1,   // 54 StoreLocal7
   -1,   // 55 StoreLocal
   -1,   // 56 StoreLocalWide
   -1,   // 57 IntEq
   -1,   // 58 IntNotEq
   -1,   // 59 IntGt
   -1,   // 60 IntGtEq
   -1,   // 61 IntLt
   -1,   // 62 IntLtEq
   -1,   // 63 IntMul
   -1,   // 64 IntDiv
   -1,   // 65 IntMod
   -1,   // 66 IntAdd
   -1,   // 67 IntSub
   -1,   // 68 IntOr
   -1,   // 69 IntXor
   -1,   // 70 IntAnd
   -1,   // 71 IntNot
   -1,   // 72 IntNeg
   -1,   // 73 IntShiftL
   -1,   // 74 IntShiftR
   -1,   // 75 IntInc
   -1,   // 76 IntDec
   -1,   // 77 LongEq
   -1,   // 78 LongNotEq
   -1,   // 79 LongGt
   -1,   // 80 LongGtEq
   -1,   // 81 LongLt
   -1,   // 82 LongLtEq
   -1,   // 83 LongMul
   -1,   // 84 LongDiv
   -1,   // 85 LongMod
   -1,   // 86 LongAdd
   -1,   // 87 LongSub
   -1,   // 88 LongOr
   -1,   // 89 LongXor
   -1,   // 90 LongAnd
   -1,   // 91 LongNot
   -1,   // 92 LongNeg
   -1,   // 93 LongShiftL
   -1,   // 94 LongShiftR
   -1,   // 95 FloatEq
   -1,   // 96 FloatNotEq
   -1,   // 97 FloatGt
   -1,   // 98 FloatGtEq
   -1,   // 99 FloatLt
   -1,   // 100 FloatLtEq
   -1,   // 101 FloatMul
   -1,   // 102 FloatDiv
   -1,   // 103 FloatAdd
   -1,   // 104 FloatSub
   -1,   // 105 FloatNeg
   -1,   // 106 DoubleEq
   -1,   // 107 DoubleNotEq
   -1,   // 108 DoubleGt
   -1,   // 109 DoubleGtEq
   -1,   // 110 DoubleLt
   -1,   // 111 DoubleLtEq
   -1,   // 112 DoubleMul
   -1,   // 113 DoubleDiv
   -1,   // 114 DoubleAdd
   -1,   // 115 DoubleSub
   -1,   // 116 DoubleNeg
   -1,   // 117 IntToFloat
   -1,   // 118 IntToLong
   -1,   // 119 IntToDouble
   -1,   // 120 LongToInt
   -1,   // 121 LongToFloat
   -1,   // 122 LongToDouble
   -1,   // 123 FloatToInt
   -1,   // 124 FloatToLong
   -1,   // 125 FloatToDouble
   -1,   // 126 DoubleToInt
   -1,   // 127 DoubleToLong
   -1,   // 128 DoubleToFloat
   -1,   // 129 ObjEq
   -1,   // 130 ObjNotEq
   -1,   // 131 EqZero
   -1,   // 132 NotEqZero
   -1,   // 133 Pop
   -1,   // 134 Pop2
   -1,   // 135 Pop3
   -1,   // 136 Dup
   -1,   // 137 Dup2
   -1,   // 138 DupDown2
   -1,   // 139 DupDown3
   -1,   // 140 Dup2Down2
   -1,   // 141 Dup2Down3
   -1,   // 142 Jump
   -1,   // 143 JumpNonZero
   -1,   // 144 JumpZero
   -1,   // 145 Foreach
   -1,   // 146 JumpFar
   -1,   // 147 JumpFarNonZero
   -1,   // 148 JumpFarZero
   -1,   // 149 ForeachFar
   -1,   // 150 JumpIntEq
   -1,   // 151 JumpIntNotEq
   -1,   // 152 JumpIntGt
   -1,   // 153 JumpIntGtEq
   -1,   // 154 JumpIntLt
   -1,   // 155 JumpIntLtEq
   -1,   // 156 JumpFarIntEq
   -1,   // 157 JumpFarIntNotEq
   -1,   // 158 JumpFarIntGt
   -1,   // 159 JumpFarIntGtEq
   -1,   // 160 JumpFarIntLt
   -1,   // 161 JumpFarIntLtEq
   -1,   // 162 LoadDataAddr
    0,   // 163 Load8BitFieldU1
    0,   // 164 Load8BitFieldU2
    0,   // 165 Load8BitFieldU4
    1,   // 166 Load8BitArray
    1,   // 167 Store8BitFieldU1
    1,   // 168 Store8BitFieldU2
    1,   // 169 Store8BitFieldU4
    2,   // 170 Store8BitArray
    1,   // 171 Add8BitArray
    0,   // 172 Load16BitFieldU1
    0,   // 173 Load16BitFieldU2
    0,   // 174 Load16BitFieldU4
    1,   // 175 Load16BitArray
    1,   // 176 Store16BitFieldU1
    1,   // 177 Store16BitFieldU2
    1,   // 178 Store16BitFieldU4
    2,   // 179 Store16BitArray
    1,   // 180 Add16BitArray
    0,   // 181 Load32BitFieldU1
    0,   // 182 Load32BitFieldU2
    0,   // 183 Load32BitFieldU4
    1,   // 184 Load32BitArray
    1,   // 185 Store32BitFieldU1
    1,   // 186 Store32BitFieldU2
    1,   // 187 Store32BitFieldU4
    2,   // 188 Store32BitArray
    1,   // 189 Add32BitArray
    0,   // 190 Load64BitFieldU1
    0,   // 191 Load64BitFieldU2
    0,   // 192 Load64BitFieldU4
    1,   // 193 Load64BitArray
    2,   // 194 Store64BitFieldU1
    2,   // 195 Store64BitFieldU2
    2,   // 196 Store64BitFieldU4
    3,   // 197 Store64BitArray
    1,   // 198 Add64BitArray
    0,   // 199 LoadRefFieldU1
    0,   // 200 LoadRefFieldU2
    0,   // 201 LoadRefFieldU4
    1,   // 202 LoadRefArray
    1,   // 203 StoreRefFieldU1
    1,   // 204 StoreRefFieldU2
    1,   // 205 StoreRefFieldU4
    2,   // 206 StoreRefArray
    1,   // 207 AddRefArray
    0,   // 208 LoadConstFieldU1
    0,   // 209 LoadConstFieldU2
   -1,   // 210 LoadConstStatic
    1,   // 211 LoadConstArray
    0,   // 212 LoadInlineFieldU1
    0,   // 213 LoadInlineFieldU2
    0,   // 214 LoadInlineFieldU4
   -1,   // 215 LoadParam0InlineFieldU1
   -1,   // 216 LoadParam0InlineFieldU2
   -1,   // 217 LoadParam0InlineFieldU4
   -1,   // 218 LoadDataInlineFieldU1
   -1,   // 219 LoadDataInlineFieldU2
   -1,   // 220 LoadDataInlineFieldU4
   -1,   // 221 Call
   -1,   // 222 CallVirtual
   -1,   // 223 CallNative
   -1,   // 224 CallNativeWide
   -1,   // 225 CallNativeVoid
   -1,   // 226 ReturnVoid
   -1,   // 227 ReturnPop
   -1,   // 228 ReturnPopWide
   -1,   // 229 LoadParam0Call
   -1,   // 230 InitArray
   -1,   // 231 InitVirt
   -1,   // 232 InitComp
   -1,   // 233 SizeOf
   -1,   // 234 Assert
   -1,   // 235 Switch
   -1,   // 236 MetaSlot
   -1,   // 237 Cast
   -1,   // 238 LoadArrayLiteral
};

#endif

//////////////////////////////////////////////////////////////////////////
// Constants
//////////////////////////////////////////////////////////////////////////

#define vmMagic        0x5ED0BA07
#define vmMajorVer     0x01
#define vmMinorVer     0x05
#define vmMaxParams    255
#define vmMaxLocals    255
#define vmBigEndian    'B'
#define vmLittleEndian 'L'

#endif