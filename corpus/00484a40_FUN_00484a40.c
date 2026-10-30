
void FUN_00484a40(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_0043bf10(&DAT_00583420,s_STAT_CREDITS_00550060);
  if (iVar1 == 0) {
    pcVar3 = s__Credits_00550054;
  }
  else {
    pcVar3 = *(char **)(iVar1 + 0x40);
  }
  uVar2 = FUN_004699a0();
  str_sprintf(&DAT_00577f20,s__s___d_005367b8,pcVar3,uVar2);
  FUN_0043e6a0(&DAT_00583420,s_TxtSPCreditLabel_00557924,&DAT_00577f20);
  return;
}

