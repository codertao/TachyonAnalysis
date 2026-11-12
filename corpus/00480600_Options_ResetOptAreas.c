
/* sweep: IAP%dOpt%d */

void Options_ResetOptAreas(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = 0;
    do {
      str_sprintf(&DAT_005a41e0,s_IAP_dOpt_d_00556c38,uVar2,uVar1);
      ImageArea_SetValueF4(DAT_00571280,&DAT_005a41e0,0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 9);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  return;
}

