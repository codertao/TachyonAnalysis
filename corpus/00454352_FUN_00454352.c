
void __thiscall FUN_00454352(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000010;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x78);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,2,&stack0x00000000);
  }
  iVar2 = FUN_00401440(in_stack_00000010,&stack0x00000000,DAT_005b1f0c + 0x598);
  if (iVar2 != 0) {
    DAT_005b3344 = 0;
    *(code **)(GLBL_SOME_CONTEXT + 0x68) = PlayerDcb_Think;
    FUN_0041c3e0(1);
    uVar3 = FUN_00454100(DAT_005b3340);
    FUN_00415970(uVar3);
    FUN_004a0760(0,0xd05,500000,1);
    FUN_004a0a90();
  }
  return;
}

