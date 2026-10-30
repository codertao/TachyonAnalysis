
void FUN_0045eb40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  puVar1 = (undefined4 *)FUN_004b87d0();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = *param_3;
    puVar1[4] = param_3[1];
    puVar1[5] = param_3[2];
    local_18 = 0x800;
    local_14 = 4;
    local_c = param_1;
    FUN_004b87f0(puVar1,0x1012,0x18,&local_18);
  }
  return;
}

