
uint FUN_00427410(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = 0;
  if (PTR_s_TARGET_LEAD_PIP_005361b8 != (undefined *)0x0) {
    puVar3 = &DAT_005361c0;
    do {
      if (*(int *)puVar3[-1] != 0) {
        uVar2 = uVar2 | *puVar3;
      }
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 3;
    } while (*puVar1 != 0);
  }
  return uVar2;
}

