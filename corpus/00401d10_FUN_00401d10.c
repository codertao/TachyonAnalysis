
void FUN_00401d10(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined1 local_c [12];
  
  iVar1 = *(int *)(param_1 + 0xf8);
  *(undefined1 *)(param_1 + 0x326) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    FUN_00401b30(param_1,local_c);
    uVar3 = FUN_0048e440(param_1 + 0x34,local_c);
    if ((uVar3 < 0xc350000) && (0x320000 < uVar3)) {
      FUN_004014a0(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x327) = 0;
    }
    if ((uVar3 < 0x64000) && (param_2 != 0)) {
      FUN_00401c30(param_1);
      FUN_00401080(param_1,0xc);
      return;
    }
    if (uVar3 < 0x96000) {
      uVar2 = FlightModel_SolveThrottle
                        (*(int *)(param_1 + 0x8c) + 0x84,*(undefined4 *)(iVar1 + 0xd4),
                         param_1 + 0x10c,*(uint *)(*(int *)(param_1 + 0x8c) + 0x564) & 0x400,1);
      *(undefined2 *)(param_1 + 0x312) = uVar2;
    }
    else {
      *(undefined2 *)(param_1 + 0x312) = 0x400;
    }
    FUN_0040f380(param_1 + 0x34,local_c,param_1 + 0xdc);
  }
  return;
}

