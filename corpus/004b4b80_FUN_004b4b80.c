
void FUN_004b4b80(int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  
  puVar4 = *(ushort **)(param_2 + 0x14);
  uVar5 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    do {
      iVar2 = (uint)*puVar4 * 0x10 + *(int *)(param_1 + 0x48);
      iVar1 = (uint)puVar4[1] * 0x30 + *(int *)(param_1 + 0x40);
      *(undefined4 *)(iVar1 + 0x14) =
           *(undefined4 *)(&DAT_00610880 + (DAT_00666afc + *(char *)(iVar2 + 0xc) * 2) * 4);
      uVar3 = (int)((uint)*(byte *)(param_3 + 0xc + iVar2) << (param_4 & 0x1f)) >> 7;
      *(uint *)(iVar1 + 0x18) =
           (uVar3 << 8 | uVar3) << 8 | *(uint *)(iVar1 + 0x18) & 0xff000000 | uVar3;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar5 < *(uint *)(param_2 + 0x10));
  }
  return;
}

