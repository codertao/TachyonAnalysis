
void FUN_0045e1b0(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  puVar1 = (undefined2 *)FUN_004b87d0();
  if (puVar1 != (undefined2 *)0x0) {
    puVar1[1] = param_3;
    *puVar1 = param_2;
    local_18 = 0x800;
    local_14 = 4;
    local_c = param_1;
    FUN_004b87f0(puVar1,0x1124,4,&local_18);
  }
  return;
}

