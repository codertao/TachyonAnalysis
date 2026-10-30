
void FUN_00450d30(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0048e800(DAT_005a6140,param_1);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_TEXT_NOT_FOUND_005486c0;
  }
  FUN_0048e970(pcVar1,DAT_0058f420,*param_3,param_3[1],param_3[2],0xffff,0x10000,0);
  return;
}

