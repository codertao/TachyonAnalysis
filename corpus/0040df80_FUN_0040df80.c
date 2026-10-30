
undefined4 FUN_0040df80(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = FUN_004580c0(&DAT_00533540);
  uVar2 = FUN_004580c0(s_GALSPAN_00533548);
  iVar3 = FUN_0040cf70(uVar2);
  if (iVar3 != 0) {
    uVar4 = *(uint *)(iVar3 + 0xc);
  }
  iVar3 = FUN_0040cf70(uVar1);
  if ((iVar3 != 0) && (uVar4 < *(uint *)(iVar3 + 0xc))) {
    return uVar1;
  }
  return uVar2;
}

