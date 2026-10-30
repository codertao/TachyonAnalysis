
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004bc8e8(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  undefined4 uVar6;
  char local_a8 [132];
  undefined1 local_24 [8];
  undefined4 local_1c;
  uint local_18;
  ushort local_14 [4];
  undefined *local_c;
  undefined4 local_8;
  
  iVar3 = FUN_004bcabc(param_2,local_a8,local_14,&local_1c,param_1);
  if (iVar3 != 0) {
    sVar4 = _strlen(local_a8);
    pvVar5 = _malloc(sVar4 + 1);
    if (pvVar5 != (void *)0x0) {
      puVar1 = (uint *)(&DAT_00565130 + param_1 * 4);
      puVar2 = (undefined *)(&DAT_00561584)[param_1 * 3];
      local_18 = *puVar1;
      local_c = &DAT_00565150 + param_1 * 6;
      FUN_004be0e0(local_24,local_c,6);
      local_8 = DAT_00565148;
      uVar6 = FUN_004c1790(pvVar5,local_a8);
      (&DAT_00561584)[param_1 * 3] = uVar6;
      *puVar1 = (uint)local_14[0];
      FUN_004be0e0(local_c,local_14,6);
      if (param_1 == 2) {
        DAT_00565148 = local_1c;
      }
      if (param_1 == 1) {
        _DAT_0056514c = local_1c;
      }
      iVar3 = (**(code **)(&DAT_00561588 + param_1 * 0xc))();
      if (iVar3 == 0) {
        if (puVar2 != &DAT_00561470) {
          FUN_004bd512(puVar2);
        }
        return (&DAT_00561584)[param_1 * 3];
      }
      (&DAT_00561584)[param_1 * 3] = puVar2;
      FUN_004bd512(pvVar5);
      *puVar1 = local_18;
      DAT_00565148 = local_8;
    }
  }
  return 0;
}

