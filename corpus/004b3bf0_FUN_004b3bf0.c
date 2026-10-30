
undefined4 FUN_004b3bf0(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  
  puVar3 = param_1;
  puVar1 = param_1 + 0x10;
  param_1 = (uint *)DAT_00666b04;
  if (*puVar1 != 0) {
    if ((*puVar3 & 0x200) != 0) {
      param_1 = (uint *)DAT_00666b04;
      if ((int)DAT_00666b04 < (int)puVar3[2]) {
        param_1 = (uint *)puVar3[2];
      }
      if ((int)param_1 < (int)puVar3[3]) {
        param_1 = (uint *)puVar3[3];
      }
    }
    lVar2 = (longlong)*(int *)(*puVar1 + 0x30) * (longlong)(int)param_1;
    uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    if ((int)(puVar3[0xc] - uVar5) <= DAT_00666ae8) {
      iVar6 = FUN_004baf20(puVar3 + 10,uVar5);
      if (iVar6 != 0) {
        uVar4 = FUN_004bafa0(puVar3 + 10,uVar5);
        *(undefined2 *)((int)puVar3 + 0x1a) = uVar4;
        return 1;
      }
    }
  }
  return 0;
}

