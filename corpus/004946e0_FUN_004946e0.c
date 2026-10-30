
void FUN_004946e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((*(int *)(param_4 + 0x8c) != 0) &&
     (pcVar1 = *(code **)(*(int *)(param_4 + 0x8c) + 0x78), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_4,0x11,0);
    if ((iVar2 != 0) &&
       (pcVar1 = *(code **)(*(int *)(param_4 + 0x8c) + 0x80), pcVar1 != (code *)0x0)) {
      uStack_18 = param_1;
      uStack_c = *(undefined4 *)(param_4 + 0xe8);
      uStack_10 = param_3;
      uStack_8 = param_5;
      uStack_4 = *(undefined4 *)(param_4 + 100);
      uStack_14 = param_2;
      (*pcVar1)(param_4,7,&uStack_18);
      return;
    }
  }
  FUN_00415810(param_2,param_3,param_5,*(undefined4 *)(param_4 + 0xe8),param_1,0,0);
  return;
}

