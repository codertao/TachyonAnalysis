
int FUN_00495e20(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    puVar4 = &DAT_005b31c0;
    puVar3 = &DAT_005b32b0;
  }
  else {
    puVar4 = *(undefined4 **)(param_1[1] + 100);
    puVar3 = &DAT_0058b03c;
  }
  iVar2 = DcbPool_Alloc(puVar3,3,puVar4);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0041b8b0(iVar2);
  *(undefined2 *)(iVar2 + 0x74) = 2;
  *(undefined4 *)(iVar2 + 0x58) = **(undefined4 **)(iVar1 + 0x74);
  *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(iVar1 + 0x94);
  puVar4 = (undefined4 *)param_1[2];
  *(undefined4 *)(iVar2 + 0x34) = *puVar4;
  *(undefined4 *)(iVar2 + 0x38) = puVar4[1];
  *(undefined4 *)(iVar2 + 0x3c) = puVar4[2];
  puVar4 = (undefined4 *)param_1[3];
  *(undefined4 *)(iVar2 + 0x4c) = *puVar4;
  *(undefined4 *)(iVar2 + 0x50) = puVar4[1];
  *(undefined4 *)(iVar2 + 0x54) = puVar4[2];
  *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar1 + 100);
  *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(iVar1 + 0xe8);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar1 + 0x78);
  *(undefined2 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar1 + 0x90);
  *(undefined1 *)(iVar2 + 0xc3) = 1;
  *(int *)(iVar2 + 0xd0) = DAT_00565460;
  DAT_00565460 = DAT_00565460 + 1;
  *(int *)(iVar2 + 0xdc) = iVar1;
  *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar1 + 0x3c);
  *(int *)(iVar2 + 200) = param_1[1];
  *(undefined4 *)(iVar2 + 0x118) = 0;
  *(int *)(iVar2 + 0xf0) = param_1[9];
  *(int *)(iVar2 + 0xf4) = param_1[1];
  puVar4 = (undefined4 *)param_1[5];
  *(undefined4 *)(iVar2 + 0xfc) = *puVar4;
  *(undefined4 *)(iVar2 + 0x100) = puVar4[1];
  *(undefined4 *)(iVar2 + 0x104) = puVar4[2];
  *(int *)(iVar2 + 0x114) = param_1[10];
  *(undefined4 *)(iVar2 + 0x1c) = 0x10000;
  *(undefined4 *)(iVar2 + 0x2c) = 0xff;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0x90;
  FUN_004b2950((undefined4 *)(iVar2 + 0x18),0);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(iVar2 + 0xd8) = 0;
    return iVar2;
  }
  *(undefined4 *)(iVar2 + 0xd8) = 1;
  return iVar2;
}

