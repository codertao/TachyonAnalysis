
void FUN_00428d90(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_8;
  undefined1 local_4 [4];
  
  iVar2 = FUN_00492c30(&DAT_005b1f10,DAT_005b20d0,(&DAT_005b20d4)[param_1]);
  if ((iVar2 != 0) && (*(short *)(iVar2 + 0x36) != 0)) {
    *param_2 = 4;
    return;
  }
  iVar3 = FUN_00497560(iVar2,&g_PlayerPower);
  piVar1 = param_2;
  iVar3 = (-(uint)(iVar3 != 0) & 0xfffffffe) + 3;
  *param_2 = iVar3;
  if (iVar3 == 1) {
    FUN_00498300(iVar2,&param_1,&local_8,local_4);
    if (param_1 != local_8) {
      *piVar1 = 2;
    }
  }
  return;
}

