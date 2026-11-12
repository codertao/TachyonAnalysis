
/* sweep: asm, reg-passed args; guess */

int __fastcall SndAsm_StopVoice(int param_1,int param_2)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar2 = in_EAX * 0x40;
  if ((&DAT_004c9a3e)[iVar2] != '\0') {
    return 0;
  }
  *(uint *)(&DAT_004c9a22 + iVar2) = (uint)*(byte *)(unaff_ESI + 0xc);
  *(uint *)(&DAT_004c9a1a + iVar2) = unaff_EBX;
  *(int *)(&DAT_004c9a1e + iVar2) = param_1;
  uVar1 = *(undefined2 *)(&DAT_004df8d0 + (unaff_EBX & 0xff) * 2);
  param_1 = param_1 * DAT_00601e20;
  bVar3 = (char)*(undefined4 *)(&DAT_004c9a22 + iVar2) + 0x10;
  (&DAT_004c9a26)[in_EAX * 0x10] = (char)((ushort)uVar1 >> 8) * param_1 >> (bVar3 & 0x1f);
  (&DAT_004c9a2a)[in_EAX * 0x10] = (char)uVar1 * param_1 >> (bVar3 & 0x1f);
  iVar4 = *(int *)(unaff_ESI + 4);
  (&DAT_004c9a02)[in_EAX * 0x10] = unaff_ESI + 0x10 + iVar4;
  (&DAT_004c9a06)[in_EAX * 0x10] = iVar4;
  (&DAT_004c9a0e)[in_EAX * 0x10] = (iVar4 + -1) * -0x400;
  if (param_2 == 0) {
    param_2 = 0x10000;
  }
  iVar4 = *(int *)(unaff_ESI + 8);
  *(int *)(&DAT_004c9a16 + iVar2) = iVar4;
  iVar4 = (int)((longlong)param_2 * (longlong)iVar4 >> 0x22);
  (&DAT_004c9a0a)[in_EAX * 0x10] = iVar4;
  (&DAT_004c9a36)[in_EAX * 0x10] = iVar4;
  (&DAT_004c9a3a)[in_EAX * 0x10] = 0;
  iVar4 = DAT_004cb470;
  (&DAT_004c9a12)[in_EAX * 0x10] = DAT_004cb470;
  DAT_004cb470 = DAT_004cb470 + 1;
  (&DAT_004c9a2e)[in_EAX * 0x10] = unaff_EDI;
  (&DAT_004c9a3e)[iVar2] = 1;
  return iVar4;
}

