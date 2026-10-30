
void FUN_004230f0(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = (param_3 & 0xff) >> 2 & 1;
  uVar1 = FUN_0048e350();
  uVar5 = DAT_005a7454;
  if ((uVar1 & 0xff00) < 0x8000) {
    uVar5 = DAT_005a743c;
  }
  FUN_00422fe0(param_1,uVar5,param_2,uVar4);
  uVar1 = uVar4;
  if ((param_3 & 8) == 0) {
    iVar2 = _rand();
    iVar3 = (iVar2 >> 8 & 3U) + 1;
    iVar2 = param_2;
  }
  else {
    iVar2 = _rand();
    iVar3 = (iVar2 >> 8 & 3U) + 4;
    iVar2 = param_2 * 2;
  }
  FUN_00422aa0(param_1,iVar2,iVar3,uVar1);
  uVar5 = 0xc;
  uVar1 = uVar4;
  iVar2 = _rand();
  FUN_00422580(param_1,param_2,DAT_005a7430,(iVar2 >> 8 & 3U) + 5,uVar1,uVar5);
  uVar5 = 0xc;
  uVar1 = uVar4;
  iVar2 = _rand();
  FUN_00422580(param_1,param_2,DAT_005a7460,(iVar2 >> 8 & 3U) + 5,uVar1,uVar5);
  FUN_004227f0(param_1,param_2);
  FUN_004228e0(param_1,param_2);
  if ((param_3 & 1) != 0) {
    iVar2 = _rand();
    FUN_00422d50(param_1,param_2,(iVar2 >> 8 & 1U) + 1,uVar4);
  }
  if ((param_3 & 2) != 0) {
    FUN_00422280(param_1);
  }
  return;
}

