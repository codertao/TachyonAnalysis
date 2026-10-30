
void FUN_004a4330(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_006022e0;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (DAT_005b9d1c != 0) {
    OutputDebugStringA(s_vid_Init___0055e26c);
  }
  DirectDrawCreate(0,&DAT_006027f0,0);
  if (DAT_006027f0 == (undefined4 *)0x0) {
    MessageBoxA(DAT_0060395c,s_Unable_to_initiate_DirectDraw_Pl_0055e1f4,s_NovaLogic_0055e260,0x10);
    FUN_0049f770();
  }
  (**(code **)*DAT_006027f0)(DAT_006027f0,&DAT_0052ee78,&DAT_00602760);
  if (DAT_00602760 == 0) {
    MessageBoxA(DAT_0060395c,s_Unable_to_initiate_DirectDraw2__P_0055e184,s_NovaLogic_0055e260,0x10)
    ;
    FUN_0049f770();
  }
  FUN_004a5520();
  FUN_004a55c0(DAT_0060395c);
  DAT_00602324 = 1;
  DAT_00602334 = 8;
  return;
}

