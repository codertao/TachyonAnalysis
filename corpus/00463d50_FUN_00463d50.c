
uint FUN_00463d50(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_40 [64];
  
  uVar3 = 0;
  iVar1 = Cbin_CountEntries(s_AI_HARDWARE_0054a29c,&DAT_0054a2a8);
  Cbin_SelectGroup(s_AI_HARDWARE_0054a29c);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_0049bdb0(&DAT_0054a2a8,local_40,0x40,0,4,1);
    uVar2 = FUN_004273d0(local_40);
    uVar3 = uVar3 | uVar2;
  }
  return uVar3;
}

