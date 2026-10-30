
void FUN_00454870(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  Desc_CreateByType(param_1 + 4,param_2,1,&param_2,1,0xffffffff);
  DAT_005b20d0 = 0;
  FUN_004547e0(param_1 + 0x30,param_3,*puVar1);
  return;
}

