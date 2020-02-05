#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer Params
// {
//
//   uint histoSize;                    // Offset:    0 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// pHistIn                           texture    uint         buf             t0      1 
// pHistOut                              UAV    uint         buf             u0      1 
// Params                            cbuffer      NA          NA            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_resource_buffer (uint,uint,uint,uint) t0
dcl_uav_typed_buffer (uint,uint,uint,uint) u0
dcl_input vThreadIDInGroup.x
dcl_temps 2
dcl_tgsm_structured g0, 4, 64
dcl_thread_group 64, 1, 1
ushr r0.x, cb0[0].x, l(6)
imul null, r0.y, r0.x, vThreadIDInGroup.x
mov r1.y, r0.y
mov r1.xzw, l(0,0,0,0)
loop 
  uge r0.z, r1.w, r0.x
  breakc_nz r0.z
  ld_indexable(buffer)(uint,uint,uint,uint) r0.z, r1.yyyy, t0.yzxw
  ult r0.w, r1.z, r0.z
  if_nz r0.w
    mov r1.x, r1.y
    mov r1.z, r0.z
  endif 
  iadd r1.yw, r1.yyyw, l(0, 1, 0, 1)
endloop 
store_structured g0.x, vThreadIDInGroup.x, l(0), r1.x
sync_g_t
if_z vThreadIDInGroup.x
  mov r0.xyz, l(0,0,0,0)
  loop 
    uge r0.w, r0.z, l(64)
    breakc_nz r0.w
    ld_structured r1.x, r0.z, l(0), g0.xxxx
    ld_indexable(buffer)(uint,uint,uint,uint) r1.y, r1.xxxx, t0.yxzw
    ult r0.w, r0.y, r1.y
    if_nz r0.w
      mov r0.xy, r1.xyxx
    endif 
    iadd r0.z, r0.z, l(1)
  endloop 
  store_uav_typed u0.xyzw, l(0,0,0,0), r0.xxxx
  store_uav_typed u0.xyzw, l(1,1,1,1), r0.yyyy
endif 
ret 
// Approximately 34 instruction slots used
#endif

const BYTE ChromaKeyHistSort_CS[] =
{
     68,  88,  66,  67, 161, 199, 
    166, 226,  73, 190, 183,  81, 
    224, 233, 150, 196, 148,  41, 
    219,  88,   1,   0,   0,   0, 
    120,   5,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    140,   1,   0,   0, 156,   1, 
      0,   0, 172,   1,   0,   0, 
    220,   4,   0,   0,  82,  68, 
     69,  70,  80,   1,   0,   0, 
      1,   0,   0,   0, 180,   0, 
      0,   0,   3,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
     83,  67,   0,   1,   0,   0, 
     40,   1,   0,   0,  82,  68, 
     49,  49,  60,   0,   0,   0, 
     24,   0,   0,   0,  32,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    156,   0,   0,   0,   2,   0, 
      0,   0,   4,   0,   0,   0, 
      1,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0, 164,   0,   0,   0, 
      4,   0,   0,   0,   4,   0, 
      0,   0,   1,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 173,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    112,  72, 105, 115, 116,  73, 
    110,   0, 112,  72, 105, 115, 
    116,  79, 117, 116,   0,  80, 
     97, 114,  97, 109, 115,   0, 
    173,   0,   0,   0,   1,   0, 
      0,   0, 204,   0,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   0,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0,   4,   1, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 104, 105, 
    115, 116, 111,  83, 105, 122, 
    101,   0, 100, 119, 111, 114, 
    100,   0,   0,   0,  19,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 254,   0, 
      0,   0,  77, 105,  99, 114, 
    111, 115, 111, 102, 116,  32, 
     40,  82,  41,  32,  72,  76, 
     83,  76,  32,  83, 104,  97, 
    100, 101, 114,  32,  67, 111, 
    109, 112, 105, 108, 101, 114, 
     32,  49,  48,  46,  49,   0, 
     73,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  79,  83, 
     71,  78,   8,   0,   0,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  83,  72,  69,  88, 
     40,   3,   0,   0,  80,   0, 
      5,   0, 202,   0,   0,   0, 
    106,   8,   0,   1,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  88,   8,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  68,  68,   0,   0, 
    156,   8,   0,   4,   0, 224, 
     17,   0,   0,   0,   0,   0, 
     68,  68,   0,   0,  95,   0, 
      0,   2,  18,  32,   2,   0, 
    104,   0,   0,   2,   2,   0, 
      0,   0, 160,   0,   0,   5, 
      0, 240,  17,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     64,   0,   0,   0, 155,   0, 
      0,   4,  64,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,  85,   0,   0,   8, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      6,   0,   0,   0,  38,   0, 
      0,   7,   0, 208,   0,   0, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  10,  32, 
      2,   0,  54,   0,   0,   5, 
     34,   0,  16,   0,   1,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   8, 210,   0,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     48,   0,   0,   1,  80,   0, 
      0,   7,  66,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   1,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   3,   0,   4,   3, 
     42,   0,  16,   0,   0,   0, 
      0,   0,  45,   0,   0, 137, 
     66,   0,   0, 128,   3,  17, 
     17,   0,  66,   0,  16,   0, 
      0,   0,   0,   0,  86,   5, 
     16,   0,   1,   0,   0,   0, 
    150, 124,  16,   0,   0,   0, 
      0,   0,  79,   0,   0,   7, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      1,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     31,   0,   4,   3,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     54,   0,   0,   5,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,  54,   0,   0,   5, 
     66,   0,  16,   0,   1,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  21,   0, 
      0,   1,  30,   0,   0,  10, 
    162,   0,  16,   0,   1,   0, 
      0,   0,  86,  13,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     22,   0,   0,   1, 168,   0, 
      0,   8,  18, 240,  17,   0, 
      0,   0,   0,   0,  10,  32, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   1,   0,   0,   0, 
    190,  24,   0,   1,  31,   0, 
      0,   2,  10,  32,   2,   0, 
     54,   0,   0,   8, 114,   0, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  48,   0,   0,   1, 
     80,   0,   0,   7, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
     64,   0,   0,   0,   3,   0, 
      4,   3,  58,   0,  16,   0, 
      0,   0,   0,   0, 167,   0, 
      0,   9,  18,   0,  16,   0, 
      1,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,   6, 240,  17,   0, 
      0,   0,   0,   0,  45,   0, 
      0, 137,  66,   0,   0, 128, 
      3,  17,  17,   0,  34,   0, 
     16,   0,   1,   0,   0,   0, 
      6,   0,  16,   0,   1,   0, 
      0,   0,  22, 126,  16,   0, 
      0,   0,   0,   0,  79,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,  31,   0,   4,   3, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
     50,   0,  16,   0,   0,   0, 
      0,   0,  70,   0,  16,   0, 
      1,   0,   0,   0,  21,   0, 
      0,   1,  30,   0,   0,   7, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
     22,   0,   0,   1, 164,   0, 
      0,  10, 242, 224,  17,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      6,   0,  16,   0,   0,   0, 
      0,   0, 164,   0,   0,  10, 
    242, 224,  17,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,  86,   5, 
     16,   0,   0,   0,   0,   0, 
     21,   0,   0,   1,  62,   0, 
      0,   1,  83,  84,  65,  84, 
    148,   0,   0,   0,  34,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   5,   0, 
      0,   0,   1,   0,   0,   0, 
      5,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   6,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0
};