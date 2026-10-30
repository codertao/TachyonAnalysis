
void FUN_0045df50(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)FUN_004b87d0();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    *(undefined2 *)((int)puVar1 + 6) = param_3;
    *(undefined2 *)(puVar1 + 1) = param_2;
    local_18 = 0x800;
    local_14 = 0x20;
    local_4 = param_4;
    FUN_004b87f0(puVar1,0x1009,8,&local_18);
  }
  return;
}

