
void FUN_004547e0(short *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  DAT_005b20d0 = 0;
  if (*(int *)(param_3 + 0x30c) != 0) {
    iVar2 = param_3 + 0x4d0;
    do {
      if (*param_1 != 0) {
        uVar1 = FUN_00493120(*param_1 + -1,1,0xcccc,0);
        FUN_00493510(param_2,iVar2,uVar1);
        if (*(int *)(*param_2 + 0x50) != 0) {
          param_2[0xb] = (int)param_1[1];
        }
        *(short *)(param_2 + 0xd) = (short)uVar3;
        param_2 = param_2 + 0xe;
        DAT_005b20d0 = DAT_005b20d0 + 1;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0xc;
      param_1 = param_1 + 2;
    } while (uVar3 < *(uint *)(param_3 + 0x30c));
  }
  return;
}

