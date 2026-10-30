
void FUN_00403820(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  Entity_SteerToward(param_1,param_1 + 0xdc,iVar2 + 0x84,*(undefined4 *)(param_1 + 0x338));
  iVar3 = *(int *)(param_1 + 0x8c);
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    uVar4 = *(uint *)(param_1 + 0x338) & 1;
    if (uVar4 == 0) {
      sVar5 = *(short *)(param_1 + 0x312);
    }
    else {
      sVar5 = *(short *)(param_1 + 0x312) >> 1;
    }
    if ((((*(char *)(param_1 + 0x327) == '\0') || (*(int *)(iVar3 + 0x100) == 0)) || (uVar4 != 0))
       || (*(int *)(param_1 + 0x124) < *(int *)(iVar3 + 0x118))) {
      FUN_004241c0(0,*(undefined4 *)(param_1 + 0xd4),param_1 + 0xe8,iVar3 + 0x84,(int)sVar5,
                   param_1 + 0x10c,*(uint *)(iVar2 + 0x564) & 0x400,1);
      *(char *)(param_1 + 0xc1) = (char)((uint)(int)sVar5 >> 3);
      *(undefined1 *)(param_1 + 0x327) = 0;
    }
    else {
      FUN_004241c0(0,*(undefined4 *)(param_1 + 0xd4),param_1 + 0xe8,iVar3 + 0x84,0xffffffff,
                   param_1 + 0x10c,*(uint *)(iVar2 + 0x564) & 0x400,1);
      *(undefined1 *)(param_1 + 0xc1) = 0xff;
    }
  }
  FUN_00403590(param_1);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0xac);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xc1) == -1) {
    piVar1 = (int *)(param_1 + 0x124);
    *piVar1 = *piVar1 - *(int *)(iVar3 + 0x118);
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  return;
}

