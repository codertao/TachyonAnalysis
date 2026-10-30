
void FUN_00462030(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  puVar1 = (undefined2 *)FUN_004b87d0();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
    local_18 = 0x800;
    local_14 = 4;
    local_c = param_1;
    FUN_004b87f0(puVar1,0x1111,2,&local_18);
  }
  return;
}

