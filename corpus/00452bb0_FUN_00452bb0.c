
void FUN_00452bb0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_005b1f0c + 0xd0;
  switch(param_1) {
  case 3:
    iVar1 = FUN_00455e20(&DAT_005b20e0,iVar3);
    iVar2 = iVar1 >> 3;
    if (DAT_005b20e0 < iVar1 >> 3) {
      iVar2 = DAT_005b20e0;
    }
    iVar3 = FUN_004563f0(&DAT_005b20e0,iVar3,3,iVar2);
    if (iVar3 == 0) {
      return;
    }
    DAT_005b20e0 = DAT_005b20e0 - iVar2;
    uVar4 = 3;
    break;
  case 4:
    if (((byte)DAT_005b2154 & 4) == 0) {
      return;
    }
    iVar1 = FUN_00455e00(&DAT_005b20e0,iVar3);
    iVar2 = iVar1 >> 3;
    if (DAT_005b20f8 < iVar1 >> 3) {
      iVar2 = DAT_005b20f8;
    }
    iVar3 = FUN_004563f0(&DAT_005b20e0,iVar3,4,iVar2);
    if (iVar3 == 0) {
      return;
    }
    DAT_005b20f8 = DAT_005b20f8 - iVar2;
    uVar4 = 4;
    break;
  case 5:
    iVar2 = Shield_GetMax(&DAT_005b20e0,iVar3);
    iVar2 = iVar2 >> 4;
    iVar3 = FUN_004563f0(&DAT_005b20e0,iVar3,5,iVar2);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = 5;
    break;
  case 6:
    if (((byte)DAT_005b2154 & 4) == 0) {
      return;
    }
    iVar2 = Shield_GetMax(&DAT_005b20e0,iVar3);
    iVar2 = iVar2 >> 4;
    iVar3 = FUN_004563f0(&DAT_005b20e0,iVar3,6,iVar2);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = 6;
    break;
  default:
    goto switchD_00452bcd_default;
  }
  FUN_00415ac0(uVar4,iVar2);
  FUN_00466590(3,3,0,0xff);
switchD_00452bcd_default:
  return;
}

