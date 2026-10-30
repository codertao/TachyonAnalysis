
void FUN_004a4440(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_00602760 + 0x54))(DAT_00602760,param_1,param_2,0x18,0,0);
  if (iVar1 == 0) {
    DAT_00602330 = 0;
    DAT_00602348 = 1;
    DAT_0060234c = 1;
  }
  else {
    DAT_00602348 = 0;
    DAT_0060234c = 1;
    (**(code **)(*DAT_00602760 + 0x54))(DAT_00602760,param_1,param_2,0x20,0,0);
  }
  if (DAT_0060398c == 0) {
    DAT_0060234c = 0;
  }
  return;
}

