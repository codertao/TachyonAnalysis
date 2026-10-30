
void FUN_00497280(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_c;
  
  local_24 = param_1;
  local_18 = 0;
  local_c = 0;
  local_20 = param_2;
  local_1c = param_5;
  local_14 = param_4;
  local_28 = param_7;
  local_2c = &DAT_0055a560 + param_3 * 0x44;
  iVar2 = (*(code *)(&PTR_FUN_0055a5d0)[param_3 * 0x44])(&local_2c);
  if (iVar2 != 0) {
    if (((&DAT_0055a638)[param_3 * 0x110] & 2) == 0) {
      FUN_004957a0(iVar2,param_2,0,param_4);
    }
    uVar3 = FUN_0048e440(param_1,&DAT_005b9600);
    if ((uVar3 < 0x2710000) || ((g_FlightStateFlags & 4) == 0)) {
      iVar1 = (&DAT_0055a560)[param_3 * 0x44];
      if ((iVar1 == 0x1d) || (((iVar1 == 0x1e || (iVar1 == 0x1f)) || (iVar1 == 0x20)))) {
        *(undefined1 **)(iVar2 + 0x6c) = &LAB_00494bb0;
      }
      else {
        *(undefined1 **)(iVar2 + 0x6c) = &LAB_00494c20;
      }
    }
    if ((param_5 & 2) != 0) {
      FUN_00466620(1,1,*(undefined4 *)(&DAT_0055a5a8 + param_3 * 0x110),iVar2,0x10000,param_6 * 2,
                   (DAT_005b39d0 - param_4) + -1);
    }
  }
  return;
}

