
void FUN_0040a0d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xe8);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0xf8) =
         *(uint *)(iVar2 + 0xf8) & ~(*(uint *)(*(int *)(param_1 + 0xdc) + 0x34) & 0x118);
    do {
      iVar1 = *(int *)(iVar2 + 0xe0);
      if (iVar1 == param_1) break;
      iVar2 = iVar1;
    } while (iVar1 != 0);
  }
  if (*(code **)(g_ActiveRules + 0x6c) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0x6c))
              (*(undefined4 *)(param_1 + 0xdc),*(undefined1 *)(param_1 + 0xc2),DAT_005653f4);
  }
  FUN_0040a0b0(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x44));
  *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  FUN_0048b330(param_1);
  FUN_0048b140(param_1);
  if (*(int *)(param_1 + 0xe8) == 0) {
    SrvSend_Despawn(param_1);
  }
  else {
    SrvSend_SubpartDestroy
              (*(undefined4 *)(*(int *)(param_1 + 0xe8) + 0x78),
               *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x44),*(undefined4 *)(param_1 + 100));
  }
  FUN_0045d1c0(param_1,*(int *)(param_1 + 100) + 0x14);
  FUN_0041b970(param_1);
  FUN_00492ba0(param_1,*(undefined4 *)(param_1 + 100));
  return;
}

