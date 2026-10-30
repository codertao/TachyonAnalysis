
void FUN_00460570(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  FUN_0045d900(param_2,0,4,param_1,0xffffffff,0,param_5);
  FUN_0045dad0(param_6,param_7,param_8,param_3 | 4,param_4,0xffffffff,param_1,0);
  iVar1 = Ent_CreateMiscObject(param_2);
  if (iVar1 == 0) {
    FUN_0045d900(param_2,0,param_3 | 2,param_1,param_4,0,param_5);
    FUN_0045dad0(param_6,param_7,param_8,param_3 | 2,param_4,0xffffffff,param_1,0);
  }
  return;
}

