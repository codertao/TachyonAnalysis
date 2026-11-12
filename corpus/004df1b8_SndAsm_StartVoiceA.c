
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: asm, reg-passed args; guess */

int __fastcall SndAsm_StartVoiceA(int param_1,int param_2)

{
  undefined2 uVar1;
  int in_EAX;
  byte bVar2;
  int iVar3;
  uint unaff_EBX;
  int *piVar4;
  int unaff_ESI;
  undefined4 *puVar5;
  
  puVar5 = &g_SndVoices;
  piVar4 = &DAT_004c9a02;
  _DAT_004df1b4 = 0x18;
  do {
    if (((*(char *)((int)puVar5 + 0x3d) == '\0') && (*(char *)(puVar5 + 0xf) == '\0')) &&
       ((char)piVar4[0xf] == '\0')) goto LAB_004df22a;
    puVar5 = puVar5 + 0x10;
    piVar4 = piVar4 + 0x10;
    _DAT_004df1b4 = _DAT_004df1b4 + -1;
  } while (_DAT_004df1b4 != 0);
  puVar5 = &g_SndVoices;
  piVar4 = &DAT_004c9a02;
  _DAT_004df1b4 = 0x18;
  while (((*(char *)((int)puVar5 + 0x3d) != '\0' || ((char)piVar4[0xf] != '\0')) ||
         (param_1 <= (int)puVar5[7]))) {
    puVar5 = puVar5 + 0x10;
    piVar4 = piVar4 + 0x10;
    _DAT_004df1b4 = _DAT_004df1b4 + -1;
    if (_DAT_004df1b4 == 0) {
      return 0;
    }
  }
LAB_004df22a:
  piVar4[8] = (uint)*(byte *)(unaff_ESI + 0xc);
  piVar4[6] = unaff_EBX;
  piVar4[7] = param_1;
  uVar1 = *(undefined2 *)(&DAT_004df8d0 + (unaff_EBX & 0xff) * 2);
  param_1 = param_1 * DAT_00601e20;
  bVar2 = (char)piVar4[8] + 0x10;
  piVar4[9] = (char)((ushort)uVar1 >> 8) * param_1 >> (bVar2 & 0x1f);
  piVar4[10] = (char)uVar1 * param_1 >> (bVar2 & 0x1f);
  iVar3 = *(int *)(unaff_ESI + 4);
  *piVar4 = unaff_ESI + 0x10 + iVar3;
  piVar4[1] = iVar3;
  piVar4[3] = (iVar3 + -1) * -0x400;
  if (param_2 == 0) {
    param_2 = 0x10000;
  }
  iVar3 = *(int *)(unaff_ESI + 8);
  piVar4[5] = iVar3;
  iVar3 = (int)((longlong)param_2 * (longlong)iVar3 >> 0x22);
  piVar4[2] = iVar3;
  piVar4[0xd] = iVar3;
  piVar4[0xe] = 0;
  iVar3 = DAT_004cb470;
  piVar4[4] = DAT_004cb470;
  DAT_004cb470 = DAT_004cb470 + 1;
  piVar4[0xb] = in_EAX;
  *(undefined1 *)(piVar4 + 0xf) = 1;
  return iVar3;
}

