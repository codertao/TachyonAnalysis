
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433130(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  
  FUN_0049c1d0();
  FUN_0049c1f0(1);
  FUN_0049c220();
  FUN_0049c330();
  FUN_0049c370();
  FUN_0049ec60();
  FUN_004a4330();
  FUN_004a0d20();
  FUN_004a2e90();
  FUN_004a2da0();
  FUN_00445720();
  FUN_00466830();
  MessagePump_IdleTick();
  FUN_004a1ae0(FUN_00432ee0);
  FUN_0049c210(&LAB_00433050);
  FUN_0049c320(1);
  FUN_004b18c0();
  FUN_004b07a0(&LAB_00432f40);
  FUN_004b1920(0x2000,0x13880000);
  FUN_004b1870(0x32);
  FUN_004a2e70(1);
  FUN_004b7780(0xffff);
  FUN_004b1c80(0xffff,0xffff);
  FUN_004ad4a0(0x10000);
  FUN_004aecf0();
  FUN_004e53d6(DAT_0060398c);
  FUN_004a6de0();
  FUN_0049f7b0(0x100);
  FUN_0049f7d0(FUN_00433000);
  FUN_0049ecb0(0);
  puVar3 = &DAT_005a6520;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  g_MissionEndFlag = 0;
  g_CutsceneActive = 0;
  DAT_005a6140 = 0;
  g_MissionEndReason = 0;
  DAT_005a6144 = 0;
  DAT_005a6148 = 0;
  puVar3 = &DAT_005a6540;
  for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_005a614c = 0;
  DAT_005a6150 = 0;
  _g_FlightStateFlags = 0;
  puVar3 = &DAT_005a6720;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0060399c = 1;
  DAT_005a6190 = FUN_004a3e00(s_tachyon_pff_0053f3fc);
  FUN_004a1210(DAT_005a6190);
  FUN_004a0d50(1);
  FUN_004a0d40(1);
  FUN_00419b10();
  FUN_004a0d40(0);
  FUN_00433090();
  FUN_00432f60();
  local_8 = (undefined4)(longlong)ROUND(_DAT_005b2b98 * _DAT_0052e544);
  FUN_004b1d80(local_8);
  if (DAT_005b2b2c != 0) {
    FUN_004a03c0();
    FUN_004a05c0(DAT_005640d0 + 0x14);
    FUN_004a0bd0(0);
    FUN_004a0c40(0);
  }
  pcVar1 = _strstr(param_1,&DAT_0053f3f8);
  if (pcVar1 != (char *)0x0) {
    FUN_004a0d40(1);
  }
  FUN_0049e3d0();
  FUN_0049ecf0(&LAB_00432d00);
  FUN_0049ed00(&LAB_00432cb0);
  FUN_0049fc00(&LAB_00432d40);
  FUN_0049fc10(&LAB_00432d60);
  FUN_0049fc20(&LAB_00432d80);
  FUN_0049fc30(&LAB_00432dc0);
  FUN_004a5510(0x20);
  FUN_004ad4c0();
  FUN_004ad4e0(0x20);
  DAT_005a6808 = (uint)(DAT_005b2ad4 != 0);
  FUN_00451cf0();
  FUN_0042f360();
  return;
}

