
/* sweep: guess */

void __thiscall PlayerDcb_ThinkAutopilot(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000010;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x78);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,2,&stack0x00000000);
  }
  iVar2 = Ent_ApproachHeight(in_stack_00000010,&stack0x00000000,DAT_005b1f0c + 0x598);
  if (iVar2 != 0) {
    DAT_005b3344 = 0;
    *(code **)(GLBL_SOME_CONTEXT + 0x68) = PlayerDcb_Think;
    SpaceDust_SetEnabled(1);
    uVar3 = Ent_CallDescHook78(DAT_005b3340);
    NetCli_SendUndocking(uVar3);
    FF_PlayJolt(0,0xd05,500000,1);
    FF_StopSpring();
  }
  return;
}

