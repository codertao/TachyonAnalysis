
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3f90(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x28);
  if ((*param_1 & 0x10) == 0) {
    _DAT_0055ecd8 = 0x10000;
    _DAT_0055ecb8 = 0x10000;
    _DAT_0055ecc8 = 0x10000;
  }
  else if ((*param_1 & 0x200) == 0) {
    _DAT_0055ecb8 = param_1[1];
    _DAT_0055ecc8 = param_1[1];
    _DAT_0055ecd8 = param_1[1];
  }
  else {
    _DAT_0055ecb8 = param_1[1];
    _DAT_0055ecc8 = param_1[2];
    _DAT_0055ecd8 = param_1[3];
  }
  if (((*param_1 & 4) == 0) && ((*(uint *)(param_2 + 0x10) & 0x40) == 0)) {
    if (((*param_1 & 0x100) == 0) && ((*(uint *)(param_2 + 0x10) & 0x200) == 0)) {
      FUN_0052db6a(&DAT_0055ed00,param_1[0xd],param_1[0xe],param_1[0xf]);
      FUN_0052db6a(iVar1 + 0x18,-*(int *)(param_2 + 4),-*(int *)(param_2 + 8),
                   -*(int *)(param_2 + 0xc));
      FUN_004b1bb0(iVar1,param_2 + 4);
      FUN_004b24d0(&DAT_0055ecb8,&DAT_0055ecdc);
      FUN_004b24d0(&DAT_0055ecc4,&DAT_0055ece8);
      FUN_004b24d0(&DAT_0055ecd0,&DAT_0055ecf4);
      for (iVar2 = *(int *)(param_2 + 0x20); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
        if ((*(uint *)(iVar2 + 0x10) & 0x100) == 0) {
          FUN_004b1bb0(*(undefined4 *)(iVar2 + 0x28),iVar2 + 4);
          FUN_004b24d0(&DAT_0055ecdc,&DAT_0055ecdc);
          FUN_004b24d0(&DAT_0055ece8,&DAT_0055ece8);
          FUN_004b24d0(&DAT_0055ecf4,&DAT_0055ecf4);
        }
      }
      FUN_0052dbcd(&DAT_0055ed00);
      FUN_004b24d0(&DAT_0055ecdc,&DAT_0055ecdc);
      FUN_004b24d0(&DAT_0055ece8,&DAT_0055ece8);
      FUN_004b24d0(&DAT_0055ecf4,&DAT_0055ecf4);
      FUN_0052dbcd(&DAT_00666ac8);
      FUN_004b2410(&DAT_0055ecdc,&DAT_0055ecdc);
      FUN_004b2410(&DAT_0055ece8,&DAT_0055ece8);
      FUN_004b2410(&DAT_0055ecf4,&DAT_0055ecf4);
    }
    else {
      FUN_0052db6a(iVar1 + 0x18,-*(int *)(param_2 + 4),-*(int *)(param_2 + 8),
                   -*(int *)(param_2 + 0xc));
      FUN_004b1bb0(iVar1,param_2 + 4);
      FUN_0052dc76(&DAT_0055ecb8,&DAT_0055ecdc);
      FUN_0052dc76(&DAT_0055ecc4,&DAT_0055ece8);
      FUN_0052dc76(&DAT_0055ecd0,&DAT_0055ecf4);
      FUN_0052dbcd(&DAT_00666ac8);
      FUN_0052dc76(&DAT_0055ecdc,&DAT_0055ecdc);
      FUN_0052dc76(&DAT_0055ece8,&DAT_0055ece8);
      FUN_0052dc76(&DAT_0055ecf4,&DAT_0055ecf4);
    }
    FUN_004b3c80();
    FUN_004b3eb0(param_2,iVar1 + 0x30);
    return;
  }
  DAT_0062c100 = (float)(int)_DAT_0055ecb8 * _DAT_00666aec;
  _DAT_0062c110 = (float)(int)_DAT_0055ecc8 * _DAT_00666aec;
  _DAT_0062c120 = (float)(int)_DAT_0055ecd8 * _DAT_00666aec;
  return;
}

