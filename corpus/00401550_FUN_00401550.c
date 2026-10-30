
undefined4 FUN_00401550(int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(uint *)((uint)*(byte *)(param_2 + 0xc2) * 0x10 + DAT_0058f2e8) &
      *(uint *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + 4 + DAT_0058f2e8)) == 0) {
    return 0;
  }
  bVar2 = FUN_004012e0(param_1,param_2);
  if ((bVar2 & 1) != 0) {
    if ((bVar2 & 5) == 5) {
      *(undefined1 *)(param_1 + 0x324) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0x324) = 1;
    }
    *(int *)(param_1 + 0x90) = param_2;
    if ((*(int *)(param_2 + 0x8c) != 0) &&
       (pcVar1 = *(code **)(*(int *)(param_2 + 0x8c) + 0x34), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_2,0x15,param_1);
    }
  }
  return 1;
}

