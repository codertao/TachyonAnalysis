
void FUN_0046da20(int param_1,int *param_2,uint *param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (iVar1 = *param_2, iVar1 != 0)) &&
     (param_3 != (uint *)0x0)) {
    if (*(int *)(iVar1 + 0x120) != -1) {
      if (*(int *)(iVar1 + 0x124) == 0) {
        uVar2 = *param_3;
        *param_3 = uVar2 + 1;
        if (param_4 <= uVar2 + 1) {
          *param_3 = 0;
        }
        param_1 = param_1 + *param_3 * 0x128;
        *param_2 = param_1;
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x120);
        *(undefined4 *)(*param_2 + 0xa8) = *(undefined4 *)(*param_2 + 0xa4);
        *(undefined4 *)(*param_2 + 0xb4) = *(undefined4 *)(*param_2 + 0xb0);
        *(undefined4 *)(*param_2 + 0xbc) = *(undefined4 *)(*param_2 + 0xb8);
        *(undefined4 *)(*param_2 + 0x84) = *(undefined4 *)(*param_2 + 0x80);
        if ((*(int *)(*param_2 + 200) == 0) && (iVar1 != 0)) {
          FUN_0043f620(DAT_005879a0,iVar1 + 0xcc,0x20000);
        }
      }
      else {
        *(int *)(iVar1 + 0x124) = *(int *)(iVar1 + 0x124) + -1;
      }
    }
    FUN_0046d910(*param_2,param_5);
    FUN_0046e400(*(undefined4 *)(*param_2 + 0xc0));
  }
  return;
}

