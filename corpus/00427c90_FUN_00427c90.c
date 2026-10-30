
void FUN_00427c90(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_64 [20];
  undefined4 local_14;
  
  if (7 < DAT_005b11bc) {
    FUN_00427b10(0);
    DAT_005b11bc = DAT_005b11bc - 1;
  }
  puVar1 = local_64;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_64[0] = param_1;
  local_64[2] = (&DAT_005b0c8c)[DAT_005b11bc * 0x15];
  local_14 = 1;
  FUN_0048ca60(DAT_005b11bc,local_64,0x80);
  FUN_0048b770(DAT_005b11bc);
  FUN_0048b800(DAT_005b11bc,1);
  DAT_005b11bc = DAT_005b11bc + 1;
  DAT_005b11b8 = 1;
  return;
}

