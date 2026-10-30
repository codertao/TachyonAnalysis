
void FUN_00453ab0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_005b1f0c;
  iVar2 = DAT_005b1ee0 - DAT_005b1ee4;
  if (iVar2 < 0x11) {
    if (iVar2 < -0x10) {
      iVar2 = -0x10;
    }
  }
  else {
    iVar2 = 0x10;
  }
  DAT_005b1ee4 = DAT_005b1ee4 + iVar2;
  if ((*(byte *)(DAT_005b95e0 + 0xc) & 4) != 0) {
    if (DAT_005b1ee8 == 0) {
      iVar3 = *(int *)(DAT_005b1f0c + 0x21c);
      uVar1 = *(undefined4 *)(DAT_005b1f0c + 0x248);
      iVar2 = (*(int *)(DAT_005b1f0c + 0x228) * DAT_005b1ee4 >> 10) + *(int *)(DAT_005b1f0c + 0x22c)
      ;
    }
    else {
      iVar3 = *(int *)(DAT_005b1f0c + 0x220);
      iVar2 = *(int *)(DAT_005b1f0c + 0x234);
      uVar1 = *(undefined4 *)(DAT_005b1f0c + 0x24c);
    }
    if ((*(int *)(param_1 + 0xfc) != iVar3) || (*(int *)(param_1 + 0x114) == 0)) {
      *(undefined4 *)(param_1 + 0x114) = 1;
      *(int *)(param_1 + 0xfc) = iVar3;
      FUN_004663d0(param_1,iVar3,uVar1);
    }
    FUN_004539d0(param_1);
    FUN_00466430(*(undefined4 *)(param_1 + 200),0);
    FUN_004661a0(*(undefined4 *)(param_1 + 200),&DAT_005b9600,param_1 + 0xa0);
    FUN_00466410(param_1,iVar2);
    return;
  }
  if (DAT_005b1ee8 == 0) {
    iVar2 = *(int *)(DAT_005b1f0c + 0x1b8);
    iVar4 = (*(int *)(DAT_005b1f0c + 0x1c4) * DAT_005b1ee4 >> 10) + *(int *)(DAT_005b1f0c + 0x1c8);
  }
  else {
    iVar2 = *(int *)(DAT_005b1f0c + 0x1bc);
    iVar4 = *(int *)(DAT_005b1f0c + 0x1d0);
  }
  if ((*(int *)(param_1 + 0xfc) != iVar2) || (*(int *)(param_1 + 0x114) != 0)) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(int *)(param_1 + 0xfc) = iVar2;
    FUN_004663d0(param_1,iVar2,*(undefined4 *)(iVar3 + 0x23c));
  }
  FUN_00466430(*(undefined4 *)(param_1 + 0x104),1);
  FUN_00466430(*(undefined4 *)(param_1 + 200),2);
  FUN_00466290(param_1);
  FUN_00466410(param_1,iVar4);
  return;
}

