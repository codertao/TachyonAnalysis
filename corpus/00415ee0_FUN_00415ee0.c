
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415ee0(int param_1,int param_2)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0xc0) & 0x20) != 0) {
    FUN_00415ec0(param_1);
  }
  if (*(int *)(param_1 + 200) != 0) {
    FUN_00465ff0(*(int *)(param_1 + 200));
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 0xc2) == '\x02') {
    _DAT_005b3310 = _DAT_005b3310 + -1;
  }
  if ((*(code **)(param_1 + 0x84) != (code *)0x0) && (param_2 != 0)) {
    (**(code **)(param_1 + 0x84))(param_1);
  }
  if (((*(int *)(param_1 + 0x8c) != 0) && (param_2 != 0)) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x38), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1,0x17,0);
  }
  FUN_00492ba0(param_1,&DAT_005b31c0);
  FUN_00415e50(*(undefined4 *)(param_1 + 0xe8));
  FUN_0048b140(param_1);
  FUN_0045cf80(param_1,*(int *)(param_1 + 100) + 0x14);
  FUN_0045d1c0(param_1,*(int *)(param_1 + 100) + 0x14);
  FUN_0041b9b0(param_1);
  return;
}

