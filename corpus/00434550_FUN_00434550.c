
void FUN_00434550(undefined4 param_1)

{
  undefined4 *local_4;
  
  FUN_0048e3d0(&local_4,0x40,4,s_AI_ALIAS_0053f8f8,0xd510);
  *local_4 = param_1;
  local_4[1] = 0;
  local_4[0xf] = DAT_005a5e08;
  if (DAT_005a5e08 != (undefined4 *)0x0) {
    *(undefined4 **)((int)DAT_005a5e08 + 0x38) = local_4;
  }
  DAT_005a5e08 = local_4;
  return;
}

