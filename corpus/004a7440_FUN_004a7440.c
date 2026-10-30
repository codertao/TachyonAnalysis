
undefined4 * FUN_004a7440(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_38;
  short local_34;
  undefined2 local_32;
  int local_30;
  undefined4 local_2c;
  int local_20;
  
  if (*(short *)(param_1 + 5) == 2) {
    uVar1 = *(undefined2 *)((int)param_1 + 0x16);
    piVar4 = &local_38;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_38 = param_1[6];
    local_34 = (-(ushort)(DAT_0055e45c != 0) & 0xfff8) + 0x10;
    local_32 = uVar1;
    iVar3 = FUN_004a73c0(param_1,&DAT_0055e4ac,8);
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
    local_30 = iVar3 + 8;
    local_2c = *(undefined4 *)(iVar3 + 4);
    if (DAT_0055e45c == 0) {
      puVar2 = (undefined4 *)FUN_004a71a0(param_1,&local_38,0x30);
      if (puVar2 != (undefined4 *)0x0) {
        puVar5 = puVar2;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *param_1;
          param_1 = param_1 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined2 *)((int)puVar2 + 0x22) = 0x10;
        puVar2[4] = 0x10;
        puVar2[1] = local_20 + 0x28;
        *(undefined2 *)((int)puVar2 + 0x16) = 1;
        puVar2[6] = 0x5622;
        puVar2[7] = 0xac44;
        *(undefined2 *)(puVar2 + 8) = 2;
        *(undefined2 *)(puVar2 + 5) = 1;
        puVar2[0xb] = 0;
        puVar2[9] = DAT_0055e49c;
        puVar2[10] = local_20;
        return puVar2;
      }
    }
    else {
      puVar2 = (undefined4 *)FUN_004a71a0(param_1,&local_38,0x10);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = DAT_0055e4a4;
        puVar2[1] = local_20;
        puVar2[2] = (uint)(local_38 << 4) / 0x5622 << 0x18;
        *(undefined1 *)(puVar2 + 3) = 0;
        *(undefined1 *)((int)puVar2 + 0xd) = 1;
        return puVar2;
      }
    }
  }
  return param_1;
}

