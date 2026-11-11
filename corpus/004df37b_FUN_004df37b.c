
void __fastcall FUN_004df37b(int param_1,int param_2)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint unaff_EBX;
  int unaff_ESI;
  
  iVar2 = in_EAX * 0x40;
  (&DAT_004ca5de)[iVar2] = 0;
  *(uint *)(&DAT_004ca5c2 + iVar2) = (uint)*(byte *)(unaff_ESI + 0xc);
  *(uint *)(&DAT_004ca5ba + iVar2) = unaff_EBX;
  *(int *)(&DAT_004ca5be + iVar2) = param_1;
  uVar1 = *(undefined2 *)(&DAT_004df8d0 + (unaff_EBX & 0xff) * 2);
  param_1 = param_1 * DAT_00601e20;
  bVar3 = (char)*(undefined4 *)(&DAT_004ca5c2 + iVar2) + 0x10;
  (&DAT_004ca5c6)[in_EAX * 0x10] = (char)((ushort)uVar1 >> 8) * param_1 >> (bVar3 & 0x1f);
  (&DAT_004ca5ca)[in_EAX * 0x10] = (char)uVar1 * param_1 >> (bVar3 & 0x1f);
  iVar4 = *(int *)(unaff_ESI + 4);
  (&DAT_004ca5a2)[in_EAX * 0x10] = unaff_ESI + 0x10 + iVar4;
  (&DAT_004ca5a6)[in_EAX * 0x10] = iVar4;
  (&DAT_004ca5ae)[in_EAX * 0x10] = (iVar4 + -1) * -0x400;
  if (param_2 == 0) {
    param_2 = 0x10000;
  }
  iVar4 = *(int *)(unaff_ESI + 8);
  *(int *)(&DAT_004ca5b6 + iVar2) = iVar4;
  iVar4 = (int)((longlong)param_2 * (longlong)iVar4 >> 0x22);
  (&DAT_004ca5aa)[in_EAX * 0x10] = iVar4;
  (&DAT_004ca5d6)[in_EAX * 0x10] = iVar4;
  (&DAT_004ca5da)[in_EAX * 0x10] = 0;
  *(int *)(&DAT_004ca5b2 + iVar2) = DAT_004cb470;
  DAT_004cb470 = DAT_004cb470 + 1;
  (&DAT_004ca5ce)[in_EAX * 0x10] = 0;
  (&DAT_004ca5d2)[iVar2] = 1;
  (&DAT_004ca5de)[iVar2] = 1;
  if ((undefined *)(&g_SndVoices)[in_EAX * 0x10] == &DAT_004c9401) {
    (&DAT_004c940e)[in_EAX * 0x10] = 0xffffffff;
  }
  return;
}

