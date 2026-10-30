
void FUN_0045e890(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)FUN_004b87d0();
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 1) = param_2;
    *puVar1 = param_1;
    local_18 = 0x800;
    local_14 = 0x20;
    local_4 = param_3;
    FUN_004b87f0(puVar1,0x1126,6,&local_18);
  }
  return;
}

