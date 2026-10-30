
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052d9cd(uint param_1)

{
  uint in_EAX;
  int iVar1;
  uint unaff_EBX;
  float *unaff_ESI;
  
  DAT_0052d944 = in_EAX & 0x1ffffff;
  DAT_0052d948 = unaff_EBX & 0x1ffffff;
  DAT_0052d94c = param_1 & 0x1ffffff;
  iVar1 = (DAT_0052d944 >> 0x10) * 4;
  *unaff_ESI = (*(float *)(&LAB_0052cbe8 + iVar1) - *(float *)(&g_SinCosTable + iVar1)) *
               (float)(in_EAX & 0xffff) * _DAT_00666aec + *(float *)(&g_SinCosTable + iVar1);
  iVar1 = (DAT_0052d944 >> 0x10) * 4;
  unaff_ESI[1] = (*(float *)(&DAT_0052cde8 + iVar1) - *(float *)(&DAT_0052cde4 + iVar1)) *
                 (float)(DAT_0052d944 & 0xffff) * _DAT_00666aec + *(float *)(&DAT_0052cde4 + iVar1);
  iVar1 = (DAT_0052d948 >> 0x10) * 4;
  unaff_ESI[2] = (*(float *)(&LAB_0052cbe8 + iVar1) - *(float *)(&g_SinCosTable + iVar1)) *
                 (float)(DAT_0052d948 & 0xffff) * _DAT_00666aec + *(float *)(&g_SinCosTable + iVar1)
  ;
  iVar1 = (DAT_0052d948 >> 0x10) * 4;
  unaff_ESI[3] = (*(float *)(&DAT_0052cde8 + iVar1) - *(float *)(&DAT_0052cde4 + iVar1)) *
                 (float)(DAT_0052d948 & 0xffff) * _DAT_00666aec + *(float *)(&DAT_0052cde4 + iVar1);
  iVar1 = (DAT_0052d94c >> 0x10) * 4;
  unaff_ESI[4] = (*(float *)(&LAB_0052cbe8 + iVar1) - *(float *)(&g_SinCosTable + iVar1)) *
                 (float)(DAT_0052d94c & 0xffff) * _DAT_00666aec + *(float *)(&g_SinCosTable + iVar1)
  ;
  iVar1 = (DAT_0052d94c >> 0x10) * 4;
  DAT_0052d7e4 = DAT_0052d94c & 0xffff;
  unaff_ESI[5] = (*(float *)(&DAT_0052cde8 + iVar1) - *(float *)(&DAT_0052cde4 + iVar1)) *
                 (float)DAT_0052d7e4 * _DAT_00666aec + *(float *)(&DAT_0052cde4 + iVar1);
  return;
}

