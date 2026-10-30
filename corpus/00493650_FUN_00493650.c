
void FUN_00493650(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_24 = 0;
  local_20 = 0x10000;
  local_1c = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  puVar1 = &DAT_005656c8;
  iVar2 = 0x10;
  do {
    FUN_004b1bb0(local_18,&local_30);
    FUN_004b24d0(&local_24,puVar1);
    local_28 = local_28 + 0x80000;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

