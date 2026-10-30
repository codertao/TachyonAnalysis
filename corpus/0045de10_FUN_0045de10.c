
void FUN_0045de10(undefined4 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)FUN_004b87d0();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    *(undefined2 *)(puVar1 + 3) = param_2;
    local_10 = param_3;
    local_18 = 4;
    local_14 = 0x61;
    local_4 = param_4;
    FUN_004b87f0(puVar1,0x1008,0xe,&local_18);
  }
  return;
}

