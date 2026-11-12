
/* sweep */

void Sys_InitState(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_006039e0;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00603964 = 1;
  DAT_00603968 = 1;
  DAT_006039ec = 1;
  Input_ResetMouseState();
  DAT_00603a00 = timeGetTime();
  Sys_SetVar39a8(0);
  Sys_SetVar39ac(0x40);
  Sys_SetVar39a4(1);
  return;
}

