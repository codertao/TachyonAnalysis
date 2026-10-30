
void FUN_0045dad0(undefined1 param_1,undefined1 param_2,undefined1 param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  undefined4 local_18;
  uint local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = (undefined1 *)FUN_004b87d0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    local_18 = 0x800;
    local_14 = param_4;
    if ((param_4 & 0x10) == 0) {
      local_8 = param_6;
    }
    else {
      local_8 = param_5;
    }
    local_c = param_7;
    local_4 = param_8;
    FUN_004b87f0(puVar1,0x1034,4,&local_18);
  }
  return;
}

