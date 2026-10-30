
void FUN_00453f30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_005b1f0c + 0xd0;
  if ((DAT_005b2154 & 0x4000) == 0) {
    return;
  }
  if (((byte)DAT_005b3304 & 0x1f) != 0) {
    return;
  }
  iVar2 = FUN_00455e40(&DAT_005b20e0,iVar1);
  iVar3 = DAT_005b20f0 + DAT_005b20e8 >> 1;
  if (iVar3 < iVar2 >> 1) {
    iVar2 = FUN_00455fa0(&DAT_005b20e0,0);
    if (iVar2 == 0x20000) goto LAB_00454009;
    uVar4 = 0x20000;
  }
  else if (iVar3 < (iVar2 >> 2) + (iVar2 >> 1)) {
    iVar2 = FUN_00455fa0(&DAT_005b20e0,0);
    if (iVar2 == 0x18000) goto LAB_00454009;
    uVar4 = 0x18000;
  }
  else {
    if ((iVar2 <= iVar3) || (iVar2 = FUN_00455fa0(&DAT_005b20e0,0), iVar2 == 0x10000))
    goto LAB_00454009;
    uVar4 = 0x10000;
  }
  FUN_00455f40(&DAT_005b20e0,uVar4,0,iVar1);
  FUN_00466590(3,3,0,0xff);
LAB_00454009:
  if (DAT_005b20f0 >> 1 <= DAT_005b20e8) {
    if (DAT_005b20f0 < DAT_005b20e8 >> 1) {
      FUN_00452b30(1);
    }
    return;
  }
  FUN_00452b30(0xffffffff);
  return;
}

