
void FUN_00454130(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  FUN_00454040(param_1);
  DAT_005b338c = DAT_005b338c + 1;
  if ((DAT_005b3340 != 0) &&
     (pcVar1 = *(code **)(*(int *)(DAT_005b3340 + 0x8c) + 0x38), pcVar1 != (code *)0x0)) {
    (*pcVar1)(DAT_005b3340,0x10,param_1);
  }
  if (0x31 < DAT_005b338c) {
    DAT_005b3390 = DAT_005b3390 + 1;
    DAT_005b338c = 0;
    uVar2 = FUN_00454100(DAT_005b3340,DAT_005b3390);
    FUN_00415940(uVar2);
  }
  return;
}

