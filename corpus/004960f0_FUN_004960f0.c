
int FUN_004960f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)*param_1;
  local_4 = 0;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    puVar5 = &DAT_005b31c0;
    puVar4 = &DAT_005b32b0;
  }
  else {
    puVar5 = *(undefined4 **)(param_1[1] + 100);
    puVar4 = &DAT_0058b03c;
  }
  iVar3 = DcbPool_Alloc(puVar4,3,puVar5);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0041b8b0(iVar3);
  *(undefined2 *)(iVar3 + 0x74) = 2;
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)puVar1[0x1d];
  *(undefined4 *)(iVar3 + 0x70) = puVar1[0x25];
  puVar5 = (undefined4 *)param_1[2];
  *(undefined4 *)(iVar3 + 0x34) = *puVar5;
  *(undefined4 *)(iVar3 + 0x38) = puVar5[1];
  *(undefined4 *)(iVar3 + 0x3c) = puVar5[2];
  puVar5 = (undefined4 *)param_1[3];
  *(undefined4 *)(iVar3 + 0x4c) = *puVar5;
  *(undefined4 *)(iVar3 + 0x50) = puVar5[1];
  *(undefined4 *)(iVar3 + 0x54) = puVar5[2];
  *(undefined4 *)(iVar3 + 0x68) = puVar1[0x19];
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  *(undefined4 *)(iVar3 + 0x18) = puVar1[0x1e];
  *(undefined2 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x5c) = puVar1[0x24];
  *(undefined1 *)(iVar3 + 0xc3) = 1;
  *(int *)(iVar3 + 0xd0) = DAT_00565460;
  DAT_00565460 = DAT_00565460 + 1;
  *(undefined4 **)(iVar3 + 0xdc) = puVar1;
  *(undefined4 *)(iVar3 + 0xd4) = puVar1[0xf];
  *(int *)(iVar3 + 200) = param_1[1];
  *(undefined4 *)(iVar3 + 0x118) = 0;
  *(int *)(iVar3 + 0xf0) = param_1[9];
  *(int *)(iVar3 + 0xf4) = param_1[1];
  *(undefined4 *)(iVar3 + 0x1c) = 0x100000;
  *(undefined4 *)(iVar3 + 0x2c) = 0xff;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0x90;
  FUN_004b2950((undefined4 *)(iVar3 + 0x18),0);
  *(undefined4 *)(iVar3 + 0xcc) = *(undefined4 *)(*(int *)(iVar3 + 0xdc) + 0x9c);
  *(undefined4 *)(iVar3 + 0xec) = 0x30000;
  *(undefined4 *)(iVar3 + 0xd4) = 0xa28000;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(iVar3 + 0xd8) = 0;
    *(code **)(iVar3 + 0x6c) = FUN_00493ec0;
    iVar2 = param_1[1];
    if (*(short *)(iVar2 + 0x76) == 1) {
      local_4 = *(undefined4 *)(iVar2 + 0xdc);
      if ((code *)puVar1[0x40] != (code *)0x0) {
        (*(code *)puVar1[0x40])(iVar2 + 0x11c,puVar1);
      }
    }
    FUN_0045e360(*(undefined4 *)(param_1[1] + 0x78),*(undefined4 *)(iVar3 + 0x78),*puVar1,0x4e20000,
                 local_4,*(undefined4 *)(iVar3 + 100),1);
    return iVar3;
  }
  *(undefined4 *)(iVar3 + 0xd8) = 1;
  return iVar3;
}

