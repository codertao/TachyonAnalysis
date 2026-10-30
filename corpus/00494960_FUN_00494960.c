
void FUN_00494960(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = FUN_00418d10((undefined4 *)(param_1 + 0x34),(undefined4 *)(param_1 + 0xe0),local_c,
                       *(int *)(param_1 + 100) + 0x14,param_1,*(undefined4 *)(param_1 + 200),
                       *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0xd0),&LAB_00494910);
  if ((iVar2 != 0) && (pcVar1 = *(code **)(*(int *)(param_1 + 0xdc) + 0x98), pcVar1 != (code *)0x0))
  {
    (*pcVar1)(param_1,iVar2,local_c);
  }
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x3c);
  return;
}

