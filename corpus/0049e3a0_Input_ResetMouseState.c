
/* sweep */

void Input_ResetMouseState(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00603e40;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00603e44 = 0;
  DAT_00603e40 = 0;
  DAT_00603e50 = 0;
  DAT_00603e4c = 0;
  DAT_00603e48 = 0;
  return;
}

